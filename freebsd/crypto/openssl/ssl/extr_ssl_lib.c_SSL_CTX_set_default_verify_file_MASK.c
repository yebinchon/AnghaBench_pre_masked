
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_LOOKUP ;
struct TYPE_3__ {int cert_store; } ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int ,int ) ;

int FUNC_4(SSL_CTX *VAR_1)
{
    X509_LOOKUP *VAR_2;

    VAR_2 = FUNC_3(VAR_1->cert_store, FUNC_1());
    if (VAR_2 == ((void*)0))
        return 0;

    FUNC_2(VAR_2, ((void*)0), VAR_0);


    FUNC_0();

    return 1;
}
