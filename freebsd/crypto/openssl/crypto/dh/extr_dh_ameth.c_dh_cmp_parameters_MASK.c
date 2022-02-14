
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dh; } ;
struct TYPE_8__ {TYPE_1__ pkey; int * ameth; } ;
struct TYPE_7__ {int q; int g; int p; } ;
typedef TYPE_3__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_1, const EVP_PKEY *VAR_2)
{
    if (FUNC_0(VAR_1->pkey.dh->p, VAR_2->pkey.dh->p) ||
        FUNC_0(VAR_1->pkey.dh->g, VAR_2->pkey.dh->g))
        return 0;
    else if (VAR_1->ameth == &VAR_0) {
        if (FUNC_0(VAR_1->pkey.dh->q, VAR_2->pkey.dh->q))
            return 0;
    }
    return 1;
}
