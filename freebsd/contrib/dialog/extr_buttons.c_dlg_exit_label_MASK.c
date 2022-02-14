
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ help_button; int nook; int nocancel; scalar_t__ extra_button; } ;
typedef int DIALOG_VARS ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char** FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;

const char **
FUNC_5(void)
{
    const char **VAR_2;
    DIALOG_VARS VAR_3;

    if (VAR_1.extra_button) {
 FUNC_2(&VAR_3);
 VAR_1.nocancel = VAR_0;
 VAR_2 = FUNC_0();
 FUNC_1(&VAR_3);
    } else {
 static const char *VAR_4[3];
 int VAR_5 = 0;

 if (!VAR_1.nook)
     VAR_4[VAR_5++] = FUNC_3();
 if (VAR_1.help_button)
     VAR_4[VAR_5++] = FUNC_4();
 if (VAR_5 == 0)
     VAR_4[VAR_5++] = FUNC_3();
 VAR_4[VAR_5] = 0;

 VAR_2 = VAR_4;
    }
    return VAR_2;
}
