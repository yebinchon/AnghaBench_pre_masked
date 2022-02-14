
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkey_flags; int pkey_base_id; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int VAR_0 ;
 TYPE_1__ const* FUNC_0 (int *,int) ;
 int * FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;

const EVP_PKEY_ASN1_METHOD *FUNC_3(ENGINE **VAR_1, int VAR_2)
{
    const EVP_PKEY_ASN1_METHOD *VAR_3;

    for (;;) {
        VAR_3 = FUNC_2(VAR_2);
        if (!VAR_3 || !(VAR_3->pkey_flags & VAR_0))
            break;
        VAR_2 = VAR_3->pkey_base_id;
    }
    if (VAR_1) {

        ENGINE *VAR_4;

        VAR_4 = FUNC_1(VAR_2);
        if (VAR_4) {
            *VAR_1 = VAR_4;
            return FUNC_0(VAR_4, VAR_2);
        }

        *VAR_1 = ((void*)0);
    }
    return VAR_3;
}
