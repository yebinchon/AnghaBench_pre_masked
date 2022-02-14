
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_col; int tp_row; } ;
typedef TYPE_1__ term_pos_t ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_width; int vd_height; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(struct vt_device *VAR_2, struct vt_font *VAR_3, term_pos_t *VAR_4)
{

 VAR_4->tp_row = VAR_2->vd_height;
 if (VAR_0)
  VAR_4->tp_row -= VAR_1;
 VAR_4->tp_col = VAR_2->vd_width;
 if (VAR_3 != ((void*)0)) {
  VAR_4->tp_row /= VAR_3->vf_height;
  VAR_4->tp_col /= VAR_3->vf_width;
 }
}
