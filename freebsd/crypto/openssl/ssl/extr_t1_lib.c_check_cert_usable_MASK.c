
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_11__ {int hash; int sig; } ;
struct TYPE_10__ {TYPE_2__* s3; } ;
struct TYPE_8__ {size_t peer_cert_sigalgslen; int * peer_cert_sigalgs; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*,int*,int *,int *) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_0, const SIGALG_LOOKUP *VAR_1, X509 *VAR_2,
                             EVP_PKEY *VAR_3)
{
    const SIGALG_LOOKUP *VAR_4;
    int VAR_5, VAR_6, VAR_7;
    size_t VAR_8;


    FUNC_1();
    if (FUNC_2(VAR_3, &VAR_7) == 2 &&
        VAR_1->hash != VAR_7)
            return 0;



    FUNC_0();

    if (VAR_0->s3->tmp.peer_cert_sigalgs != ((void*)0)) {
        for (VAR_8 = 0; VAR_8 < VAR_0->s3->tmp.peer_cert_sigalgslen; VAR_8++) {
            VAR_4 = FUNC_4(VAR_0->s3->tmp.peer_cert_sigalgs[VAR_8]);
            if (VAR_4 == ((void*)0)
                || !FUNC_3(VAR_2, &VAR_5, &VAR_6, ((void*)0), ((void*)0)))
                continue;






            if (VAR_5 == VAR_4->hash && VAR_6 == VAR_4->sig)
                return 1;
        }
        return 0;
    }
    return 1;
}
