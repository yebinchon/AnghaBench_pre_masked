
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BNRAND_FLAG ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*,int) ;
 unsigned char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned char*,int) ;
 scalar_t__ FUNC_6 (unsigned char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(BNRAND_FLAG VAR_7, BIGNUM *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    unsigned char *VAR_12 = ((void*)0);
    int VAR_13, VAR_14 = 0, VAR_15, VAR_16, VAR_17;

    if (VAR_9 == 0) {
        if (VAR_10 != VAR_2 || VAR_11 != VAR_1)
            goto toosmall;
        FUNC_1(VAR_8);
        return 1;
    }
    if (VAR_9 < 0 || (VAR_9 == 1 && VAR_10 > 0))
        goto toosmall;

    VAR_16 = (VAR_9 + 7) / 8;
    VAR_15 = (VAR_9 - 1) % 8;
    VAR_17 = 0xff << (VAR_15 + 1);

    VAR_12 = FUNC_4(VAR_16);
    if (VAR_12 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_4);
        goto err;
    }


    VAR_13 = VAR_7 == VAR_5 ? FUNC_5(VAR_12, VAR_16) : FUNC_6(VAR_12, VAR_16);
    if (VAR_13 <= 0)
        goto err;

    if (VAR_7 == VAR_6) {



        int VAR_18;
        unsigned char VAR_19;

        for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
            if (FUNC_5(&VAR_19, 1) <= 0)
                goto err;
            if (VAR_19 >= 128 && VAR_18 > 0)
                VAR_12[VAR_18] = VAR_12[VAR_18 - 1];
            else if (VAR_19 < 42)
                VAR_12[VAR_18] = 0;
            else if (VAR_19 < 84)
                VAR_12[VAR_18] = 255;
        }
    }

    if (VAR_10 >= 0) {
        if (VAR_10) {
            if (VAR_15 == 0) {
                VAR_12[0] = 1;
                VAR_12[1] |= 0x80;
            } else {
                VAR_12[0] |= (3 << (VAR_15 - 1));
            }
        } else {
            VAR_12[0] |= (1 << VAR_15);
        }
    }
    VAR_12[0] &= ~VAR_17;
    if (VAR_11)
        VAR_12[VAR_16 - 1] |= 1;
    if (!FUNC_0(VAR_12, VAR_16, VAR_8))
        goto err;
    VAR_14 = 1;
 err:
    FUNC_3(VAR_12, VAR_16);
    FUNC_7(VAR_8);
    return VAR_14;

toosmall:
    FUNC_2(VAR_0, VAR_3);
    return 0;
}
