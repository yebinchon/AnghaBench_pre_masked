
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef unsigned char DES_LONG ;


 int FUNC_0 (unsigned char*,int *,int *,int *) ;
 int FUNC_1 (unsigned char*,unsigned char) ;
 int FUNC_2 (unsigned char,unsigned char*) ;

void FUNC_3(const unsigned char *VAR_0, unsigned char *VAR_1,
                            long VAR_2, DES_key_schedule *VAR_3,
                            DES_key_schedule *VAR_4, DES_key_schedule *VAR_5,
                            DES_cblock *VAR_6, int *VAR_7, int VAR_8)
{
    register DES_LONG VAR_9, VAR_10;
    register long VAR_11 = VAR_2;
    register int VAR_12 = *VAR_7;
    DES_LONG VAR_13[2];
    unsigned char *VAR_14, VAR_15, VAR_16;

    VAR_14 = &(*VAR_6)[0];
    if (VAR_8) {
        while (VAR_11--) {
            if (VAR_12 == 0) {
                FUNC_1(VAR_14, VAR_9);
                FUNC_1(VAR_14, VAR_10);

                VAR_13[0] = VAR_9;
                VAR_13[1] = VAR_10;
                FUNC_0(VAR_13, VAR_3, VAR_4, VAR_5);
                VAR_9 = VAR_13[0];
                VAR_10 = VAR_13[1];

                VAR_14 = &(*VAR_6)[0];
                FUNC_2(VAR_9, VAR_14);
                FUNC_2(VAR_10, VAR_14);
                VAR_14 = &(*VAR_6)[0];
            }
            VAR_15 = *(VAR_0++) ^ VAR_14[VAR_12];
            *(VAR_1++) = VAR_15;
            VAR_14[VAR_12] = VAR_15;
            VAR_12 = (VAR_12 + 1) & 0x07;
        }
    } else {
        while (VAR_11--) {
            if (VAR_12 == 0) {
                FUNC_1(VAR_14, VAR_9);
                FUNC_1(VAR_14, VAR_10);

                VAR_13[0] = VAR_9;
                VAR_13[1] = VAR_10;
                FUNC_0(VAR_13, VAR_3, VAR_4, VAR_5);
                VAR_9 = VAR_13[0];
                VAR_10 = VAR_13[1];

                VAR_14 = &(*VAR_6)[0];
                FUNC_2(VAR_9, VAR_14);
                FUNC_2(VAR_10, VAR_14);
                VAR_14 = &(*VAR_6)[0];
            }
            VAR_16 = *(VAR_0++);
            VAR_15 = VAR_14[VAR_12];
            VAR_14[VAR_12] = VAR_16;
            *(VAR_1++) = VAR_15 ^ VAR_16;
            VAR_12 = (VAR_12 + 1) & 0x07;
        }
    }
    VAR_9 = VAR_10 = VAR_13[0] = VAR_13[1] = VAR_15 = VAR_16 = 0;
    *VAR_7 = VAR_12;
}
