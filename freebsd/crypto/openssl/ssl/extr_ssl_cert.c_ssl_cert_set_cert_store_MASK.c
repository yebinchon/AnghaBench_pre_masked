
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_3__ {int * verify_store; int * chain_store; } ;
typedef TYPE_1__ CERT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(CERT *VAR_0, X509_STORE *VAR_1, int VAR_2, int VAR_3)
{
    X509_STORE **VAR_4;
    if (VAR_2)
        VAR_4 = &VAR_0->chain_store;
    else
        VAR_4 = &VAR_0->verify_store;
    FUNC_0(*VAR_4);
    *VAR_4 = VAR_1;
    if (VAR_3 && VAR_1)
        FUNC_1(VAR_1);
    return 1;
}
