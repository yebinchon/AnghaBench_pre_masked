
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; int ktmp; } ;
typedef TYPE_1__ SIPHASH_PKEY_CTX ;
typedef int SIPHASH ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    SIPHASH_PKEY_CTX *VAR_2, *VAR_3;


    if (!FUNC_5(VAR_0))
        return 0;
    VAR_2 = FUNC_2(VAR_1);
    VAR_3 = FUNC_2(VAR_0);
    if (FUNC_1(&VAR_2->ktmp) != ((void*)0) &&
        !FUNC_0(&VAR_3->ktmp, &VAR_2->ktmp)) {

        FUNC_4(VAR_0);
        return 0;
    }
    FUNC_3(&VAR_3->ctx, &VAR_2->ctx, sizeof(SIPHASH));
    return 1;
}
