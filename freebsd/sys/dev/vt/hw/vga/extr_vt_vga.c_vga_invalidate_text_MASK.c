
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_5__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_7__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ term_rect_t ;
struct vt_device {scalar_t__* vd_drawnbg; scalar_t__* vd_drawnfg; scalar_t__* vd_drawn; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

void
FUNC_1(struct vt_device *VAR_1, const term_rect_t *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 size_t VAR_5;

 for (VAR_4 = VAR_2->tr_begin.tp_row; VAR_4 < VAR_2->tr_end.tp_row; ++VAR_4) {
  for (VAR_3 = VAR_2->tr_begin.tp_col;
      VAR_3 < VAR_2->tr_end.tp_col;
      ++VAR_3) {
   VAR_5 = VAR_4 * FUNC_0(VAR_0) + VAR_3;
   if (VAR_1->vd_drawn)
    VAR_1->vd_drawn[VAR_5] = 0;
   if (VAR_1->vd_drawnfg)
    VAR_1->vd_drawnfg[VAR_5] = 0;
   if (VAR_1->vd_drawnbg)
    VAR_1->vd_drawnbg[VAR_5] = 0;
  }
 }
}
