
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_9__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_14__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_6__ term_rect_t ;
typedef scalar_t__ term_color_t ;
typedef scalar_t__ term_char_t ;
struct TYPE_12__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_13__ {TYPE_4__ tr_begin; } ;
struct vt_window {TYPE_5__ vw_draw_area; int vw_buf; struct vt_font* vw_font; } ;
struct vt_font {unsigned int vf_width; unsigned int vf_height; } ;
struct vt_device {scalar_t__* vd_drawn; scalar_t__* vd_drawnfg; scalar_t__* vd_drawnbg; unsigned int vd_mx_drawn; unsigned int vd_my_drawn; scalar_t__ vd_mcursor_fg; scalar_t__ vd_mcursor_bg; TYPE_3__* vd_mcursor; int vd_mshown; } ;
struct TYPE_11__ {unsigned int width; unsigned int height; int * mask; int const* map; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct vt_device*,struct vt_window const*,int const*,int *,unsigned int,unsigned int,unsigned int,unsigned int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct vt_device*,TYPE_6__*) ;
 int * FUNC_6 (struct vt_font*,scalar_t__) ;

void
FUNC_7(struct vt_device *VAR_1, const struct vt_window *VAR_2,
    const term_rect_t *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 struct vt_font *VAR_8;
 term_char_t VAR_9;
 term_color_t VAR_10, VAR_11;
 const uint8_t *VAR_12;
 size_t VAR_13;

 VAR_8 = VAR_2->vw_font;

 for (VAR_5 = VAR_3->tr_begin.tp_row; VAR_5 < VAR_3->tr_end.tp_row; ++VAR_5) {
  for (VAR_4 = VAR_3->tr_begin.tp_col; VAR_4 < VAR_3->tr_end.tp_col;
      ++VAR_4) {
   VAR_6 = VAR_4 * VAR_8->vf_width +
       VAR_2->vw_draw_area.tr_begin.tp_col;
   VAR_7 = VAR_5 * VAR_8->vf_height +
       VAR_2->vw_draw_area.tr_begin.tp_row;

   VAR_9 = FUNC_1(&VAR_2->vw_buf, VAR_5, VAR_4);
   VAR_12 = FUNC_6(VAR_8, VAR_9);
   FUNC_3(VAR_9,
       FUNC_2(&VAR_2->vw_buf, VAR_5, VAR_4), &VAR_10, &VAR_11);

   VAR_13 = VAR_5 * FUNC_0(VAR_0) + VAR_4;
   if (VAR_1->vd_drawn && (VAR_1->vd_drawn[VAR_13] == VAR_9) &&
       VAR_1->vd_drawnfg && (VAR_1->vd_drawnfg[VAR_13] == VAR_10) &&
       VAR_1->vd_drawnbg && (VAR_1->vd_drawnbg[VAR_13] == VAR_11))
    continue;

   FUNC_4(VAR_1, VAR_2,
       VAR_12, ((void*)0), VAR_8->vf_width, VAR_8->vf_height,
       VAR_6, VAR_7, VAR_10, VAR_11);

   if (VAR_1->vd_drawn)
    VAR_1->vd_drawn[VAR_13] = VAR_9;
   if (VAR_1->vd_drawnfg)
    VAR_1->vd_drawnfg[VAR_13] = VAR_10;
   if (VAR_1->vd_drawnbg)
    VAR_1->vd_drawnbg[VAR_13] = VAR_11;
  }
 }


 if (!VAR_1->vd_mshown)
  return;

 term_rect_t VAR_14;

 VAR_14.tr_begin.tp_col = VAR_3->tr_begin.tp_col * VAR_8->vf_width;
 VAR_14.tr_begin.tp_row = VAR_3->tr_begin.tp_row * VAR_8->vf_height;
 VAR_14.tr_end.tp_col = VAR_3->tr_end.tp_col * VAR_8->vf_width;
 VAR_14.tr_end.tp_row = VAR_3->tr_end.tp_row * VAR_8->vf_height;

 if (FUNC_5(VAR_1, &VAR_14)) {
  FUNC_4(VAR_1, VAR_2,
      VAR_1->vd_mcursor->map, VAR_1->vd_mcursor->mask,
      VAR_1->vd_mcursor->width, VAR_1->vd_mcursor->height,
      VAR_1->vd_mx_drawn + VAR_2->vw_draw_area.tr_begin.tp_col,
      VAR_1->vd_my_drawn + VAR_2->vw_draw_area.tr_begin.tp_row,
      VAR_1->vd_mcursor_fg, VAR_1->vd_mcursor_bg);
 }

}
