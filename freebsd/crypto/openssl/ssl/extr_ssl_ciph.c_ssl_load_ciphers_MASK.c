
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nid; int mask; } ;
typedef TYPE_1__ ssl_cipher_table ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int const** VAR_28 ;
 TYPE_1__* VAR_29 ;
 TYPE_1__* VAR_30 ;
 int const** VAR_31 ;
 scalar_t__* VAR_32 ;
 int* VAR_33 ;
 int FUNC_5 () ;

int FUNC_6(void)
{
    size_t VAR_34;
    const ssl_cipher_table *VAR_35;

    VAR_25 = 0;
    FUNC_5();
    for (VAR_34 = 0, VAR_35 = VAR_29; VAR_34 < VAR_1; VAR_34++, VAR_35++) {
        if (VAR_35->nid == VAR_0) {
            VAR_28[VAR_34] = ((void*)0);
        } else {
            const EVP_CIPHER *VAR_36 = FUNC_1(VAR_35->nid);
            VAR_28[VAR_34] = VAR_36;
            if (VAR_36 == ((void*)0))
                VAR_25 |= VAR_35->mask;
        }
    }
    VAR_26 = 0;
    for (VAR_34 = 0, VAR_35 = VAR_30; VAR_34 < VAR_7; VAR_34++, VAR_35++) {
        const EVP_MD *VAR_37 = FUNC_2(VAR_35->nid);
        VAR_31[VAR_34] = VAR_37;
        if (VAR_37 == ((void*)0)) {
            VAR_26 |= VAR_35->mask;
        } else {
            int VAR_38 = FUNC_0(VAR_37);
            if (!FUNC_4(VAR_38 >= 0))
                return 0;
            VAR_33[VAR_34] = VAR_38;
        }
    }

    if (!FUNC_4(VAR_31[VAR_6] != ((void*)0)))
        return 0;
    if (!FUNC_4(VAR_31[VAR_8] != ((void*)0)))
        return 0;

    VAR_27 = 0;
    VAR_24 = 0;
    VAR_32[VAR_5] = FUNC_3("gost-mac");
    if (VAR_32[VAR_5])
        VAR_33[VAR_5] = 32;
    else
        VAR_26 |= VAR_2;

    VAR_32[VAR_4] =
        FUNC_3("gost-mac-12");
    if (VAR_32[VAR_4])
        VAR_33[VAR_4] = 32;
    else
        VAR_26 |= VAR_3;

    if (!FUNC_3("gost2001"))
        VAR_24 |= VAR_12 | VAR_13;
    if (!FUNC_3("gost2012_256"))
        VAR_24 |= VAR_13;
    if (!FUNC_3("gost2012_512"))
        VAR_24 |= VAR_13;



    if ((VAR_24 & (VAR_12 | VAR_13)) ==
        (VAR_12 | VAR_13))
        VAR_27 |= VAR_20;

    return 1;
}
