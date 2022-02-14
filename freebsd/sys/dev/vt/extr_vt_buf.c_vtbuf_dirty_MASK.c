
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


struct TYPE_12__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_9__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_13__ {TYPE_5__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_6__ term_rect_t ;
struct TYPE_10__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_8__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_11__ {TYPE_3__ tr_end; TYPE_1__ tr_begin; } ;
struct vt_buf {TYPE_4__ vb_dirtyrect; } ;



void
FUNC_0(struct vt_buf *VAR_0, const term_rect_t *VAR_1)
{

 if (VAR_0->vb_dirtyrect.tr_begin.tp_row > VAR_1->tr_begin.tp_row)
  VAR_0->vb_dirtyrect.tr_begin.tp_row = VAR_1->tr_begin.tp_row;
 if (VAR_0->vb_dirtyrect.tr_begin.tp_col > VAR_1->tr_begin.tp_col)
  VAR_0->vb_dirtyrect.tr_begin.tp_col = VAR_1->tr_begin.tp_col;
 if (VAR_0->vb_dirtyrect.tr_end.tp_row < VAR_1->tr_end.tp_row)
  VAR_0->vb_dirtyrect.tr_end.tp_row = VAR_1->tr_end.tp_row;
 if (VAR_0->vb_dirtyrect.tr_end.tp_col < VAR_1->tr_end.tp_col)
  VAR_0->vb_dirtyrect.tr_end.tp_col = VAR_1->tr_end.tp_col;
}
