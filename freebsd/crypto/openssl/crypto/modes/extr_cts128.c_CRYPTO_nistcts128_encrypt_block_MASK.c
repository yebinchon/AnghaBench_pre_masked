
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void const*) ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,void const*,unsigned char*,int (*) (unsigned char*,unsigned char*,void const*)) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,void const*) ;

size_t FUNC_3(const unsigned char *VAR_0,
                                       unsigned char *VAR_1, size_t VAR_2,
                                       const void *VAR_3,
                                       unsigned char VAR_4[16],
                                       block128_f VAR_5)
{
    size_t VAR_6, VAR_7;

    if (VAR_2 < 16)
        return 0;

    VAR_6 = VAR_2 % 16;

    VAR_2 -= VAR_6;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_6 == 0)
        return VAR_2;

    VAR_0 += VAR_2;
    VAR_1 += VAR_2;

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
        VAR_4[VAR_7] ^= VAR_0[VAR_7];
    (*VAR_5) (VAR_4, VAR_4, VAR_3);
    FUNC_1(VAR_1 - 16 + VAR_6, VAR_4, 16);

    return VAR_2 + VAR_6;
}
