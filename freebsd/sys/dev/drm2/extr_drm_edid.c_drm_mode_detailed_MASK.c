
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct edid {int width_cm; int height_cm; } ;
struct drm_display_mode {int clock; unsigned int hdisplay; unsigned int hsync_start; unsigned int hsync_end; unsigned int htotal; unsigned int vdisplay; unsigned int vsync_start; unsigned int vsync_end; unsigned int vtotal; int width_mm; int height_mm; int vrefresh; int type; int flags; } ;
struct drm_device {int dummy; } ;
struct detailed_pixel_timing {int hactive_hblank_hi; int hactive_lo; int vactive_vblank_hi; int vactive_lo; int hblank_lo; int vblank_lo; int hsync_vsync_offset_pulse_width_hi; int hsync_offset_lo; int hsync_pulse_width_lo; int vsync_offset_pulse_width_lo; int misc; int width_mm_lo; int width_height_mm_hi; int height_mm_lo; } ;
struct TYPE_2__ {struct detailed_pixel_timing pixel_data; } ;
struct detailed_timing {int pixel_clock; TYPE_1__ data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*,unsigned int,unsigned int,int,int,int,int) ;
 struct drm_display_mode* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_display_mode*,struct detailed_pixel_timing*) ;
 int FUNC_5 (struct drm_display_mode*) ;
 int FUNC_6 (struct drm_display_mode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static struct drm_display_mode *FUNC_9(struct drm_device *VAR_14,
        struct edid *VAR_15,
        struct detailed_timing *VAR_16,
        u32 VAR_17)
{
 struct drm_display_mode *VAR_18;
 struct detailed_pixel_timing *VAR_19 = &VAR_16->data.pixel_data;
 unsigned VAR_20 = (VAR_19->hactive_hblank_hi & 0xf0) << 4 | VAR_19->hactive_lo;
 unsigned VAR_21 = (VAR_19->vactive_vblank_hi & 0xf0) << 4 | VAR_19->vactive_lo;
 unsigned VAR_22 = (VAR_19->hactive_hblank_hi & 0xf) << 8 | VAR_19->hblank_lo;
 unsigned VAR_23 = (VAR_19->vactive_vblank_hi & 0xf) << 8 | VAR_19->vblank_lo;
 unsigned VAR_24 = (VAR_19->hsync_vsync_offset_pulse_width_hi & 0xc0) << 2 | VAR_19->hsync_offset_lo;
 unsigned VAR_25 = (VAR_19->hsync_vsync_offset_pulse_width_hi & 0x30) << 4 | VAR_19->hsync_pulse_width_lo;
 unsigned VAR_26 = (VAR_19->hsync_vsync_offset_pulse_width_hi & 0xc) << 2 | VAR_19->vsync_offset_pulse_width_lo >> 4;
 unsigned VAR_27 = (VAR_19->hsync_vsync_offset_pulse_width_hi & 0x3) << 4 | (VAR_19->vsync_offset_pulse_width_lo & 0xf);


 if (VAR_20 < 64 || VAR_21 < 64)
  return ((void*)0);

 if (VAR_19->misc & VAR_2) {
  FUNC_8("stereo mode not supported\n");
  return ((void*)0);
 }
 if (!(VAR_19->misc & VAR_1)) {
  FUNC_8("composite sync not supported\n");
 }


 if (!VAR_25 || !VAR_27) {
  FUNC_0("Incorrect Detailed timing. "
    "Wrong Hsync/Vsync pulse width\n");
  return ((void*)0);
 }

 if (VAR_17 & VAR_13) {
  VAR_18 = FUNC_2(VAR_14, VAR_20, VAR_21, 60, 1, 0, 0);
  if (!VAR_18)
   return ((void*)0);

  goto set_size;
 }

 VAR_18 = FUNC_3(VAR_14);
 if (!VAR_18)
  return ((void*)0);

 if (VAR_17 & VAR_9)
  VAR_16->pixel_clock = FUNC_1(1088);

 VAR_18->clock = FUNC_7(VAR_16->pixel_clock) * 10;

 VAR_18->hdisplay = VAR_20;
 VAR_18->hsync_start = VAR_18->hdisplay + VAR_24;
 VAR_18->hsync_end = VAR_18->hsync_start + VAR_25;
 VAR_18->htotal = VAR_18->hdisplay + VAR_22;

 VAR_18->vdisplay = VAR_21;
 VAR_18->vsync_start = VAR_18->vdisplay + VAR_26;
 VAR_18->vsync_end = VAR_18->vsync_start + VAR_27;
 VAR_18->vtotal = VAR_18->vdisplay + VAR_23;


 if (VAR_18->hsync_end > VAR_18->htotal)
  VAR_18->htotal = VAR_18->hsync_end + 1;
 if (VAR_18->vsync_end > VAR_18->vtotal)
  VAR_18->vtotal = VAR_18->vsync_end + 1;

 FUNC_4(VAR_18, VAR_19);

 if (VAR_17 & VAR_11) {
  VAR_19->misc |= VAR_0 | VAR_3;
 }

 VAR_18->flags |= (VAR_19->misc & VAR_0) ?
  VAR_6 : VAR_4;
 VAR_18->flags |= (VAR_19->misc & VAR_3) ?
  VAR_7 : VAR_5;

set_size:
 VAR_18->width_mm = VAR_19->width_mm_lo | (VAR_19->width_height_mm_hi & 0xf0) << 4;
 VAR_18->height_mm = VAR_19->height_mm_lo | (VAR_19->width_height_mm_hi & 0xf) << 8;

 if (VAR_17 & VAR_10) {
  VAR_18->width_mm *= 10;
  VAR_18->height_mm *= 10;
 }

 if (VAR_17 & VAR_12) {
  VAR_18->width_mm = VAR_15->width_cm * 10;
  VAR_18->height_mm = VAR_15->height_cm * 10;
 }

 VAR_18->type = VAR_8;
 VAR_18->vrefresh = FUNC_6(VAR_18);
 FUNC_5(VAR_18);

 return VAR_18;
}
