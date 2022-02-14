
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int signature; } ;
struct TYPE_4__ {TYPE_3__ cert_info; int signature; int sig_alg; } ;
typedef TYPE_1__ X509 ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;

int FUNC_3(X509 *VAR_1, EVP_PKEY *VAR_2)
{
    if (FUNC_2(&VAR_1->sig_alg, &VAR_1->cert_info.signature))
        return 0;
    return (FUNC_1(FUNC_0(VAR_0), &VAR_1->sig_alg,
                             &VAR_1->signature, &VAR_1->cert_info, VAR_2));
}
