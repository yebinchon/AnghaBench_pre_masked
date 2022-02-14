
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_3__ {int * cert_store; } ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 (int *) ;

void FUNC_1(SSL_CTX *VAR_0, X509_STORE *VAR_1)
{
    FUNC_0(VAR_0->cert_store);
    VAR_0->cert_store = VAR_1;
}
