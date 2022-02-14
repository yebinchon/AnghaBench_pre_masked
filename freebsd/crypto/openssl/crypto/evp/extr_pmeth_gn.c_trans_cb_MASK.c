
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* keygen_info; int (* pkey_gencb ) (TYPE_1__*) ;} ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int BN_GENCB ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, BN_GENCB *VAR_2)
{
    EVP_PKEY_CTX *VAR_3 = FUNC_0(VAR_2);
    VAR_3->keygen_info[0] = VAR_0;
    VAR_3->keygen_info[1] = VAR_1;
    return VAR_3->pkey_gencb(VAR_3);
}
