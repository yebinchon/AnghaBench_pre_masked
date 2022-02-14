
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tp_col; int tp_row; } ;
struct vt_buf {int vb_history_size; TYPE_1__ vb_scr_size; int * vb_buffer; int ** vb_rows; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct vt_buf *VAR_0)
{
 int VAR_1;

 VAR_0->vb_history_size = FUNC_0(VAR_0->vb_history_size, VAR_0->vb_scr_size.tp_row);

 for (VAR_1 = 0; VAR_1 < VAR_0->vb_history_size; VAR_1++)
  VAR_0->vb_rows[VAR_1] = &VAR_0->vb_buffer[VAR_1 * VAR_0->vb_scr_size.tp_col];
}
