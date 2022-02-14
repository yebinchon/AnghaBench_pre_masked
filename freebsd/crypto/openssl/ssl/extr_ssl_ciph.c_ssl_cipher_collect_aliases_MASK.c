
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int algorithm_mkey; int algorithm_auth; int algorithm_enc; int algorithm_mac; } ;
struct TYPE_4__ {struct TYPE_4__* next; int * cipher; } ;
typedef int SSL_CIPHER ;
typedef TYPE_1__ CIPHER_ORDER ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_0(const SSL_CIPHER **VAR_1,
                                       int VAR_2,
                                       uint32_t VAR_3,
                                       uint32_t VAR_4,
                                       uint32_t VAR_5,
                                       uint32_t VAR_6,
                                       CIPHER_ORDER *VAR_7)
{
    CIPHER_ORDER *VAR_8;
    const SSL_CIPHER **VAR_9;
    int VAR_10;
    uint32_t VAR_11 = ~VAR_3;
    uint32_t VAR_12 = ~VAR_4;
    uint32_t VAR_13 = ~VAR_5;
    uint32_t VAR_14 = ~VAR_6;




    VAR_8 = VAR_7;
    VAR_9 = VAR_1;
    while (VAR_8 != ((void*)0)) {
        *VAR_9 = VAR_8->cipher;
        VAR_9++;
        VAR_8 = VAR_8->next;
    }







    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        uint32_t VAR_15 = VAR_0[VAR_10].algorithm_mkey;
        uint32_t VAR_16 = VAR_0[VAR_10].algorithm_auth;
        uint32_t VAR_17 = VAR_0[VAR_10].algorithm_enc;
        uint32_t VAR_18 = VAR_0[VAR_10].algorithm_mac;

        if (VAR_15)
            if ((VAR_15 & VAR_11) == 0)
                continue;

        if (VAR_16)
            if ((VAR_16 & VAR_12) == 0)
                continue;

        if (VAR_17)
            if ((VAR_17 & VAR_13) == 0)
                continue;

        if (VAR_18)
            if ((VAR_18 & VAR_14) == 0)
                continue;

        *VAR_9 = (SSL_CIPHER *)(VAR_0 + VAR_10);
        VAR_9++;
    }

    *VAR_9 = ((void*)0);
}
