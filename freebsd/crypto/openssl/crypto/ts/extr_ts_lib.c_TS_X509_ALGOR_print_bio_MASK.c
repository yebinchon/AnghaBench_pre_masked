
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int BIO ;


 int FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(BIO *VAR_1, const X509_ALGOR *VAR_2)
{
    int VAR_3 = FUNC_2(VAR_2->algorithm);
    return FUNC_0(VAR_1, "Hash Algorithm: %s\n",
                      (VAR_3 == VAR_0) ? "UNKNOWN" : FUNC_1(VAR_3));
}
