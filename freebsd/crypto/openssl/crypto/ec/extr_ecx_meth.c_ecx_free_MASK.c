
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int privkey; } ;
struct TYPE_6__ {TYPE_4__* ecx; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY *VAR_0)
{
    if (VAR_0->pkey.ecx != ((void*)0))
        FUNC_2(VAR_0->pkey.ecx->privkey, FUNC_0(VAR_0));
    FUNC_1(VAR_0->pkey.ecx);
}
