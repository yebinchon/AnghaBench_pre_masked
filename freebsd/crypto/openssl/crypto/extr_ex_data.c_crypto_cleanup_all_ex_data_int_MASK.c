
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * meth; } ;
typedef TYPE_1__ EX_CALLBACKS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(void)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        EX_CALLBACKS *VAR_5 = &VAR_2[VAR_4];

        FUNC_1(VAR_5->meth, VAR_1);
        VAR_5->meth = ((void*)0);
    }

    FUNC_0(VAR_3);
    VAR_3 = ((void*)0);
}
