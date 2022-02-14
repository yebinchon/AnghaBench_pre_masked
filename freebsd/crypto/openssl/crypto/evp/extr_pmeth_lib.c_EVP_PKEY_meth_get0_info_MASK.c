
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkey_id; int flags; } ;
typedef TYPE_1__ EVP_PKEY_METHOD ;



void FUNC_0(int *VAR_0, int *VAR_1,
                             const EVP_PKEY_METHOD *VAR_2)
{
    if (VAR_0)
        *VAR_0 = VAR_2->pkey_id;
    if (VAR_1)
        *VAR_1 = VAR_2->flags;
}
