
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_col; } ;
typedef TYPE_1__ term_pos_t ;
typedef int term_char_t ;
struct vt_buf {int vb_history_size; int vb_flags; void* vb_rows; void* vb_buffer; TYPE_1__ vb_scr_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct vt_buf*) ;

void
FUNC_2(struct vt_buf *VAR_5, const term_pos_t *VAR_6)
{
 int VAR_7;

 VAR_5->vb_scr_size = *VAR_6;
 VAR_5->vb_history_size = VAR_3;

 if ((VAR_5->vb_flags & VAR_4) == 0) {
  VAR_7 = VAR_5->vb_history_size * VAR_6->tp_col * sizeof(term_char_t);
  VAR_5->vb_buffer = FUNC_0(VAR_7, VAR_0, VAR_1 | VAR_2);

  VAR_7 = VAR_5->vb_history_size * sizeof(term_char_t *);
  VAR_5->vb_rows = FUNC_0(VAR_7, VAR_0, VAR_1 | VAR_2);
 }

 FUNC_1(VAR_5);
}
