
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dh; } ;
struct TYPE_7__ {TYPE_2__ pkey; } ;
struct TYPE_5__ {int * g; int * p; } ;
typedef TYPE_3__ EVP_PKEY ;



__attribute__((used)) static int FUNC_0(const EVP_PKEY *VAR_0)
{
    if (VAR_0->pkey.dh == ((void*)0) || VAR_0->pkey.dh->p == ((void*)0) || VAR_0->pkey.dh->g == ((void*)0))
        return 1;
    return 0;
}
