
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {size_t client_sigalgslen; size_t conf_sigalgslen; int * conf_sigalgs; int * client_sigalgs; } ;
struct TYPE_6__ {int hash; int sig; int sigalg; } ;
typedef TYPE_1__ SIGALG_LOOKUP ;
typedef TYPE_2__ CERT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(CERT *VAR_3, const int *VAR_4, size_t VAR_5, int VAR_6)
{
    uint16_t *VAR_7, *VAR_8;
    size_t VAR_9;

    if (VAR_5 & 1)
        return 0;
    if ((VAR_7 = FUNC_1((VAR_5 / 2) * sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }
    for (VAR_9 = 0, VAR_8 = VAR_7; VAR_9 < VAR_5; VAR_9 += 2) {
        size_t VAR_10;
        const SIGALG_LOOKUP *VAR_11;
        int VAR_12 = *VAR_4++;
        int VAR_13 = *VAR_4++;

        for (VAR_10 = 0, VAR_11 = VAR_2; VAR_10 < FUNC_2(VAR_2);
             VAR_10++, VAR_11++) {
            if (VAR_11->hash == VAR_12 && VAR_11->sig == VAR_13) {
                *VAR_8++ = VAR_11->sigalg;
                break;
            }
        }

        if (VAR_10 == FUNC_2(VAR_2))
            goto err;
    }

    if (VAR_6) {
        FUNC_0(VAR_3->client_sigalgs);
        VAR_3->client_sigalgs = VAR_7;
        VAR_3->client_sigalgslen = VAR_5 / 2;
    } else {
        FUNC_0(VAR_3->conf_sigalgs);
        VAR_3->conf_sigalgs = VAR_7;
        VAR_3->conf_sigalgslen = VAR_5 / 2;
    }

    return 1;

 err:
    FUNC_0(VAR_7);
    return 0;
}
