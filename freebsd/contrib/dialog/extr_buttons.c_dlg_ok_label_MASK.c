
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ help_button; scalar_t__ extra_button; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;

const char **
FUNC_3(void)
{
    static const char *VAR_1[4];
    int VAR_2 = 0;

    VAR_1[VAR_2++] = FUNC_2();
    if (VAR_0.extra_button)
 VAR_1[VAR_2++] = FUNC_0();
    if (VAR_0.help_button)
 VAR_1[VAR_2++] = FUNC_1();
    VAR_1[VAR_2] = 0;
    return VAR_1;
}
