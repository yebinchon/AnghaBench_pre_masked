
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* s3; } ;
struct TYPE_6__ {int const* peer_sigalg; } ;
struct TYPE_7__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int SIGALG_LOOKUP ;
typedef int EVP_PKEY ;


 int * FUNC_0 (int const*,size_t*) ;
 int * FUNC_1 (TYPE_3__*,size_t) ;

int FUNC_2(SSL *VAR_0, const EVP_PKEY *VAR_1)
{
    size_t VAR_2;
    const SIGALG_LOOKUP *VAR_3;

    if (FUNC_0(VAR_1, &VAR_2) == ((void*)0))
        return 0;
    VAR_3 = FUNC_1(VAR_0, VAR_2);
    if (VAR_3 == ((void*)0))
        return 0;
    VAR_0->s3->tmp.peer_sigalg = VAR_3;
    return 1;
}
