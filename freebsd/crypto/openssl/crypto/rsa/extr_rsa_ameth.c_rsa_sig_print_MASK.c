
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int RSA_PSS_PARAMS ;
typedef int BIO ;
typedef int ASN1_STRING ;
typedef int ASN1_PCTX ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int * FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_1, const X509_ALGOR *VAR_2,
                         const ASN1_STRING *VAR_3, int VAR_4, ASN1_PCTX *VAR_5)
{
    if (FUNC_1(VAR_2->algorithm) == VAR_0) {
        int VAR_6;
        RSA_PSS_PARAMS *VAR_7 = FUNC_4(VAR_2);

        VAR_6 = FUNC_5(VAR_1, 0, VAR_7, VAR_4);
        FUNC_2(VAR_7);
        if (!VAR_6)
            return 0;
    } else if (!VAR_3 && FUNC_0(VAR_1, "\n") <= 0) {
        return 0;
    }
    if (VAR_3)
        return FUNC_3(VAR_1, VAR_3, VAR_4);
    return 1;
}
