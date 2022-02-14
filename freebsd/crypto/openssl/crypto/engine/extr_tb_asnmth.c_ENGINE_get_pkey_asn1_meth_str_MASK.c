
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* pkey_asn1_meths ) (TYPE_2__*,TYPE_1__ const**,int const**,int const) ;} ;
struct TYPE_9__ {char const* pem_str; } ;
typedef TYPE_1__ const EVP_PKEY_ASN1_METHOD ;
typedef TYPE_2__ ENGINE ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const**,int const**,int const) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__ const**,int const**,int const) ;

const EVP_PKEY_ASN1_METHOD *FUNC_4(ENGINE *VAR_0,
                                                          const char *VAR_1,
                                                          int VAR_2)
{
    int VAR_3, VAR_4;
    const int *VAR_5;
    EVP_PKEY_ASN1_METHOD *VAR_6;
    if (!VAR_0->pkey_asn1_meths)
        return ((void*)0);
    if (VAR_2 == -1)
        VAR_2 = FUNC_0(VAR_1);
    VAR_4 = VAR_0->pkey_asn1_meths(VAR_0, ((void*)0), &VAR_5, 0);
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        VAR_0->pkey_asn1_meths(VAR_0, &VAR_6, ((void*)0), VAR_5[VAR_3]);
        if (((int)FUNC_0(VAR_6->pem_str) == VAR_2)
            && FUNC_1(VAR_6->pem_str, VAR_1, VAR_2) == 0)
            return VAR_6;
    }
    return ((void*)0);
}
