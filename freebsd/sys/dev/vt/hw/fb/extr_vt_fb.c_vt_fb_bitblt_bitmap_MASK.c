
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t term_color_t ;
struct TYPE_3__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_4__ {TYPE_1__ tr_end; } ;
struct vt_window {TYPE_2__ vw_draw_area; } ;
struct vt_device {scalar_t__ vd_transpose; struct fb_info* vd_softc; } ;
struct fb_info {int* fb_cmap; int fb_flags; scalar_t__ fb_vbase; unsigned int fb_stride; } ;


 int FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct fb_info*,int,int) ;
 int FUNC_3 (struct fb_info*,int,int) ;
 int FUNC_4 (struct fb_info*,int,int) ;

void
FUNC_5(struct vt_device *VAR_1, const struct vt_window *VAR_2,
    const uint8_t *VAR_3, const uint8_t *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, unsigned int VAR_8, term_color_t VAR_9, term_color_t VAR_10)
{
 struct fb_info *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 VAR_11 = VAR_1->vd_softc;
 VAR_16 = FUNC_0(VAR_11);
 VAR_12 = VAR_11->fb_cmap[VAR_9];
 VAR_13 = VAR_11->fb_cmap[VAR_10];
 VAR_17 = (VAR_5 + 7) / 8;

 if (VAR_11->fb_flags & VAR_0)
  return;

 FUNC_1((VAR_11->fb_vbase != 0), ("Unmapped framebuffer"));


 if (VAR_8 + VAR_6 > VAR_2->vw_draw_area.tr_end.tp_row) {
  if (VAR_8 >= VAR_2->vw_draw_area.tr_end.tp_row)
   return;
  VAR_6 = VAR_2->vw_draw_area.tr_end.tp_row - VAR_8;
 }
 if (VAR_7 + VAR_5 > VAR_2->vw_draw_area.tr_end.tp_col) {
  if (VAR_7 >= VAR_2->vw_draw_area.tr_end.tp_col)
   return;
  VAR_5 = VAR_2->vw_draw_area.tr_end.tp_col - VAR_7;
 }
 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   VAR_21 = VAR_19 * VAR_17 + VAR_18 / 8;
   VAR_20 = 0x80 >> (VAR_18 % 8);

   if (VAR_4 != ((void*)0) && (VAR_4[VAR_21] & VAR_20) == 0)
    continue;
   VAR_15 = (VAR_8 + VAR_19) * VAR_11->fb_stride + (VAR_7 + VAR_18) * VAR_16;
   VAR_15 += VAR_1->vd_transpose;
   VAR_14 = VAR_3[VAR_21] & VAR_20 ? VAR_12 : VAR_13;

   switch(VAR_16) {
   case 1:
    FUNC_2(VAR_11, VAR_15, VAR_14);
    break;
   case 2:
    FUNC_3(VAR_11, VAR_15, VAR_14);
    break;
   case 3:

    FUNC_2(VAR_11, VAR_15, (VAR_14 >> 16) & 0xff);
    FUNC_2(VAR_11, VAR_15 + 1, (VAR_14 >> 8) & 0xff);
    FUNC_2(VAR_11, VAR_15 + 2, VAR_14 & 0xff);
    break;
   case 4:
    FUNC_4(VAR_11, VAR_15, VAR_14);
    break;
   default:

    break;
   }
  }
 }
}
