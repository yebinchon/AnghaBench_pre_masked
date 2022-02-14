
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int server; TYPE_1__* cert; } ;
struct TYPE_5__ {size_t client_sigalgslen; size_t conf_sigalgslen; int * conf_sigalgs; int * client_sigalgs; } ;
typedef TYPE_2__ SSL ;


 size_t FUNC_0 (int *) ;



 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

size_t FUNC_2(SSL *VAR_2, int VAR_3, const uint16_t **VAR_4)
{





    switch (FUNC_1(VAR_2)) {
    case 130:
        *VAR_4 = VAR_0;
        return FUNC_0(VAR_0);

    case 129:
        *VAR_4 = VAR_0;
        return 1;

    case 128:
        *VAR_4 = VAR_0 + 1;
        return 1;
    }






    if ((VAR_2->server == VAR_3) && VAR_2->cert->client_sigalgs != ((void*)0)) {
        *VAR_4 = VAR_2->cert->client_sigalgs;
        return VAR_2->cert->client_sigalgslen;
    } else if (VAR_2->cert->conf_sigalgs) {
        *VAR_4 = VAR_2->cert->conf_sigalgs;
        return VAR_2->cert->conf_sigalgslen;
    } else {
        *VAR_4 = VAR_1;
        return FUNC_0(VAR_1);
    }
}
