
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_3__ {int nm_flags; } ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_PCTX ;


 scalar_t__ FUNC_0 (int *,int const*,int,int ) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, ASN1_VALUE **VAR_1,
                              int VAR_2,
                              const char *VAR_3, const ASN1_PCTX *VAR_4)
{
    if (FUNC_0(VAR_0, (const X509_NAME *)*VAR_1,
                           VAR_2, VAR_4->nm_flags) <= 0)
        return 0;
    return 2;
}
