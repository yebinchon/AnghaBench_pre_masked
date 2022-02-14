
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkey_id; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int **,int) ;
 int VAR_0 ;

int FUNC_2(int VAR_1)
{
    int VAR_2;
    const EVP_PKEY_ASN1_METHOD *VAR_3;
    ENGINE *VAR_4;
    VAR_3 = FUNC_1(&VAR_4, VAR_1);
    if (VAR_3)
        VAR_2 = VAR_3->pkey_id;
    else
        VAR_2 = VAR_0;

    FUNC_0(VAR_4);

    return VAR_2;
}
