
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {struct drm_buf_entry* bufs; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct TYPE_2__ {scalar_t__ low_mark; scalar_t__ high_mark; } ;
struct drm_buf_entry {scalar_t__ buf_count; TYPE_1__ freelist; } ;
struct drm_buf_desc {scalar_t__ low_mark; scalar_t__ high_mark; int size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drm_device *VAR_4, void *VAR_5,
   struct drm_file *VAR_6)
{
 struct drm_device_dma *VAR_7 = VAR_4->dma;
 struct drm_buf_desc *VAR_8 = VAR_5;
 int VAR_9;
 struct drm_buf_entry *VAR_10;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_3;

 if (!VAR_7)
  return -VAR_3;

 FUNC_0("%d, %d, %d\n",
    VAR_8->size, VAR_8->low_mark, VAR_8->high_mark);
 VAR_9 = FUNC_2(VAR_8->size);
 if (VAR_9 < VAR_2 || VAR_9 > VAR_1)
  return -VAR_3;
 VAR_10 = &VAR_7->bufs[VAR_9];

 if (VAR_8->low_mark < 0 || VAR_8->low_mark > VAR_10->buf_count)
  return -VAR_3;
 if (VAR_8->high_mark < 0 || VAR_8->high_mark > VAR_10->buf_count)
  return -VAR_3;

 VAR_10->freelist.low_mark = VAR_8->low_mark;
 VAR_10->freelist.high_mark = VAR_8->high_mark;

 return 0;
}
