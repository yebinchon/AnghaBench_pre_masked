
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pmeth; } ;
struct TYPE_5__ {scalar_t__ pkey_id; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (TYPE_2__*,int,int,int,int,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(EVP_PKEY_CTX *VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{

    if (VAR_2 != ((void*)0) && VAR_2->pmeth != ((void*)0)
        && VAR_2->pmeth->pkey_id != VAR_0
        && VAR_2->pmeth->pkey_id != VAR_1)
        return -1;
     return FUNC_0(VAR_2, -1, VAR_3, VAR_4, VAR_5, VAR_6);
}
