
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* status ) () ;} ;
typedef TYPE_1__ RAND_METHOD ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(void)
{
    const RAND_METHOD *VAR_0 = FUNC_0();

    if (VAR_0->status != ((void*)0))
        return VAR_0->status();
    return 0;
}
