
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int type; int * engine; int * pmeth_engine; } ;
struct TYPE_13__ {TYPE_1__ const* pmeth; TYPE_3__* pkey; int operation; int * engine; } ;
struct TYPE_12__ {scalar_t__ (* init ) (TYPE_2__*) ;} ;
typedef TYPE_1__ EVP_PKEY_METHOD ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 TYPE_2__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static EVP_PKEY_CTX *FUNC_10(EVP_PKEY *VAR_5, ENGINE *VAR_6, int VAR_7)
{
    EVP_PKEY_CTX *VAR_8;
    const EVP_PKEY_METHOD *VAR_9;

    if (VAR_7 == -1) {
        if (VAR_5 == ((void*)0))
            return 0;
        VAR_7 = VAR_5->type;
    }

    if (VAR_6 == ((void*)0) && VAR_5 != ((void*)0))
        VAR_6 = VAR_5->pmeth_engine != ((void*)0) ? VAR_5->pmeth_engine : VAR_5->engine;

    if (VAR_6) {
        if (!FUNC_3(VAR_6)) {
            FUNC_7(VAR_2, VAR_0);
            return ((void*)0);
        }
    } else {
        VAR_6 = FUNC_2(VAR_7);
    }





    if (VAR_6)
        VAR_9 = FUNC_1(VAR_6, VAR_7);
    else

        VAR_9 = FUNC_5(VAR_7);

    if (VAR_9 == ((void*)0)) {

        FUNC_0(VAR_6);

        FUNC_7(VAR_2, VAR_4);
        return ((void*)0);
    }

    VAR_8 = FUNC_8(sizeof(*VAR_8));
    if (VAR_8 == ((void*)0)) {

        FUNC_0(VAR_6);

        FUNC_7(VAR_2, VAR_1);
        return ((void*)0);
    }
    VAR_8->engine = VAR_6;
    VAR_8->pmeth = VAR_9;
    VAR_8->operation = VAR_3;
    VAR_8->pkey = VAR_5;
    if (VAR_5 != ((void*)0))
        FUNC_6(VAR_5);

    if (VAR_9->init) {
        if (VAR_9->init(VAR_8) <= 0) {
            VAR_8->pmeth = ((void*)0);
            FUNC_4(VAR_8);
            return ((void*)0);
        }
    }

    return VAR_8;
}
