
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ links; int dso; } ;
typedef TYPE_1__ CONF_MODULE ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int * VAR_0 ;

void FUNC_6(int VAR_1)
{
    int VAR_2;
    CONF_MODULE *VAR_3;
    FUNC_0();

    for (VAR_2 = FUNC_4(VAR_0) - 1; VAR_2 >= 0; VAR_2--) {
        VAR_3 = FUNC_5(VAR_0, VAR_2);

        if (((VAR_3->links > 0) || !VAR_3->dso) && !VAR_1)
            continue;

        (void)FUNC_2(VAR_0, VAR_2);
        FUNC_1(VAR_3);
    }
    if (FUNC_4(VAR_0) == 0) {
        FUNC_3(VAR_0);
        VAR_0 = ((void*)0);
    }
}
