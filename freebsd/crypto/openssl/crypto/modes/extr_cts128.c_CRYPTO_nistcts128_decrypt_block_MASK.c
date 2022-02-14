
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char const*,unsigned char*,void const*) ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,void const*,unsigned char*,int (*) (unsigned char const*,unsigned char*,void const*)) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char const*,unsigned char*,void const*) ;
 int FUNC_3 (unsigned char const*,unsigned char*,void const*) ;

size_t FUNC_4(const unsigned char *VAR_0,
                                       unsigned char *VAR_1, size_t VAR_2,
                                       const void *VAR_3,
                                       unsigned char VAR_4[16],
                                       block128_f VAR_5)
{
    size_t VAR_6, VAR_7;
    union {
        size_t align;
        unsigned char c[32];
    } VAR_8;

    if (VAR_2 < 16)
        return 0;

    VAR_6 = VAR_2 % 16;

    if (VAR_6 == 0) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        return VAR_2;
    }

    VAR_2 -= 16 + VAR_6;

    if (VAR_2) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        VAR_0 += VAR_2;
        VAR_1 += VAR_2;
    }

    (*VAR_5) (VAR_0 + VAR_6, VAR_8.c + 16, VAR_3);

    FUNC_1(VAR_8.c, VAR_8.c + 16, 16);
    FUNC_1(VAR_8.c, VAR_0, VAR_6);
    (*VAR_5) (VAR_8.c, VAR_8.c, VAR_3);

    for (VAR_7 = 0; VAR_7 < 16; ++VAR_7) {
        unsigned char VAR_9 = VAR_0[VAR_7];
        VAR_1[VAR_7] = VAR_8.c[VAR_7] ^ VAR_4[VAR_7];
        VAR_4[VAR_7] = VAR_0[VAR_7 + VAR_6];
        VAR_8.c[VAR_7] = VAR_9;
    }
    for (VAR_6 += 16; VAR_7 < VAR_6; ++VAR_7)
        VAR_1[VAR_7] = VAR_8.c[VAR_7] ^ VAR_8.c[VAR_7 - 16];

    return 16 + VAR_2 + VAR_6;
}
