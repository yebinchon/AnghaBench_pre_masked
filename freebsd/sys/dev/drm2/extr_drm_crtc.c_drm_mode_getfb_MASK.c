
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_object {int dummy; } ;
struct drm_mode_fb_cmd {scalar_t__ handle; int pitch; int bpp; int depth; int width; int height; int fb_id; } ;
struct drm_framebuffer {TYPE_1__* funcs; int * pitches; int bits_per_pixel; int depth; int width; int height; } ;
struct drm_file {int dummy; } ;
struct TYPE_4__ {int mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {int (* create_handle ) (struct drm_framebuffer*,struct drm_file*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_mode_object* FUNC_1 (struct drm_device*,int ,int ) ;
 struct drm_framebuffer* FUNC_2 (struct drm_mode_object*) ;
 int FUNC_3 (struct drm_framebuffer*,struct drm_file*,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_3,
     void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_mode_fb_cmd *VAR_6 = VAR_4;
 struct drm_mode_object *VAR_7;
 struct drm_framebuffer *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_4(&VAR_3->mode_config.mutex);
 VAR_7 = FUNC_1(VAR_3, VAR_6->fb_id, VAR_1);
 if (!VAR_7) {
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_8 = FUNC_2(VAR_7);

 VAR_6->height = VAR_8->height;
 VAR_6->width = VAR_8->width;
 VAR_6->depth = VAR_8->depth;
 VAR_6->bpp = VAR_8->bits_per_pixel;
 VAR_6->pitch = VAR_8->pitches[0];
 VAR_6->handle = 0;
 VAR_8->funcs->create_handle(VAR_8, VAR_5, &VAR_6->handle);

out:
 FUNC_5(&VAR_3->mode_config.mutex);
 return VAR_9;
}
