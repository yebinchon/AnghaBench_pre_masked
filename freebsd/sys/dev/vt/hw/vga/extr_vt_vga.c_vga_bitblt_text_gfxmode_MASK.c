
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


struct TYPE_9__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_8__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_13__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_6__ term_rect_t ;
struct TYPE_11__ {int tp_row; int tp_col; } ;
struct TYPE_10__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_12__ {TYPE_4__ tr_end; TYPE_3__ tr_begin; } ;
struct vt_window {TYPE_5__ vw_draw_area; struct vt_font* vw_font; } ;
struct vt_font {unsigned int vf_width; unsigned int vf_height; } ;
struct vt_device {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct vt_device*,struct vt_window const*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct vt_device *VAR_1, const struct vt_window *VAR_2,
    const term_rect_t *VAR_3)
{
 const struct vt_font *VAR_4;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_4 = VAR_2->vw_font;
 VAR_5 = VAR_3->tr_begin.tp_col;
 VAR_6 = VAR_3->tr_begin.tp_row;
 VAR_7 = (int)((VAR_5 * VAR_4->vf_width + VAR_2->vw_draw_area.tr_begin.tp_col)
      / VAR_0)
     * VAR_0;
 VAR_8 = VAR_6 * VAR_4->vf_height + VAR_2->vw_draw_area.tr_begin.tp_row;
 VAR_5 = VAR_3->tr_end.tp_col;
 VAR_6 = VAR_3->tr_end.tp_row;
 VAR_9 = (int)FUNC_0(VAR_5 * VAR_4->vf_width + VAR_2->vw_draw_area.tr_begin.tp_col,
     VAR_0)
     * VAR_0;
 VAR_10 = VAR_6 * VAR_4->vf_height + VAR_2->vw_draw_area.tr_begin.tp_row;


 VAR_9 = FUNC_1(VAR_9, VAR_2->vw_draw_area.tr_end.tp_col);
 VAR_10 = FUNC_1(VAR_10, VAR_2->vw_draw_area.tr_end.tp_row);
 for (VAR_12 = VAR_8; VAR_12 < VAR_10; VAR_12 += VAR_4->vf_height) {
  for (VAR_11 = VAR_7; VAR_11 < VAR_9; VAR_11 += VAR_0) {
   FUNC_2(VAR_1, VAR_2, VAR_11, VAR_12);
  }
 }
}
