
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf_free {int count; int * list; } ;
struct drm_buf {struct drm_file* file_priv; } ;
typedef int idx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int*,int *,int) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_buf*) ;

int FUNC_5(struct drm_device *VAR_4, void *VAR_5,
   struct drm_file *VAR_6)
{
 struct drm_device_dma *VAR_7 = VAR_4->dma;
 struct drm_buf_free *VAR_8 = VAR_5;
 int VAR_9;
 int VAR_10;
 struct drm_buf *VAR_11;

 if (!FUNC_3(VAR_4, VAR_0))
  return -VAR_3;

 if (!VAR_7)
  return -VAR_3;

 FUNC_0("%d\n", VAR_8->count);
 for (VAR_9 = 0; VAR_9 < VAR_8->count; VAR_9++) {
  if (FUNC_2(&VAR_10, &VAR_8->list[VAR_9], sizeof(VAR_10)))
   return -VAR_2;
  if (VAR_10 < 0 || VAR_10 >= VAR_7->buf_count) {
   FUNC_1("Index %d (of %d max)\n",
      VAR_10, VAR_7->buf_count - 1);
   return -VAR_3;
  }
  VAR_11 = VAR_7->buflist[VAR_10];
  if (VAR_11->file_priv != VAR_6) {
   FUNC_1("Process %d freeing buffer not owned\n",
      VAR_1);
   return -VAR_3;
  }
  FUNC_4(VAR_4, VAR_11);
 }

 return 0;
}
