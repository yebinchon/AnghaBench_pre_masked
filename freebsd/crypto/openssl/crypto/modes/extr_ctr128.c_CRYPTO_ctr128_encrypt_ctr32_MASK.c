
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int (* ctr128_f ) (unsigned char*,unsigned char*,int,void const*,unsigned char*) ;


 unsigned int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char const*,unsigned char*,int,void const*,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*,int,void const*,unsigned char*) ;

void FUNC_6(const unsigned char *VAR_0, unsigned char *VAR_1,
                                 size_t VAR_2, const void *VAR_3,
                                 unsigned char VAR_4[16],
                                 unsigned char VAR_5[16],
                                 unsigned int *VAR_6, ctr128_f VAR_7)
{
    unsigned int VAR_8, VAR_9;

    VAR_8 = *VAR_6;

    while (VAR_8 && VAR_2) {
        *(VAR_1++) = *(VAR_0++) ^ VAR_5[VAR_8];
        --VAR_2;
        VAR_8 = (VAR_8 + 1) % 16;
    }

    VAR_9 = FUNC_0(VAR_4 + 12);
    while (VAR_2 >= 16) {
        size_t VAR_10 = VAR_2 / 16;





        if (sizeof(size_t) > sizeof(unsigned int) && VAR_10 > (1U << 28))
            VAR_10 = (1U << 28);






        VAR_9 += (u32)VAR_10;
        if (VAR_9 < VAR_10) {
            VAR_10 -= VAR_9;
            VAR_9 = 0;
        }
        (*VAR_7) (VAR_0, VAR_1, VAR_10, VAR_3, VAR_4);

        FUNC_1(VAR_4 + 12, VAR_9);

        if (VAR_9 == 0)
            FUNC_2(VAR_4);
        VAR_10 *= 16;
        VAR_2 -= VAR_10;
        VAR_1 += VAR_10;
        VAR_0 += VAR_10;
    }
    if (VAR_2) {
        FUNC_3(VAR_5, 0, 16);
        (*VAR_7) (VAR_5, VAR_5, 1, VAR_3, VAR_4);
        ++VAR_9;
        FUNC_1(VAR_4 + 12, VAR_9);
        if (VAR_9 == 0)
            FUNC_2(VAR_4);
        while (VAR_2--) {
            VAR_1[VAR_8] = VAR_0[VAR_8] ^ VAR_5[VAR_8];
            ++VAR_8;
        }
    }

    *VAR_6 = VAR_8;
}
