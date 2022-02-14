
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_14__ {scalar_t__ const sigalg; } ;
struct TYPE_13__ {int * shared_sigalgs; TYPE_2__* s3; scalar_t__ shared_sigalgslen; } ;
struct TYPE_11__ {scalar_t__* valid_flags; int * peer_sigalgs; int * peer_cert_sigalgs; } ;
struct TYPE_12__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 size_t FUNC_2 (TYPE_3__*,int,scalar_t__ const**) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (TYPE_3__*) ;

int FUNC_5(SSL *VAR_7)
{
    size_t VAR_8;


    FUNC_0(VAR_7->shared_sigalgs);
    VAR_7->shared_sigalgs = ((void*)0);
    VAR_7->shared_sigalgslen = 0;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
        VAR_7->s3->tmp.valid_flags[VAR_8] = 0;




    if (VAR_7->s3->tmp.peer_cert_sigalgs == ((void*)0)
            && VAR_7->s3->tmp.peer_sigalgs == ((void*)0)) {
        const uint16_t *VAR_9;
        size_t VAR_10 = FUNC_2(VAR_7, 1, &VAR_9);

        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            const SIGALG_LOOKUP *VAR_11 = FUNC_3(VAR_7, VAR_8);
            size_t VAR_12;

            if (VAR_11 == ((void*)0))
                continue;

            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
                if (VAR_11->sigalg == VAR_9[VAR_12]) {
                        VAR_7->s3->tmp.valid_flags[VAR_8] = VAR_0;
                        break;
                }
            }
        }
        return 1;
    }

    if (!FUNC_4(VAR_7)) {
        FUNC_1(VAR_7, VAR_3,
                 VAR_4, VAR_1);
        return 0;
    }
    if (VAR_7->shared_sigalgs != ((void*)0))
        return 1;


    FUNC_1(VAR_7, VAR_2, VAR_4,
             VAR_6);
    return 0;
}
