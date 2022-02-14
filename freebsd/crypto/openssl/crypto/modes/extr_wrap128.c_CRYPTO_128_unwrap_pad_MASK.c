
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char const*,unsigned char*,void*) ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,size_t) ;
 size_t FUNC_2 (void*,unsigned char*,unsigned char*,unsigned char const*,size_t,int (*) (unsigned char const*,unsigned char*,void*)) ;
 unsigned char* VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

size_t FUNC_4(void *VAR_2, const unsigned char *VAR_3,
                             unsigned char *VAR_4,
                             const unsigned char *VAR_5, size_t VAR_6,
                             block128_f VAR_7)
{

    size_t VAR_8 = VAR_6 / 8 - 1;
    size_t VAR_9;
    size_t VAR_10;
    size_t VAR_11;

    unsigned char VAR_12[8];
    static unsigned char VAR_13[8] = { 0x0 };
    size_t VAR_14;


    if ((VAR_6 & 0x7) != 0 || VAR_6 < 16 || VAR_6 >= VAR_0)
        return 0;

    if (VAR_6 == 16) {






        unsigned char VAR_15[16];

        VAR_7(VAR_5, VAR_15, VAR_2);
        FUNC_3(VAR_12, VAR_15, 8);

        FUNC_3(VAR_4, VAR_15 + 8, 8);
        VAR_9 = 8;
        FUNC_1(VAR_15, VAR_6);
    } else {
        VAR_9 = VAR_6 - 8;
        VAR_14 = FUNC_2(VAR_2, VAR_12, VAR_4, VAR_5, VAR_6, VAR_7);
        if (VAR_9 != VAR_14) {
            FUNC_1(VAR_4, VAR_6);
            return 0;
        }
    }






    if ((!VAR_3 && FUNC_0(VAR_12, VAR_1, 4))
        || (VAR_3 && FUNC_0(VAR_12, VAR_3, 4))) {
        FUNC_1(VAR_4, VAR_6);
        return 0;
    }






    VAR_11 = ((unsigned int)VAR_12[4] << 24)
                | ((unsigned int)VAR_12[5] << 16)
                | ((unsigned int)VAR_12[6] << 8)
                | (unsigned int)VAR_12[7];
    if (8 * (VAR_8 - 1) >= VAR_11 || VAR_11 > 8 * VAR_8) {
        FUNC_1(VAR_4, VAR_6);
        return 0;
    }





    VAR_10 = VAR_9 - VAR_11;
    if (FUNC_0(VAR_4 + VAR_11, VAR_13, VAR_10) != 0) {
        FUNC_1(VAR_4, VAR_6);
        return 0;
    }


    return VAR_11;
}
