
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cleanup ) () ;} ;
typedef TYPE_1__ RAND_METHOD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
    const RAND_METHOD *VAR_5 = VAR_0;

    if (!VAR_2)
        return;

    if (VAR_5 != ((void*)0) && VAR_5->cleanup != ((void*)0))
        VAR_5->cleanup();
    FUNC_1(((void*)0));
    FUNC_2();

    FUNC_0(VAR_1);
    VAR_1 = ((void*)0);

    FUNC_0(VAR_3);
    VAR_3 = ((void*)0);
    FUNC_0(VAR_4);
    VAR_4 = ((void*)0);
    VAR_2 = 0;
}
