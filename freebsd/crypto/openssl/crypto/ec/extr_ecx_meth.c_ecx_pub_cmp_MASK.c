
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pubkey; } ;
struct TYPE_7__ {TYPE_3__* ecx; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ ECX_KEY ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    const ECX_KEY *VAR_2 = VAR_0->pkey.ecx;
    const ECX_KEY *VAR_3 = VAR_1->pkey.ecx;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
        return -2;

    return FUNC_0(VAR_2->pubkey, VAR_3->pubkey, FUNC_1(VAR_0)) == 0;
}
