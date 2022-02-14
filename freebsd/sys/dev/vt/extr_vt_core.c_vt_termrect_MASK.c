
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tp_col; int tp_row; } ;
struct TYPE_5__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_7__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ term_rect_t ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_width; int vd_height; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(struct vt_device *VAR_2, struct vt_font *VAR_3, term_rect_t *VAR_4)
{

 VAR_4->tr_begin.tp_row = VAR_4->tr_begin.tp_col = 0;
 if (VAR_0)
  VAR_4->tr_begin.tp_row = VAR_1;

 VAR_4->tr_end.tp_row = VAR_2->vd_height;
 VAR_4->tr_end.tp_col = VAR_2->vd_width;

 if (VAR_3 != ((void*)0)) {
  VAR_4->tr_begin.tp_row =
      FUNC_0(VAR_4->tr_begin.tp_row, VAR_3->vf_height);

  VAR_4->tr_end.tp_row /= VAR_3->vf_height;
  VAR_4->tr_end.tp_col /= VAR_3->vf_width;
 }
}
