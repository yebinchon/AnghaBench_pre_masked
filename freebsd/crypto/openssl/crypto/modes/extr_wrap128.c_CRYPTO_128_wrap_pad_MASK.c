
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void*) ;


 size_t VAR_0 ;
 int FUNC_0 (void*,unsigned char*,unsigned char*,unsigned char*,size_t const,int (*) (unsigned char*,unsigned char*,void*)) ;
 unsigned char* VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char*,int ,size_t const) ;

size_t FUNC_4(void *VAR_2, const unsigned char *VAR_3,
                           unsigned char *VAR_4,
                           const unsigned char *VAR_5, size_t VAR_6,
                           block128_f VAR_7)
{






    const size_t VAR_8 = (VAR_6 + 7) / 8;
    const size_t VAR_9 = VAR_8 * 8;
    const size_t VAR_10 = VAR_9 - VAR_6;

    unsigned char VAR_11[8];
    int VAR_12;


    if (VAR_6 == 0 || VAR_6 >= VAR_0)
        return 0;


    if (!VAR_3)
        FUNC_1(VAR_11, VAR_1, 4);
    else
        FUNC_1(VAR_11, VAR_3, 4);

    VAR_11[4] = (VAR_6 >> 24) & 0xFF;
    VAR_11[5] = (VAR_6 >> 16) & 0xFF;
    VAR_11[6] = (VAR_6 >> 8) & 0xFF;
    VAR_11[7] = VAR_6 & 0xFF;

    if (VAR_9 == 8) {





        FUNC_2(VAR_4 + 8, VAR_5, VAR_6);
        FUNC_1(VAR_4, VAR_11, 8);
        FUNC_3(VAR_4 + 8 + VAR_6, 0, VAR_10);
        VAR_7(VAR_4, VAR_4, VAR_2);
        VAR_12 = 16;
    } else {
        FUNC_2(VAR_4, VAR_5, VAR_6);
        FUNC_3(VAR_4 + VAR_6, 0, VAR_10);
        VAR_12 = FUNC_0(VAR_2, VAR_11, VAR_4, VAR_4, VAR_9, VAR_7);
    }

    return VAR_12;
}
