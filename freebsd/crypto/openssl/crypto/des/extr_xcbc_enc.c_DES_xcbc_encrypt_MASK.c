
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* const_DES_cblock ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int ) ;
 int FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*,int,int,long) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (int,int,unsigned char*,long) ;

void FUNC_5(const unsigned char *VAR_2, unsigned char *VAR_3,
                      long VAR_4, DES_key_schedule *VAR_5,
                      DES_cblock *VAR_6, const_DES_cblock *VAR_7,
                      const_DES_cblock *VAR_8, int VAR_9)
{
    register DES_LONG VAR_10, VAR_11;
    register DES_LONG VAR_12, VAR_13, VAR_14, VAR_15;
    register DES_LONG VAR_16, VAR_17, VAR_18, VAR_19;
    register const unsigned char *VAR_20;
    register long VAR_21 = VAR_4;
    DES_LONG VAR_22[2];
    unsigned char *VAR_23;

    VAR_20 = &(*VAR_7)[0];
    FUNC_1(VAR_20, VAR_16);
    FUNC_1(VAR_20, VAR_17);
    VAR_20 = &(*VAR_8)[0];
    FUNC_1(VAR_20, VAR_18);
    FUNC_1(VAR_20, VAR_19);

    VAR_23 = &(*VAR_6)[0];

    if (VAR_9) {
        FUNC_1(VAR_23, VAR_12);
        FUNC_1(VAR_23, VAR_13);
        for (VAR_21 -= 8; VAR_21 >= 0; VAR_21 -= 8) {
            FUNC_1(VAR_2, VAR_10);
            FUNC_1(VAR_2, VAR_11);
            VAR_10 ^= VAR_12 ^ VAR_16;
            VAR_22[0] = VAR_10;
            VAR_11 ^= VAR_13 ^ VAR_17;
            VAR_22[1] = VAR_11;
            FUNC_0(VAR_22, VAR_5, VAR_1);
            VAR_12 = VAR_22[0] ^ VAR_18;
            FUNC_3(VAR_12, VAR_3);
            VAR_13 = VAR_22[1] ^ VAR_19;
            FUNC_3(VAR_13, VAR_3);
        }
        if (VAR_21 != -8) {
            FUNC_2(VAR_2, VAR_10, VAR_11, VAR_21 + 8);
            VAR_10 ^= VAR_12 ^ VAR_16;
            VAR_22[0] = VAR_10;
            VAR_11 ^= VAR_13 ^ VAR_17;
            VAR_22[1] = VAR_11;
            FUNC_0(VAR_22, VAR_5, VAR_1);
            VAR_12 = VAR_22[0] ^ VAR_18;
            FUNC_3(VAR_12, VAR_3);
            VAR_13 = VAR_22[1] ^ VAR_19;
            FUNC_3(VAR_13, VAR_3);
        }
        VAR_23 = &(*VAR_6)[0];
        FUNC_3(VAR_12, VAR_23);
        FUNC_3(VAR_13, VAR_23);
    } else {
        FUNC_1(VAR_23, VAR_14);
        FUNC_1(VAR_23, VAR_15);
        for (VAR_21 -= 8; VAR_21 > 0; VAR_21 -= 8) {
            FUNC_1(VAR_2, VAR_10);
            VAR_22[0] = VAR_10 ^ VAR_18;
            FUNC_1(VAR_2, VAR_11);
            VAR_22[1] = VAR_11 ^ VAR_19;
            FUNC_0(VAR_22, VAR_5, VAR_0);
            VAR_12 = VAR_22[0] ^ VAR_14 ^ VAR_16;
            VAR_13 = VAR_22[1] ^ VAR_15 ^ VAR_17;
            FUNC_3(VAR_12, VAR_3);
            FUNC_3(VAR_13, VAR_3);
            VAR_14 = VAR_10;
            VAR_15 = VAR_11;
        }
        if (VAR_21 != -8) {
            FUNC_1(VAR_2, VAR_10);
            VAR_22[0] = VAR_10 ^ VAR_18;
            FUNC_1(VAR_2, VAR_11);
            VAR_22[1] = VAR_11 ^ VAR_19;
            FUNC_0(VAR_22, VAR_5, VAR_0);
            VAR_12 = VAR_22[0] ^ VAR_14 ^ VAR_16;
            VAR_13 = VAR_22[1] ^ VAR_15 ^ VAR_17;
            FUNC_4(VAR_12, VAR_13, VAR_3, VAR_21 + 8);
            VAR_14 = VAR_10;
            VAR_15 = VAR_11;
        }

        VAR_23 = &(*VAR_6)[0];
        FUNC_3(VAR_14, VAR_23);
        FUNC_3(VAR_15, VAR_23);
    }
    VAR_10 = VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0;
    VAR_16 = VAR_17 = VAR_18 = VAR_19 = 0;
    VAR_22[0] = VAR_22[1] = 0;
}
