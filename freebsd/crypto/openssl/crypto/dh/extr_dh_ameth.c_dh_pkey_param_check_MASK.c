
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dh; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int DH ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0)
{
    DH *VAR_1 = VAR_0->pkey.dh;

    return FUNC_0(VAR_1);
}
