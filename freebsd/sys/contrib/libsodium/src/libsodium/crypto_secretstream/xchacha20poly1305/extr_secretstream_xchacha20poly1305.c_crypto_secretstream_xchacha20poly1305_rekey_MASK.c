
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* k; int nonce; } ;
typedef TYPE_1__ crypto_secretstream_xchacha20poly1305_state ;


 unsigned char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*,unsigned char*,int,int ,unsigned char*) ;

void
FUNC_3
    (crypto_secretstream_xchacha20poly1305_state *VAR_2)
{
    unsigned char VAR_3[VAR_1 +
                                     VAR_0];
    size_t VAR_4;

    for (VAR_4 = 0U; VAR_4 < VAR_1; VAR_4++) {
        VAR_3[VAR_4] = VAR_2->k[VAR_4];
    }
    for (VAR_4 = 0U; VAR_4 < VAR_0; VAR_4++) {
        VAR_3[VAR_1 + VAR_4] =
            FUNC_0(VAR_2)[VAR_4];
    }
    FUNC_2(VAR_3, VAR_3,
                                    sizeof VAR_3,
                                    VAR_2->nonce, VAR_2->k);
    for (VAR_4 = 0U; VAR_4 < VAR_1; VAR_4++) {
        VAR_2->k[VAR_4] = VAR_3[VAR_4];
    }
    for (VAR_4 = 0U; VAR_4 < VAR_0; VAR_4++) {
        FUNC_0(VAR_2)[VAR_4] =
            VAR_3[VAR_1 + VAR_4];
    }
    FUNC_1(VAR_2);
}
