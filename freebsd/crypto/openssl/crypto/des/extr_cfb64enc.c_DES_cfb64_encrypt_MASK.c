
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef unsigned char DES_LONG ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *,int ) ;
 int FUNC_1 (unsigned char*,unsigned char) ;
 int FUNC_2 (unsigned char,unsigned char*) ;

void FUNC_3(const unsigned char *VAR_1, unsigned char *VAR_2,
                       long VAR_3, DES_key_schedule *VAR_4,
                       DES_cblock *VAR_5, int *VAR_6, int VAR_7)
{
    register DES_LONG VAR_8, VAR_9;
    register long VAR_10 = VAR_3;
    register int VAR_11 = *VAR_6;
    DES_LONG VAR_12[2];
    unsigned char *VAR_13, VAR_14, VAR_15;

    VAR_13 = &(*VAR_5)[0];
    if (VAR_7) {
        while (VAR_10--) {
            if (VAR_11 == 0) {
                FUNC_1(VAR_13, VAR_8);
                VAR_12[0] = VAR_8;
                FUNC_1(VAR_13, VAR_9);
                VAR_12[1] = VAR_9;
                FUNC_0(VAR_12, VAR_4, VAR_0);
                VAR_13 = &(*VAR_5)[0];
                VAR_8 = VAR_12[0];
                FUNC_2(VAR_8, VAR_13);
                VAR_8 = VAR_12[1];
                FUNC_2(VAR_8, VAR_13);
                VAR_13 = &(*VAR_5)[0];
            }
            VAR_14 = *(VAR_1++) ^ VAR_13[VAR_11];
            *(VAR_2++) = VAR_14;
            VAR_13[VAR_11] = VAR_14;
            VAR_11 = (VAR_11 + 1) & 0x07;
        }
    } else {
        while (VAR_10--) {
            if (VAR_11 == 0) {
                FUNC_1(VAR_13, VAR_8);
                VAR_12[0] = VAR_8;
                FUNC_1(VAR_13, VAR_9);
                VAR_12[1] = VAR_9;
                FUNC_0(VAR_12, VAR_4, VAR_0);
                VAR_13 = &(*VAR_5)[0];
                VAR_8 = VAR_12[0];
                FUNC_2(VAR_8, VAR_13);
                VAR_8 = VAR_12[1];
                FUNC_2(VAR_8, VAR_13);
                VAR_13 = &(*VAR_5)[0];
            }
            VAR_15 = *(VAR_1++);
            VAR_14 = VAR_13[VAR_11];
            VAR_13[VAR_11] = VAR_15;
            *(VAR_2++) = VAR_14 ^ VAR_15;
            VAR_11 = (VAR_11 + 1) & 0x07;
        }
    }
    VAR_8 = VAR_9 = VAR_12[0] = VAR_12[1] = VAR_14 = VAR_15 = 0;
    *VAR_6 = VAR_11;
}
