
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef scalar_t__ DES_LONG ;


 int FUNC_0 (scalar_t__*,int *,int *,int *) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,...) ;

void FUNC_3(register const unsigned char *VAR_0,
                            register unsigned char *VAR_1, long VAR_2,
                            DES_key_schedule *VAR_3, DES_key_schedule *VAR_4,
                            DES_key_schedule *VAR_5, DES_cblock *VAR_6, int *VAR_7)
{
    register DES_LONG VAR_8, VAR_9;
    register int VAR_10 = *VAR_7;
    register long VAR_11 = VAR_2;
    DES_cblock VAR_12;
    register char *VAR_13;
    DES_LONG VAR_14[2];
    unsigned char *VAR_15;
    int VAR_16 = 0;

    VAR_15 = &(*VAR_6)[0];
    FUNC_1(VAR_15, VAR_8);
    FUNC_1(VAR_15, VAR_9);
    VAR_14[0] = VAR_8;
    VAR_14[1] = VAR_9;
    VAR_13 = (char *)VAR_12;
    FUNC_2(VAR_8, VAR_13);
    FUNC_2(VAR_9, VAR_13);
    while (VAR_11--) {
        if (VAR_10 == 0) {


            FUNC_0(VAR_14, VAR_3, VAR_4, VAR_5);
            VAR_8 = VAR_14[0];
            VAR_9 = VAR_14[1];

            VAR_13 = (char *)VAR_12;
            FUNC_2(VAR_8, VAR_13);
            FUNC_2(VAR_9, VAR_13);
            VAR_16++;
        }
        *(VAR_1++) = *(VAR_0++) ^ VAR_12[VAR_10];
        VAR_10 = (VAR_10 + 1) & 0x07;
    }
    if (VAR_16) {
        VAR_15 = &(*VAR_6)[0];
        FUNC_2(VAR_8, VAR_15);
        FUNC_2(VAR_9, VAR_15);
    }
    VAR_8 = VAR_9 = VAR_14[0] = VAR_14[1] = 0;
    *VAR_7 = VAR_10;
}
