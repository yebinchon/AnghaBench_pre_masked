
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_VERIFY_PARAM ;
struct TYPE_3__ {int param; } ;
typedef TYPE_1__ X509_STORE_CTX ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (char const*) ;

int FUNC_2(X509_STORE_CTX *VAR_0, const char *VAR_1)
{
    const X509_VERIFY_PARAM *VAR_2;
    VAR_2 = FUNC_1(VAR_1);
    if (!VAR_2)
        return 0;
    return FUNC_0(VAR_0->param, VAR_2);
}
