
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ptr; } ;
struct TYPE_10__ {int save_type; TYPE_2__ const* ameth; int type; int * engine; int * pmeth_engine; TYPE_1__ pkey; } ;
struct TYPE_9__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY_ASN1_METHOD ;
typedef TYPE_3__ EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int **,int) ;
 TYPE_2__* FUNC_2 (int **,char const*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY *VAR_2, ENGINE *VAR_3, int VAR_4, const char *VAR_5,
                         int VAR_6)
{
    const EVP_PKEY_ASN1_METHOD *VAR_7;
    ENGINE **VAR_8 = (VAR_3 == ((void*)0)) ? &VAR_3 : ((void*)0);

    if (VAR_2) {
        if (VAR_2->pkey.ptr)
            FUNC_3(VAR_2);




        if ((VAR_4 == VAR_2->save_type) && VAR_2->ameth)
            return 1;


        FUNC_0(VAR_2->engine);
        VAR_2->engine = ((void*)0);
        FUNC_0(VAR_2->pmeth_engine);
        VAR_2->pmeth_engine = ((void*)0);

    }
    if (VAR_5)
        VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_6);
    else
        VAR_7 = FUNC_1(VAR_8, VAR_4);

    if (VAR_2 == ((void*)0) && VAR_8 != ((void*)0))
        FUNC_0(VAR_3);

    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_2) {
        VAR_2->ameth = VAR_7;
        VAR_2->engine = VAR_3;

        VAR_2->type = VAR_2->ameth->pkey_id;
        VAR_2->save_type = VAR_4;
    }
    return 1;
}
