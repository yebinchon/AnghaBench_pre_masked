
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int modified; } ;
struct TYPE_7__ {int signature; TYPE_1__ enc; } ;
struct TYPE_6__ {TYPE_4__ cert_info; int signature; int sig_alg; } ;
typedef TYPE_2__ X509 ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,TYPE_4__*,int *,int const*) ;
 int VAR_0 ;

int FUNC_2(X509 *VAR_1, EVP_PKEY *VAR_2, const EVP_MD *VAR_3)
{
    VAR_1->cert_info.enc.modified = 1;
    return (FUNC_1(FUNC_0(VAR_0), &VAR_1->cert_info.signature,
                           &VAR_1->sig_alg, &VAR_1->signature, &VAR_1->cert_info, VAR_2,
                           VAR_3));
}
