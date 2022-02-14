
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int sig_idx; } ;
typedef int SSL ;
typedef TYPE_1__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *,TYPE_1__ const*,int *,int *) ;
 int * FUNC_1 (int *,size_t*) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_0, const SIGALG_LOOKUP *VAR_1, X509 *VAR_2,
                          EVP_PKEY *VAR_3)
{
    size_t VAR_4;

    if (FUNC_1(VAR_3, &VAR_4) == ((void*)0))
        return 0;


    if ((int)VAR_4 != VAR_1->sig_idx)
        return 0;

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
