
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rsa; } ;
struct TYPE_8__ {TYPE_2__ pkey; } ;
struct TYPE_6__ {int e; int n; } ;
typedef TYPE_3__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    if (FUNC_0(VAR_1->pkey.rsa->n, VAR_0->pkey.rsa->n) != 0
        || FUNC_0(VAR_1->pkey.rsa->e, VAR_0->pkey.rsa->e) != 0)
        return 0;
    return 1;
}
