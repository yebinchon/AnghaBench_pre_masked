
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int CMAC_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_1, EVP_PKEY *VAR_2)
{
    CMAC_CTX *VAR_3 = FUNC_2();
    CMAC_CTX *VAR_4 = VAR_1->data;
    if (VAR_3 == ((void*)0))
        return 0;
    if (!FUNC_0(VAR_3, VAR_4)) {
        FUNC_1(VAR_3);
        return 0;
    }
    FUNC_3(VAR_2, VAR_0, VAR_3);

    return 1;
}
