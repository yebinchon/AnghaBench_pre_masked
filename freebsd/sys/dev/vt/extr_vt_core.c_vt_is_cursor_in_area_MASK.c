
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_12__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_15__ {TYPE_6__ tr_begin; TYPE_4__ tr_end; } ;
typedef TYPE_7__ term_rect_t ;
struct vt_device {unsigned int vd_mx_drawn; unsigned int vd_my_drawn; TYPE_5__* vd_mcursor; TYPE_3__* vd_curwindow; } ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_9__ {unsigned int tp_col; unsigned int tp_row; } ;
struct TYPE_10__ {TYPE_1__ tr_begin; } ;
struct TYPE_11__ {TYPE_2__ vw_draw_area; } ;



int
FUNC_0(const struct vt_device *VAR_0, const term_rect_t *VAR_1)
{
 unsigned int VAR_2, VAR_3;





 VAR_2 = VAR_0->vd_mx_drawn + VAR_0->vd_curwindow->vw_draw_area.tr_begin.tp_col;
 VAR_3 = VAR_0->vd_my_drawn + VAR_0->vd_curwindow->vw_draw_area.tr_begin.tp_row;

 if (VAR_2 >= VAR_1->tr_end.tp_col ||
     VAR_2 + VAR_0->vd_mcursor->width <= VAR_1->tr_begin.tp_col ||
     VAR_3 >= VAR_1->tr_end.tp_row ||
     VAR_3 + VAR_0->vd_mcursor->height <= VAR_1->tr_begin.tp_row)
  return (0);
 return (1);
}
