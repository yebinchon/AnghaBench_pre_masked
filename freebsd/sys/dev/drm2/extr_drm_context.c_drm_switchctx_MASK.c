
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int last_context; } ;
struct drm_ctx {int handle; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 struct drm_ctx *VAR_3 = VAR_1;

 FUNC_0("%d\n", VAR_3->handle);
 return FUNC_1(VAR_0, VAR_0->last_context, VAR_3->handle);
}
