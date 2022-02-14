
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ help_button; int nocancel; scalar_t__ extra_button; int nook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_5 ;

int
FUNC_1(int VAR_6)
{
    int VAR_7 = VAR_1;
    int VAR_8 = !VAR_5.nook;

    if (!VAR_5.nook && (VAR_6 <= 0)) {
 VAR_7 = VAR_4;
    } else if (VAR_5.extra_button && (VAR_6 == VAR_8++)) {
 VAR_7 = VAR_2;
    } else if (!VAR_5.nocancel && (VAR_6 == VAR_8++)) {
 VAR_7 = VAR_0;
    } else if (VAR_5.help_button && (VAR_6 == VAR_8)) {
 VAR_7 = VAR_3;
    }
    FUNC_0(("# dlg_ok_buttoncode(%d) = %d\n", VAR_6, VAR_7));
    return VAR_7;
}
