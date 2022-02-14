
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int ctx_count; int ctxlist; } ;
struct drm_ctx_list {int handle; int head; struct drm_file* tag; } ;
struct drm_ctx {int handle; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 void* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,int *) ;
 struct drm_ctx_list* FUNC_6 (int,int ,int ) ;

int FUNC_7(struct drm_device *VAR_4, void *VAR_5,
        struct drm_file *VAR_6)
{
 struct drm_ctx_list *VAR_7;
 struct drm_ctx *VAR_8 = VAR_5;

 VAR_8->handle = FUNC_4(VAR_4);
 if (VAR_8->handle == VAR_0) {

  VAR_8->handle = FUNC_4(VAR_4);
 }
 FUNC_0("%d\n", VAR_8->handle);
 if (VAR_8->handle == -1) {
  FUNC_0("Not enough free contexts.\n");

  return -VAR_2;
 }

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1, VAR_3);
 if (!VAR_7) {
  FUNC_0("out of memory\n");
  return -VAR_2;
 }

 FUNC_3(&VAR_7->head);
 VAR_7->handle = VAR_8->handle;
 VAR_7->tag = VAR_6;

 FUNC_1(VAR_4);
 FUNC_5(&VAR_7->head, &VAR_4->ctxlist);
 ++VAR_4->ctx_count;
 FUNC_2(VAR_4);

 return 0;
}
