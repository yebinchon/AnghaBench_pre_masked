
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int BIGNUM ;
typedef int ASN1_VALUE ;
typedef int ASN1_PCTX ;
typedef int ASN1_ITEM ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2,
                    int VAR_3, const ASN1_PCTX *VAR_4)
{
    if (!FUNC_1(VAR_0, *(BIGNUM **)VAR_1))
        return 0;
    if (FUNC_0(VAR_0, "\n") <= 0)
        return 0;
    return 1;
}
