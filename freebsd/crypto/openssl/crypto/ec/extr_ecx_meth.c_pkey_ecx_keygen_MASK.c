
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pmeth; } ;
struct TYPE_4__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_1, EVP_PKEY *VAR_2)
{
    return FUNC_0(VAR_2, VAR_1->pmeth->pkey_id, ((void*)0), ((void*)0), 0, VAR_0);
}
