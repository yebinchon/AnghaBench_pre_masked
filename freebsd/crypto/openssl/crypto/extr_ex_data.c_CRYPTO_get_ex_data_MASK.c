
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sk; } ;
typedef TYPE_1__ CRYPTO_EX_DATA ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;

void *FUNC_2(const CRYPTO_EX_DATA *VAR_0, int VAR_1)
{
    if (VAR_0->sk == ((void*)0) || VAR_1 >= FUNC_0(VAR_0->sk))
        return ((void*)0);
    return FUNC_1(VAR_0->sk, VAR_1);
}
