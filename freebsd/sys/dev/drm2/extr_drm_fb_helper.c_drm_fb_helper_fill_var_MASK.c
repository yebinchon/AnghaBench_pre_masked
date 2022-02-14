
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vt_kms_softc {struct drm_fb_helper* fb_helper; } ;
struct fb_info {scalar_t__ fb_priv; int fb_depth; int fb_height; int fb_width; int fb_name; } ;
struct drm_framebuffer {int bits_per_pixel; int height; int width; } ;
struct drm_fb_helper {TYPE_1__* dev; struct drm_framebuffer* fb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct fb_info *VAR_0, struct drm_fb_helper *VAR_1,
       uint32_t VAR_2, uint32_t VAR_3)
{
 struct drm_framebuffer *VAR_4 = VAR_1->fb;
 struct vt_kms_softc *VAR_5;

 VAR_0->fb_name = FUNC_0(VAR_1->dev->dev);
 VAR_0->fb_width = VAR_4->width;
 VAR_0->fb_height = VAR_4->height;
 VAR_0->fb_depth = VAR_4->bits_per_pixel;

 VAR_5 = (struct vt_kms_softc *)VAR_0->fb_priv;
 VAR_5->fb_helper = VAR_1;
}
