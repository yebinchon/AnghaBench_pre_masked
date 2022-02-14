
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_2 (unsigned char*,int,int) ;

int FUNC_3(unsigned char *VAR_3, int VAR_4,
                                 const unsigned char *VAR_5, int VAR_6)
{
    int VAR_7;
    unsigned char *VAR_8;

    if (VAR_6 > (VAR_4 - VAR_1)) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }

    VAR_8 = (unsigned char *)VAR_3;

    *(VAR_8++) = 0;
    *(VAR_8++) = 1;


    VAR_7 = VAR_4 - 3 - VAR_6;
    FUNC_2(VAR_8, 0xff, VAR_7);
    VAR_8 += VAR_7;
    *(VAR_8++) = '\0';
    FUNC_1(VAR_8, VAR_5, (unsigned int)VAR_6);
    return 1;
}
