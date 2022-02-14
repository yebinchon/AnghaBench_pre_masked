
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rounds; int* data; } ;
typedef TYPE_1__ RC5_32_KEY ;
typedef int RC5_32_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*,int,int,int) ;

void FUNC_3(RC5_32_KEY *VAR_6, int VAR_7, const unsigned char *VAR_8,
                    int VAR_9)
{
    RC5_32_INT VAR_10[64], VAR_11, VAR_12, VAR_13, VAR_14, *VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

    if ((VAR_9 != VAR_1) &&
        (VAR_9 != VAR_0) && (VAR_9 != VAR_5))
        VAR_9 = VAR_1;

    VAR_6->rounds = VAR_9;
    VAR_15 = &(VAR_6->data[0]);
    VAR_18 = 0;
    for (VAR_17 = 0; VAR_17 <= (VAR_7 - 8); VAR_17 += 8) {
        FUNC_1(VAR_8, VAR_11);
        VAR_10[VAR_18++] = VAR_11;
        FUNC_1(VAR_8, VAR_11);
        VAR_10[VAR_18++] = VAR_11;
    }
    VAR_22 = VAR_7 - VAR_17;
    if (VAR_22) {
        VAR_16 = VAR_7 & 0x07;
        FUNC_2(VAR_8, VAR_11, VAR_12, VAR_16);
        VAR_10[VAR_18 + 0] = VAR_11;
        VAR_10[VAR_18 + 1] = VAR_12;
    }

    VAR_20 = (VAR_7 + 3) / 4;
    VAR_21 = (VAR_9 + 1) * 2;
    VAR_15[0] = VAR_3;
    for (VAR_17 = 1; VAR_17 < VAR_21; VAR_17++)
        VAR_15[VAR_17] = (VAR_15[VAR_17 - 1] + VAR_4) & VAR_2;

    VAR_18 = (VAR_21 > VAR_20) ? VAR_21 : VAR_20;
    VAR_18 *= 3;
    VAR_22 = VAR_23 = 0;
    VAR_13 = VAR_14 = 0;
    for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
        VAR_16 = (VAR_15[VAR_22] + VAR_13 + VAR_14) & VAR_2;
        VAR_13 = VAR_15[VAR_22] = FUNC_0(VAR_16, 3);
        VAR_19 = (int)(VAR_13 + VAR_14);
        VAR_16 = (VAR_10[VAR_23] + VAR_13 + VAR_14) & VAR_2;
        VAR_14 = VAR_10[VAR_23] = FUNC_0(VAR_16, VAR_19);
        if (++VAR_22 >= VAR_21)
            VAR_22 = 0;
        if (++VAR_23 >= VAR_20)
            VAR_23 = 0;
    }
}
