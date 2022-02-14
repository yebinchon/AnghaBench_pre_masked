
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_CERT_AUX ;
struct TYPE_3__ {int * aux; } ;
typedef TYPE_1__ X509 ;


 int * FUNC_0 () ;

__attribute__((used)) static X509_CERT_AUX *FUNC_1(X509 *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    if (VAR_0->aux == ((void*)0) && (VAR_0->aux = FUNC_0()) == ((void*)0))
        return ((void*)0);
    return VAR_0->aux;
}
