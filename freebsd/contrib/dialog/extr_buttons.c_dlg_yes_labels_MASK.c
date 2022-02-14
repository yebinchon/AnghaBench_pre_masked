
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ help_button; scalar_t__ extra_button; } ;


 TYPE_1__ VAR_0 ;
 char** FUNC_0 () ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;

const char **
FUNC_4(void)
{
    const char **VAR_1;

    if (VAR_0.extra_button) {
 VAR_1 = FUNC_0();
    } else {
 static const char *VAR_2[4];
 int VAR_3 = 0;

 VAR_2[VAR_3++] = FUNC_3();
 VAR_2[VAR_3++] = FUNC_2();
 if (VAR_0.help_button)
     VAR_2[VAR_3++] = FUNC_1();
 VAR_2[VAR_3] = 0;

 VAR_1 = VAR_2;
    }

    return VAR_1;
}
