
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_11__ {int sigandhash; } ;
struct TYPE_10__ {size_t shared_sigalgslen; TYPE_4__** shared_sigalgs; TYPE_2__* s3; } ;
struct TYPE_8__ {size_t peer_cert_sigalgslen; int * peer_cert_sigalgs; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_0, X509 *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;
    size_t VAR_5;
    const SIGALG_LOOKUP *VAR_6;
    size_t VAR_7;
    if (VAR_2 == -1)
        return 1;
    VAR_3 = FUNC_1(VAR_1);
    if (VAR_2)
        return VAR_3 == VAR_2 ? 1 : 0;

    if (FUNC_0(VAR_0) && VAR_0->s3->tmp.peer_cert_sigalgs != ((void*)0)) {





        VAR_7 = VAR_0->s3->tmp.peer_cert_sigalgslen;
        VAR_4 = 1;
    } else {
        VAR_7 = VAR_0->shared_sigalgslen;
    }
    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
        VAR_6 = VAR_4
                 ? FUNC_2(VAR_0->s3->tmp.peer_cert_sigalgs[VAR_5])
                 : VAR_0->shared_sigalgs[VAR_5];
        if (VAR_3 == VAR_6->sigandhash)
            return 1;
    }
    return 0;
}
