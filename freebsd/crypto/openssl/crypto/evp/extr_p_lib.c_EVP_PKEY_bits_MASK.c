
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int (* pkey_bits ) (TYPE_2__ const*) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__ const*) ;

int FUNC_1(const EVP_PKEY *VAR_0)
{
    if (VAR_0 && VAR_0->ameth && VAR_0->ameth->pkey_bits)
        return VAR_0->ameth->pkey_bits(VAR_0);
    return 0;
}
