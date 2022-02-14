
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int used_colors_list ;
typedef unsigned int uint8_t ;
struct TYPE_9__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_8__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_13__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_6__ term_rect_t ;
typedef size_t term_color_t ;
typedef int term_char_t ;
struct TYPE_11__ {unsigned int tp_col; } ;
struct TYPE_10__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_12__ {TYPE_4__ tr_end; TYPE_3__ tr_begin; } ;
struct vt_buf {int dummy; } ;
struct vt_window {TYPE_5__ vw_draw_area; struct vt_font* vw_font; struct vt_buf vw_buf; } ;
struct vt_mouse_cursor {unsigned int width; unsigned int height; unsigned int const* map; int * mask; } ;
struct vt_font {int vf_height; unsigned int vf_width; } ;
struct vt_device {unsigned int vd_mx_drawn; unsigned int vd_my_drawn; size_t vd_mcursor_fg; size_t vd_mcursor_bg; struct vt_mouse_cursor* vd_mcursor; scalar_t__ vd_mshown; } ;
typedef int pattern_ncolors ;
typedef int pattern_2colors ;


 int FUNC_0 (struct vt_buf const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct vt_buf const*,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int*,int ,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct vt_device*,unsigned int*,size_t,size_t,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct vt_device*,unsigned int*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int*,unsigned int*,unsigned int const*,int *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,size_t,size_t,int) ;
 int FUNC_7 (int ,int ,size_t*,size_t*) ;
 scalar_t__ FUNC_8 (struct vt_device*,TYPE_6__*) ;
 unsigned int* FUNC_9 (struct vt_font const*,int ) ;

__attribute__((used)) static void
FUNC_10(struct vt_device *VAR_1,
    const struct vt_window *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 const struct vt_buf *VAR_5;
 const struct vt_font *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12[16], VAR_13;
 uint8_t VAR_14[VAR_2->vw_font->vf_height];
 uint8_t VAR_15[VAR_2->vw_font->vf_height * 16];
 term_char_t VAR_16;
 term_color_t VAR_17, VAR_18;
 const uint8_t *VAR_19;

 VAR_5 = &VAR_2->vw_buf;
 VAR_6 = VAR_2->vw_font;
 VAR_7 = VAR_3;
 VAR_13 = 0;
 FUNC_2(VAR_12, 0, sizeof(VAR_12));
 FUNC_2(VAR_14, 0, sizeof(VAR_14));
 FUNC_2(VAR_15, 0, sizeof(VAR_15));

 if (VAR_7 < VAR_2->vw_draw_area.tr_begin.tp_col) {





  VAR_7 = VAR_2->vw_draw_area.tr_begin.tp_col;
 }

 while (VAR_7 < VAR_3 + VAR_0 &&
     VAR_7 < VAR_2->vw_draw_area.tr_end.tp_col) {







  VAR_8 = (VAR_7 - VAR_2->vw_draw_area.tr_begin.tp_col) / VAR_6->vf_width;
  VAR_9 = (VAR_4 - VAR_2->vw_draw_area.tr_begin.tp_row) / VAR_6->vf_height;

  VAR_16 = FUNC_0(VAR_5, VAR_9, VAR_8);
  VAR_19 = FUNC_9(VAR_6, VAR_16);

  FUNC_7(VAR_16, FUNC_1(VAR_5, VAR_9, VAR_8), &VAR_17, &VAR_18);
  if ((VAR_12[VAR_17] & 0x1) != 0x1)
   VAR_13++;
  if ((VAR_12[VAR_18] & 0x2) != 0x2)
   VAR_13++;
  VAR_12[VAR_17] |= 0x1;
  VAR_12[VAR_18] |= 0x2;
  VAR_10 = VAR_7 -
      (VAR_8 * VAR_6->vf_width + VAR_2->vw_draw_area.tr_begin.tp_col);
  VAR_11 = FUNC_3(FUNC_3(
      (VAR_8 + 1) * VAR_6->vf_width +
      VAR_2->vw_draw_area.tr_begin.tp_col,
      VAR_3 + VAR_0),
      VAR_2->vw_draw_area.tr_end.tp_col);
  VAR_11 -= VAR_8 * VAR_6->vf_width +
      VAR_2->vw_draw_area.tr_begin.tp_col;
  VAR_11 -= VAR_10;


  FUNC_6(VAR_14, VAR_15,
      VAR_19, ((void*)0), VAR_6->vf_width,
      VAR_10, VAR_7 % VAR_0, VAR_11,
      0, 0, VAR_6->vf_height, VAR_17, VAR_18, 0);


  VAR_7 += VAR_11;
 }
 term_rect_t VAR_20;

 VAR_20.tr_begin.tp_col = VAR_3;
 VAR_20.tr_begin.tp_row = VAR_4;
 VAR_20.tr_end.tp_col = VAR_3 + VAR_0;
 VAR_20.tr_end.tp_row = VAR_4 + VAR_6->vf_height;
 if (VAR_1->vd_mshown && FUNC_8(VAR_1, &VAR_20)) {
  struct vt_mouse_cursor *VAR_21;
  unsigned int VAR_22, VAR_23;
  unsigned int VAR_24, VAR_25, VAR_26, VAR_27;

  VAR_21 = VAR_1->vd_mcursor;
  VAR_22 = VAR_1->vd_mx_drawn + VAR_2->vw_draw_area.tr_begin.tp_col;
  VAR_23 = VAR_1->vd_my_drawn + VAR_2->vw_draw_area.tr_begin.tp_row;


  VAR_10 = VAR_3 > VAR_22 ? VAR_3 - VAR_22 : 0;
  VAR_24 = VAR_22 > VAR_3 ? VAR_22 - VAR_3 : 0;
  VAR_11 = FUNC_3(FUNC_3(FUNC_3(
      VAR_21->width - VAR_10,
      VAR_3 + VAR_0 - VAR_22),
      VAR_2->vw_draw_area.tr_end.tp_col - VAR_22),
      VAR_0);






  VAR_25 = VAR_4 > VAR_23 ? VAR_4 - VAR_23 : 0;
  VAR_26 = VAR_23 > VAR_4 ? VAR_23 - VAR_4 : 0;
  VAR_27 = FUNC_3(
      FUNC_3(VAR_21->height - VAR_25, VAR_4 + VAR_6->vf_height - VAR_23),
      VAR_6->vf_height);


  FUNC_6(VAR_14, VAR_15,
      VAR_21->map, VAR_21->mask, VAR_21->width,
      VAR_10, VAR_24, VAR_11, VAR_25, VAR_26, VAR_27,
      VAR_1->vd_mcursor_fg, VAR_1->vd_mcursor_bg, 1);

  if ((VAR_12[VAR_1->vd_mcursor_fg] & 0x1) != 0x1)
   VAR_13++;
  if ((VAR_12[VAR_1->vd_mcursor_bg] & 0x2) != 0x2)
   VAR_13++;
 }






 if (VAR_13 == 2)
  FUNC_4(VAR_1, VAR_14, VAR_17, VAR_18,
      VAR_3, VAR_4, VAR_6->vf_height);
 else
  FUNC_5(VAR_1, VAR_15,
      VAR_3, VAR_4, VAR_6->vf_height);
}
