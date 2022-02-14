
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {int mdpth; TYPE_1__* mtlsa; int * mcert; } ;
struct TYPE_8__ {scalar_t__ verify_result; TYPE_2__ dane; } ;
struct TYPE_6__ {int * spki; } ;
typedef TYPE_2__ SSL_DANE ;
typedef TYPE_3__ SSL ;
typedef int EVP_PKEY ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(SSL *VAR_1, X509 **VAR_2, EVP_PKEY **VAR_3)
{
    SSL_DANE *VAR_4 = &VAR_1->dane;

    if (!FUNC_0(VAR_4) || VAR_1->verify_result != VAR_0)
        return -1;
    if (VAR_4->mtlsa) {
        if (VAR_2)
            *VAR_2 = VAR_4->mcert;
        if (VAR_3)
            *VAR_3 = (VAR_4->mcert == ((void*)0)) ? VAR_4->mtlsa->spki : ((void*)0);
    }
    return VAR_4->mdpth;
}
