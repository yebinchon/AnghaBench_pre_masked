
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dh; } ;
struct TYPE_7__ {TYPE_2__ pkey; } ;
struct TYPE_5__ {int p; } ;
typedef TYPE_3__ EVP_PKEY ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0)
{
    return FUNC_0(VAR_0->pkey.dh->p);
}
