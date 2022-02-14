
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* destroy ) (struct drm_framebuffer*) ;} ;


 int FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_1(struct drm_framebuffer *VAR_0)
{
 VAR_0->funcs->destroy(VAR_0);
}
