
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_4__ {unsigned char* data; int length; } ;
typedef int DSA_SIG ;
typedef int BIO ;
typedef int BIGNUM ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_PCTX ;


 int FUNC_0 (int *,char*,int const*,int *,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**,int const**) ;
 int FUNC_5 (int *,TYPE_1__ const*,int) ;
 int * FUNC_6 (int *,unsigned char const**,int ) ;

__attribute__((used)) static int FUNC_7(BIO *VAR_0, const X509_ALGOR *VAR_1,
                         const ASN1_STRING *VAR_2, int VAR_3, ASN1_PCTX *VAR_4)
{
    DSA_SIG *VAR_5;
    const unsigned char *VAR_6;

    if (!VAR_2) {
        if (FUNC_1(VAR_0, "\n") <= 0)
            return 0;
        else
            return 1;
    }
    VAR_6 = VAR_2->data;
    VAR_5 = FUNC_6(((void*)0), &VAR_6, VAR_2->length);
    if (VAR_5) {
        int VAR_7 = 0;
        const BIGNUM *VAR_8, *VAR_9;

        FUNC_4(VAR_5, &VAR_8, &VAR_9);

        if (FUNC_2(VAR_0, "\n", 1) != 1)
            goto err;

        if (!FUNC_0(VAR_0, "r:   ", VAR_8, ((void*)0), VAR_3))
            goto err;
        if (!FUNC_0(VAR_0, "s:   ", VAR_9, ((void*)0), VAR_3))
            goto err;
        VAR_7 = 1;
 err:
        FUNC_3(VAR_5);
        return VAR_7;
    }
    return FUNC_5(VAR_0, VAR_2, VAR_3);
}
