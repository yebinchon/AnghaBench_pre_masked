
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void*) ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_1, unsigned char *VAR_2,
                                    unsigned char *VAR_3,
                                    const unsigned char *VAR_4, size_t VAR_5,
                                    block128_f VAR_6)
{
    unsigned char *VAR_7, VAR_8[16], *VAR_9;
    size_t VAR_10, VAR_11, VAR_12;
    VAR_5 -= 8;
    if ((VAR_5 & 0x7) || (VAR_5 < 16) || (VAR_5 > VAR_0))
        return 0;
    VAR_7 = VAR_8;
    VAR_12 = 6 * (VAR_5 >> 3);
    FUNC_0(VAR_7, VAR_4, 8);
    FUNC_1(VAR_3, VAR_4 + 8, VAR_5);
    for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
        VAR_9 = VAR_3 + VAR_5 - 8;
        for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 += 8, VAR_12--, VAR_9 -= 8) {
            VAR_7[7] ^= (unsigned char)(VAR_12 & 0xff);
            if (VAR_12 > 0xff) {
                VAR_7[6] ^= (unsigned char)((VAR_12 >> 8) & 0xff);
                VAR_7[5] ^= (unsigned char)((VAR_12 >> 16) & 0xff);
                VAR_7[4] ^= (unsigned char)((VAR_12 >> 24) & 0xff);
            }
            FUNC_0(VAR_8 + 8, VAR_9, 8);
            VAR_6(VAR_8, VAR_8, VAR_1);
            FUNC_0(VAR_9, VAR_8 + 8, 8);
        }
    }
    FUNC_0(VAR_2, VAR_7, 8);
    return VAR_5;
}
