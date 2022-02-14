
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftmp ;
typedef scalar_t__ BN_ULONG ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,long) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*) ;

int FUNC_12(unsigned char *VAR_8, int VAR_9, const char *VAR_10, int VAR_11)
{
    int VAR_12, VAR_13, VAR_14 = 0, VAR_15, VAR_16;
    char VAR_17[24], *VAR_18 = VAR_17;
    int VAR_19 = sizeof(VAR_17);
    const char *VAR_20;
    unsigned long VAR_21;
    BIGNUM *VAR_22 = ((void*)0);

    if (VAR_11 == 0)
        return 0;
    else if (VAR_11 == -1)
        VAR_11 = FUNC_11(VAR_10);

    VAR_20 = VAR_10;
    VAR_15 = *(VAR_20++);
    VAR_11--;
    if ((VAR_15 >= '0') && (VAR_15 <= '2')) {
        VAR_13 = VAR_15 - '0';
    } else {
        FUNC_0(VAR_0, VAR_2);
        goto err;
    }

    if (VAR_11 <= 0) {
        FUNC_0(VAR_0, VAR_5);
        goto err;
    }
    VAR_15 = *(VAR_20++);
    VAR_11--;
    for (;;) {
        if (VAR_11 <= 0)
            break;
        if ((VAR_15 != '.') && (VAR_15 != ' ')) {
            FUNC_0(VAR_0, VAR_4);
            goto err;
        }
        VAR_21 = 0;
        VAR_16 = 0;
        for (;;) {
            if (VAR_11 <= 0)
                break;
            VAR_11--;
            VAR_15 = *(VAR_20++);
            if ((VAR_15 == ' ') || (VAR_15 == '.'))
                break;
            if (!FUNC_10(VAR_15)) {
                FUNC_0(VAR_0, VAR_3);
                goto err;
            }
            if (!VAR_16 && VAR_21 >= ((VAR_7 - 80) / 10L)) {
                VAR_16 = 1;
                if (VAR_22 == ((void*)0))
                    VAR_22 = FUNC_5();
                if (VAR_22 == ((void*)0) || !FUNC_7(VAR_22, VAR_21))
                    goto err;
            }
            if (VAR_16) {
                if (!FUNC_4(VAR_22, 10L)
                    || !FUNC_1(VAR_22, VAR_15 - '0'))
                    goto err;
            } else
                VAR_21 = VAR_21 * 10L + (long)(VAR_15 - '0');
        }
        if (VAR_14 == 0) {
            if ((VAR_13 < 2) && (VAR_21 >= 40)) {
                FUNC_0(VAR_0,
                        VAR_6);
                goto err;
            }
            if (VAR_16) {
                if (!FUNC_1(VAR_22, VAR_13 * 40))
                    goto err;
            } else
                VAR_21 += (long)VAR_13 *40;
        }
        VAR_12 = 0;
        if (VAR_16) {
            int VAR_23;
            VAR_23 = FUNC_6(VAR_22);
            VAR_23 = (VAR_23 + 6) / 7;
            if (VAR_23 > VAR_19) {
                if (VAR_18 != VAR_17)
                    FUNC_8(VAR_18);
                VAR_19 = VAR_23 + 32;
                VAR_18 = FUNC_9(VAR_19);
                if (VAR_18 == ((void*)0))
                    goto err;
            }
            while (VAR_23--) {
                BN_ULONG VAR_24 = FUNC_2(VAR_22, 0x80L);
                if (VAR_24 == (BN_ULONG)-1)
                    goto err;
                VAR_18[VAR_12++] = (unsigned char)VAR_24;
            }
        } else {

            for (;;) {
                VAR_18[VAR_12++] = (unsigned char)VAR_21 & 0x7f;
                VAR_21 >>= 7L;
                if (VAR_21 == 0L)
                    break;
            }

        }
        if (VAR_8 != ((void*)0)) {
            if (VAR_14 + VAR_12 > VAR_9) {
                FUNC_0(VAR_0, VAR_1);
                goto err;
            }
            while (--VAR_12 > 0)
                VAR_8[VAR_14++] = VAR_18[VAR_12] | 0x80;
            VAR_8[VAR_14++] = VAR_18[0];
        } else
            VAR_14 += VAR_12;
    }
    if (VAR_18 != VAR_17)
        FUNC_8(VAR_18);
    FUNC_3(VAR_22);
    return VAR_14;
 err:
    if (VAR_18 != VAR_17)
        FUNC_8(VAR_18);
    FUNC_3(VAR_22);
    return 0;
}
