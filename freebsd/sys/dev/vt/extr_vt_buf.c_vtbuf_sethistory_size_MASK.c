
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tp_col; int tp_row; } ;
typedef TYPE_2__ term_pos_t ;
struct TYPE_4__ {int tp_col; int tp_row; } ;
struct vt_buf {TYPE_1__ vb_scr_size; } ;


 int FUNC_0 (struct vt_buf*,TYPE_2__*,unsigned int) ;

void
FUNC_1(struct vt_buf *VAR_0, unsigned int VAR_1)
{
 term_pos_t VAR_2;


 VAR_2.tp_row = VAR_0->vb_scr_size.tp_row;
 VAR_2.tp_col = VAR_0->vb_scr_size.tp_col;
 FUNC_0(VAR_0, &VAR_2, VAR_1);
}
