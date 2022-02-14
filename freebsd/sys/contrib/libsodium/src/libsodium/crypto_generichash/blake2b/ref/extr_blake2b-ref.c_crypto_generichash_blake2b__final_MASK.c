
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int buflen; int* buf; int* h; } ;
typedef TYPE_1__ blake2b_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 () ;

int
FUNC_11(blake2b_state *VAR_2, uint8_t *VAR_3, uint8_t VAR_4)
{
    unsigned char VAR_5[VAR_1];

    if (!VAR_4 || VAR_4 > VAR_1) {
        FUNC_10();
    }
    if (FUNC_5(VAR_2)) {
        return -1;
    }
    if (VAR_2->buflen > VAR_0) {
        FUNC_4(VAR_2, VAR_0);
        FUNC_3(VAR_2, VAR_2->buf);
        VAR_2->buflen -= VAR_0;
        FUNC_2(VAR_2->buflen <= VAR_0);
        FUNC_7(VAR_2->buf, VAR_2->buf + VAR_0, VAR_2->buflen);
    }

    FUNC_4(VAR_2, VAR_2->buflen);
    FUNC_6(VAR_2);
    FUNC_8(VAR_2->buf + VAR_2->buflen, 0,
           2 * VAR_0 - VAR_2->buflen);
    FUNC_3(VAR_2, VAR_2->buf);

    FUNC_0(sizeof VAR_5 == 64U);
    FUNC_1(VAR_5 + 8 * 0, VAR_2->h[0]);
    FUNC_1(VAR_5 + 8 * 1, VAR_2->h[1]);
    FUNC_1(VAR_5 + 8 * 2, VAR_2->h[2]);
    FUNC_1(VAR_5 + 8 * 3, VAR_2->h[3]);
    FUNC_1(VAR_5 + 8 * 4, VAR_2->h[4]);
    FUNC_1(VAR_5 + 8 * 5, VAR_2->h[5]);
    FUNC_1(VAR_5 + 8 * 6, VAR_2->h[6]);
    FUNC_1(VAR_5 + 8 * 7, VAR_2->h[7]);
    FUNC_7(VAR_3, VAR_5, VAR_4);

    FUNC_9(VAR_2->h, sizeof VAR_2->h);
    FUNC_9(VAR_2->buf, sizeof VAR_2->buf);

    return 0;
}
