
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int type; int crtc_hdisplay; int hdisplay; int crtc_hsync_start; int hsync_start; int crtc_hsync_end; int hsync_end; int crtc_htotal; int htotal; int crtc_vdisplay; int vdisplay; int crtc_vsync_start; int vsync_start; int crtc_vsync_end; int vsync_end; int crtc_vtotal; int vtotal; int flags; int vscan; void* crtc_hblank_end; void* crtc_hblank_start; void* crtc_vblank_end; void* crtc_vblank_start; int hskew; int crtc_hskew; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;

void FUNC_2(struct drm_display_mode *VAR_5, int VAR_6)
{
 if ((VAR_5 == ((void*)0)) || ((VAR_5->type & VAR_4) == VAR_3))
  return;

 VAR_5->crtc_hdisplay = VAR_5->hdisplay;
 VAR_5->crtc_hsync_start = VAR_5->hsync_start;
 VAR_5->crtc_hsync_end = VAR_5->hsync_end;
 VAR_5->crtc_htotal = VAR_5->htotal;
 VAR_5->crtc_hskew = VAR_5->hskew;
 VAR_5->crtc_vdisplay = VAR_5->vdisplay;
 VAR_5->crtc_vsync_start = VAR_5->vsync_start;
 VAR_5->crtc_vsync_end = VAR_5->vsync_end;
 VAR_5->crtc_vtotal = VAR_5->vtotal;

 if (VAR_5->flags & VAR_2) {
  if (VAR_6 & VAR_0) {
   VAR_5->crtc_vdisplay /= 2;
   VAR_5->crtc_vsync_start /= 2;
   VAR_5->crtc_vsync_end /= 2;
   VAR_5->crtc_vtotal /= 2;
  }
 }

 if (VAR_5->flags & VAR_1) {
  VAR_5->crtc_vdisplay *= 2;
  VAR_5->crtc_vsync_start *= 2;
  VAR_5->crtc_vsync_end *= 2;
  VAR_5->crtc_vtotal *= 2;
 }

 if (VAR_5->vscan > 1) {
  VAR_5->crtc_vdisplay *= VAR_5->vscan;
  VAR_5->crtc_vsync_start *= VAR_5->vscan;
  VAR_5->crtc_vsync_end *= VAR_5->vscan;
  VAR_5->crtc_vtotal *= VAR_5->vscan;
 }

 VAR_5->crtc_vblank_start = FUNC_1(VAR_5->crtc_vsync_start, VAR_5->crtc_vdisplay);
 VAR_5->crtc_vblank_end = FUNC_0(VAR_5->crtc_vsync_end, VAR_5->crtc_vtotal);
 VAR_5->crtc_hblank_start = FUNC_1(VAR_5->crtc_hsync_start, VAR_5->crtc_hdisplay);
 VAR_5->crtc_hblank_end = FUNC_0(VAR_5->crtc_hsync_end, VAR_5->crtc_htotal);
}
