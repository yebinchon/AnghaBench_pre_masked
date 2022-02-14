
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
typedef size_t term_color_t ;
struct TYPE_4__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_5__ {TYPE_1__ tr_end; } ;
struct vt_window {TYPE_2__ vw_draw_area; } ;
struct vt_device {struct creatorfb_softc* vd_softc; } ;
struct TYPE_6__ {unsigned int fb_stride; int * fb_cmap; } ;
struct creatorfb_softc {TYPE_3__ fb; int memh; int memt; } ;


 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_0, const struct vt_window *VAR_1,
    const uint8_t *VAR_2, const uint8_t *VAR_3,
    unsigned int VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7, term_color_t VAR_8, term_color_t VAR_9)
{
 struct creatorfb_softc *VAR_10 = VAR_0->vd_softc;
 u_long VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;
 uint8_t VAR_16, VAR_17;

 VAR_12 = VAR_10->fb.fb_cmap[VAR_8];
 VAR_13 = VAR_10->fb.fb_cmap[VAR_9];
 VAR_16 = VAR_17 = 0;

 VAR_11 = (VAR_10->fb.fb_stride * VAR_7) + 4*VAR_6;
 for (VAR_15 = 0;
     VAR_15 < VAR_5 && VAR_7 + VAR_15 < VAR_1->vw_draw_area.tr_end.tp_row;
     VAR_15++) {
  for (VAR_14 = 0;
      VAR_14 < VAR_4 && VAR_6 + VAR_14 < VAR_1->vw_draw_area.tr_end.tp_col;
      VAR_14++) {
   if (VAR_14 % 8 == 0)
    VAR_16 = *VAR_2++;
   else
    VAR_16 <<= 1;
   if (VAR_3 != ((void*)0)) {
    if (VAR_14 % 8 == 0)
     VAR_17 = *VAR_3++;
    else
     VAR_17 <<= 1;

    if ((VAR_17 & 0x80) == 0)
     continue;
   }
   FUNC_0(VAR_10->memt, VAR_10->memh, VAR_11 + 4*VAR_14,
       (VAR_16 & 0x80) ? VAR_12 : VAR_13);
  }
  VAR_11 += VAR_10->fb.fb_stride;
 }
}
