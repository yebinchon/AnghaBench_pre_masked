
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
typedef int term_color_t ;
typedef int term_char_t ;
struct TYPE_12__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_13__ {TYPE_4__ tr_begin; } ;
struct vt_window {TYPE_5__ vw_draw_area; int vw_buf; struct vt_font* vw_font; } ;
struct vt_font {unsigned int vf_width; unsigned int vf_height; } ;
struct vt_device {unsigned int vd_mx_drawn; unsigned int vd_my_drawn; int vd_mcursor_bg; int vd_mcursor_fg; TYPE_3__* vd_mcursor; int vd_mshown; } ;
struct TYPE_11__ {unsigned int width; unsigned int height; int * mask; int const* map; } ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (struct vt_device*,struct vt_window const*,int const*,int *,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (struct vt_device*,TYPE_6__*) ;
 int * FUNC_5 (struct vt_font*,int ) ;

void
FUNC_6(struct vt_device *VAR_0, const struct vt_window *VAR_1,
    const term_rect_t *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;
 struct vt_font *VAR_7;
 term_char_t VAR_8;
 term_color_t VAR_9, VAR_10;
 const uint8_t *VAR_11;

 VAR_7 = VAR_1->vw_font;

 for (VAR_4 = VAR_2->tr_begin.tp_row; VAR_4 < VAR_2->tr_end.tp_row; ++VAR_4) {
  for (VAR_3 = VAR_2->tr_begin.tp_col; VAR_3 < VAR_2->tr_end.tp_col;
      ++VAR_3) {
   VAR_5 = VAR_3 * VAR_7->vf_width +
       VAR_1->vw_draw_area.tr_begin.tp_col;
   VAR_6 = VAR_4 * VAR_7->vf_height +
       VAR_1->vw_draw_area.tr_begin.tp_row;

   VAR_8 = FUNC_0(&VAR_1->vw_buf, VAR_4, VAR_3);
   VAR_11 = FUNC_5(VAR_7, VAR_8);
   FUNC_3(VAR_8,
       FUNC_1(&VAR_1->vw_buf, VAR_4, VAR_3), &VAR_9, &VAR_10);

   FUNC_2(VAR_0, VAR_1,
       VAR_11, ((void*)0), VAR_7->vf_width, VAR_7->vf_height,
       VAR_5, VAR_6, VAR_9, VAR_10);
  }
 }


 if (!VAR_0->vd_mshown)
  return;

 term_rect_t VAR_12;

 VAR_12.tr_begin.tp_col = VAR_2->tr_begin.tp_col * VAR_7->vf_width;
 VAR_12.tr_begin.tp_row = VAR_2->tr_begin.tp_row * VAR_7->vf_height;
 VAR_12.tr_end.tp_col = VAR_2->tr_end.tp_col * VAR_7->vf_width;
 VAR_12.tr_end.tp_row = VAR_2->tr_end.tp_row * VAR_7->vf_height;

 if (FUNC_4(VAR_0, &VAR_12)) {
  FUNC_2(VAR_0, VAR_1,
      VAR_0->vd_mcursor->map, VAR_0->vd_mcursor->mask,
      VAR_0->vd_mcursor->width, VAR_0->vd_mcursor->height,
      VAR_0->vd_mx_drawn + VAR_1->vw_draw_area.tr_begin.tp_col,
      VAR_0->vd_my_drawn + VAR_1->vw_draw_area.tr_begin.tp_row,
      VAR_0->vd_mcursor_fg, VAR_0->vd_mcursor_bg);
 }

}
