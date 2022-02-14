
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ptr; } ;
struct TYPE_8__ {int * pmeth_engine; int * engine; TYPE_2__ pkey; TYPE_1__* ameth; } ;
struct TYPE_6__ {int (* pkey_free ) (TYPE_3__*) ;} ;
typedef TYPE_3__ EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(EVP_PKEY *VAR_0)
{

    if (VAR_0->ameth && VAR_0->ameth->pkey_free) {
        VAR_0->ameth->pkey_free(VAR_0);
        VAR_0->pkey.ptr = ((void*)0);
    }

    FUNC_0(VAR_0->engine);
    VAR_0->engine = ((void*)0);
    FUNC_0(VAR_0->pmeth_engine);
    VAR_0->pmeth_engine = ((void*)0);

}
