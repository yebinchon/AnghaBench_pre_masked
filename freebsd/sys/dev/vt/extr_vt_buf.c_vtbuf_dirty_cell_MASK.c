
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_8__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_7__ {TYPE_1__ tr_end; TYPE_3__ tr_begin; } ;
typedef TYPE_2__ term_rect_t ;
typedef TYPE_3__ term_pos_t ;
struct vt_buf {int dummy; } ;


 int FUNC_0 (struct vt_buf*,TYPE_2__*) ;

__attribute__((used)) static inline void
FUNC_1(struct vt_buf *VAR_0, const term_pos_t *VAR_1)
{
 term_rect_t VAR_2;

 VAR_2.tr_begin = *VAR_1;
 VAR_2.tr_end.tp_row = VAR_1->tp_row + 1;
 VAR_2.tr_end.tp_col = VAR_1->tp_col + 1;
 FUNC_0(VAR_0, &VAR_2);
}
