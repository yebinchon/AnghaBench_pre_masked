
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_3__ {scalar_t__ notAfter; scalar_t__ notBefore; } ;
typedef TYPE_1__ PKEY_USAGE_PERIOD ;
typedef int BIO ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,char*,int,char*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(X509V3_EXT_METHOD *VAR_0,
                                 PKEY_USAGE_PERIOD *VAR_1, BIO *VAR_2,
                                 int VAR_3)
{
    FUNC_1(VAR_2, "%*s", VAR_3, "");
    if (VAR_1->notBefore) {
        FUNC_2(VAR_2, "Not Before: ", 12);
        FUNC_0(VAR_2, VAR_1->notBefore);
        if (VAR_1->notAfter)
            FUNC_2(VAR_2, ", ", 2);
    }
    if (VAR_1->notAfter) {
        FUNC_2(VAR_2, "Not After: ", 11);
        FUNC_0(VAR_2, VAR_1->notAfter);
    }
    return 1;
}
