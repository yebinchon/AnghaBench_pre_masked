
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_cut_end; int mouse_cut_start; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;

int
FUNC_0(scr_stat *VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4;

    if (VAR_1->mouse_cut_end < 0)
 return VAR_0;
    if (VAR_1->mouse_cut_start <= VAR_1->mouse_cut_end) {
 VAR_3 = VAR_1->mouse_cut_start;
 VAR_4 = VAR_1->mouse_cut_end;
    } else {
 VAR_3 = VAR_1->mouse_cut_end;
 VAR_4 = VAR_1->mouse_cut_start - 1;
    }
    return ((VAR_3 <= VAR_2) && (VAR_2 <= VAR_4));
}
