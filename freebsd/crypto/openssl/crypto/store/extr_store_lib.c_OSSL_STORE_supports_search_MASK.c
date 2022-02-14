
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* loader; } ;
struct TYPE_7__ {int search_type; } ;
struct TYPE_6__ {int (* find ) (int *,TYPE_2__*) ;} ;
typedef TYPE_2__ OSSL_STORE_SEARCH ;
typedef TYPE_3__ OSSL_STORE_CTX ;


 int FUNC_0 (int *,TYPE_2__*) ;

int FUNC_1(OSSL_STORE_CTX *VAR_0, int VAR_1)
{
    OSSL_STORE_SEARCH VAR_2;

    if (VAR_0->loader->find == ((void*)0))
        return 0;
    VAR_2.search_type = VAR_1;
    return VAR_0->loader->find(((void*)0), &VAR_2);
}
