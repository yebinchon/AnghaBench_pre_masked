
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_7__ {int (* sig_print ) (int *,TYPE_1__ const*,int const*,int,int ) ;} ;
typedef TYPE_2__ EVP_PKEY_ASN1_METHOD ;
typedef int BIO ;
typedef int ASN1_STRING ;


 scalar_t__ FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_1__ const*,int const*,int,int ) ;

int FUNC_7(BIO *VAR_1, const X509_ALGOR *VAR_2,
                         const ASN1_STRING *VAR_3)
{
    int VAR_4;
    if (FUNC_0(VAR_1, "    Signature Algorithm: ") <= 0)
        return 0;
    if (FUNC_5(VAR_1, VAR_2->algorithm) <= 0)
        return 0;

    VAR_4 = FUNC_3(VAR_2->algorithm);
    if (VAR_4 != VAR_0) {
        int VAR_5, VAR_6;
        const EVP_PKEY_ASN1_METHOD *VAR_7;
        if (FUNC_2(VAR_4, &VAR_6, &VAR_5)) {
            VAR_7 = FUNC_1(((void*)0), VAR_5);
            if (VAR_7 && VAR_7->sig_print)
                return VAR_7->sig_print(VAR_1, VAR_2, VAR_3, 9, 0);
        }
    }
    if (VAR_3)
        return FUNC_4(VAR_1, VAR_3, 9);
    else if (FUNC_0(VAR_1, "\n") <= 0)
        return 0;
    return 1;
}
