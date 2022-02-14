
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_local_map {scalar_t__ handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ max_context; struct drm_local_map** context_sareas; } ;
struct drm_ctx_priv_map {unsigned int ctx_id; void* handle; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
      struct drm_file *VAR_3)
{
 struct drm_ctx_priv_map *VAR_4 = VAR_2;
 struct drm_local_map *VAR_5;

 FUNC_0(VAR_1);
 if (VAR_1->max_context < 0 ||
     VAR_4->ctx_id >= (unsigned) VAR_1->max_context) {
  FUNC_1(VAR_1);
  return VAR_0;
 }

 VAR_5 = VAR_1->context_sareas[VAR_4->ctx_id];
 FUNC_1(VAR_1);

 VAR_4->handle = (void *)VAR_5->handle;

 return 0;
}
