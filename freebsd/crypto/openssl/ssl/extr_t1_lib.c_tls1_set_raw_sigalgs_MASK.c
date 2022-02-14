
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {size_t client_sigalgslen; size_t conf_sigalgslen; int * conf_sigalgs; int * client_sigalgs; } ;
typedef TYPE_1__ CERT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int const*,size_t) ;

int FUNC_4(CERT *VAR_2, const uint16_t *VAR_3, size_t VAR_4,
                     int VAR_5)
{
    uint16_t *VAR_6;

    if ((VAR_6 = FUNC_1(VAR_4 * sizeof(*VAR_6))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    FUNC_3(VAR_6, VAR_3, VAR_4 * sizeof(*VAR_6));

    if (VAR_5) {
        FUNC_0(VAR_2->client_sigalgs);
        VAR_2->client_sigalgs = VAR_6;
        VAR_2->client_sigalgslen = VAR_4;
    } else {
        FUNC_0(VAR_2->conf_sigalgs);
        VAR_2->conf_sigalgs = VAR_6;
        VAR_2->conf_sigalgslen = VAR_4;
    }

    return 1;
}
