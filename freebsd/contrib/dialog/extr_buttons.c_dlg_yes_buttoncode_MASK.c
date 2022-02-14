
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ help_button; scalar_t__ extra_button; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int) ;

int
FUNC_1(int VAR_5)
{
    int VAR_6 = VAR_1;

    if (VAR_4.extra_button) {
 VAR_6 = FUNC_0(VAR_5);
    } else if (VAR_5 == 0) {
 VAR_6 = VAR_3;
    } else if (VAR_5 == 1) {
 VAR_6 = VAR_0;
    } else if (VAR_5 == 2 && VAR_4.help_button) {
 VAR_6 = VAR_2;
    }

    return VAR_6;
}
