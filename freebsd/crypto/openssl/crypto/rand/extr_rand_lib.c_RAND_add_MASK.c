
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* add ) (void const*,int,double) ;} ;
typedef TYPE_1__ RAND_METHOD ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (void const*,int,double) ;

void FUNC_2(const void *VAR_0, int VAR_1, double VAR_2)
{
    const RAND_METHOD *VAR_3 = FUNC_0();

    if (VAR_3->add != ((void*)0))
        VAR_3->add(VAR_0, VAR_1, VAR_2);
}
