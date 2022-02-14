
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_3(unsigned char *VAR_2, int VAR_3,
                                 const unsigned char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    unsigned char *VAR_8;

    if (VAR_5 > (VAR_3 - 11)) {
        FUNC_1(VAR_0,
               VAR_1);
        return 0;
    }

    VAR_8 = (unsigned char *)VAR_2;

    *(VAR_8++) = 0;
    *(VAR_8++) = 2;


    VAR_7 = VAR_3 - 3 - VAR_5;

    if (FUNC_0(VAR_8, VAR_7) <= 0)
        return 0;
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        if (*VAR_8 == '\0')
            do {
                if (FUNC_0(VAR_8, 1) <= 0)
                    return 0;
            } while (*VAR_8 == '\0');
        VAR_8++;
    }

    *(VAR_8++) = '\0';

    FUNC_2(VAR_8, VAR_4, (unsigned int)VAR_5);
    return 1;
}
