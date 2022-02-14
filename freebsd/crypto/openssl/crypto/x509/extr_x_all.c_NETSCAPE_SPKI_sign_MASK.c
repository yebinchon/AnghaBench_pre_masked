
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spkac; int signature; int sig_algor; } ;
typedef TYPE_1__ NETSCAPE_SPKI ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int ,int ,int *,int const*) ;
 int VAR_0 ;

int FUNC_2(NETSCAPE_SPKI *VAR_1, EVP_PKEY *VAR_2, const EVP_MD *VAR_3)
{
    return (FUNC_1(FUNC_0(VAR_0), &VAR_1->sig_algor, ((void*)0),
                           VAR_1->signature, VAR_1->spkac, VAR_2, VAR_3));
}
