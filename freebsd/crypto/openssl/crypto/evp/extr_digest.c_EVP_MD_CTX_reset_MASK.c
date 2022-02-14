
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int engine; int pctx; TYPE_1__* digest; scalar_t__ md_data; } ;
struct TYPE_7__ {scalar_t__ ctx_size; int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EVP_MD_CTX ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(EVP_MD_CTX *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return 1;





    if (VAR_3->digest && VAR_3->digest->cleanup
        && !FUNC_1(VAR_3, VAR_0))
        VAR_3->digest->cleanup(VAR_3);
    if (VAR_3->digest && VAR_3->digest->ctx_size && VAR_3->md_data
        && !FUNC_1(VAR_3, VAR_2)) {
        FUNC_4(VAR_3->md_data, VAR_3->digest->ctx_size);
    }




    if (!FUNC_1(VAR_3, VAR_1))
        FUNC_2(VAR_3->pctx);

    FUNC_0(VAR_3->engine);

    FUNC_3(VAR_3, sizeof(*VAR_3));

    return 1;
}
