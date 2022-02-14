
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; scalar_t__ mouse_cut_end; scalar_t__ mouse_cut_start; int mouse_pos; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;

    if ((VAR_2->status & VAR_1) && !(VAR_2->status & VAR_0)
 && (VAR_2->mouse_cut_end >= 0)) {
 if (VAR_2->mouse_cut_start <= VAR_2->mouse_cut_end) {
     VAR_3 = VAR_2->mouse_cut_start;
     VAR_4 = VAR_2->mouse_cut_end;
 } else {
     VAR_3 = VAR_2->mouse_cut_end;
     VAR_4 = VAR_2->mouse_cut_start - 1;
 }
 VAR_5 = FUNC_1();
 if (VAR_2->mouse_pos > VAR_4) {
     VAR_2->mouse_cut_start = VAR_3;
     VAR_2->mouse_cut_end = VAR_4;
 } else if (VAR_2->mouse_pos < VAR_3) {
     VAR_2->mouse_cut_start = VAR_4 + 1;
     VAR_2->mouse_cut_end = VAR_3;
 } else {
     if (VAR_2->mouse_pos - VAR_3 > VAR_4 + 1 - VAR_2->mouse_pos) {
  VAR_2->mouse_cut_start = VAR_3;
  VAR_2->mouse_cut_end = VAR_4;
     } else {
  VAR_2->mouse_cut_start = VAR_4 + 1;
  VAR_2->mouse_cut_end = VAR_3;
     }
 }
 FUNC_2(VAR_5);
 FUNC_0(VAR_2);
 VAR_2->status |= VAR_0;
    }
}
