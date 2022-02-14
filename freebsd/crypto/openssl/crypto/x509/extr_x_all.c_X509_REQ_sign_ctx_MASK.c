
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_info; int signature; int sig_alg; } ;
typedef TYPE_1__ X509_REQ ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int ,int *,int *) ;
 int VAR_0 ;

int FUNC_2(X509_REQ *VAR_1, EVP_MD_CTX *VAR_2)
{
    return FUNC_1(FUNC_0(VAR_0),
                              &VAR_1->sig_alg, ((void*)0), VAR_1->signature, &VAR_1->req_info,
                              VAR_2);
}
