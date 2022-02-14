
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dsa; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
struct TYPE_7__ {int g; int q; int p; } ;
typedef TYPE_3__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    if (FUNC_0(VAR_0->pkey.dsa->p, VAR_1->pkey.dsa->p) ||
        FUNC_0(VAR_0->pkey.dsa->q, VAR_1->pkey.dsa->q) ||
        FUNC_0(VAR_0->pkey.dsa->g, VAR_1->pkey.dsa->g))
        return 0;
    else
        return 1;
}
