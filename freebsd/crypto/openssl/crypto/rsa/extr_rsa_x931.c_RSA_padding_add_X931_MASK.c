
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_2 (unsigned char*,int,int) ;

int FUNC_3(unsigned char *VAR_2, int VAR_3,
                         const unsigned char *VAR_4, int VAR_5)
{
    int VAR_6;
    unsigned char *VAR_7;






    VAR_6 = VAR_3 - VAR_5 - 2;

    if (VAR_6 < 0) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    VAR_7 = (unsigned char *)VAR_2;


    if (VAR_6 == 0) {
        *VAR_7++ = 0x6A;
    } else {
        *VAR_7++ = 0x6B;
        if (VAR_6 > 1) {
            FUNC_2(VAR_7, 0xBB, VAR_6 - 1);
            VAR_7 += VAR_6 - 1;
        }
        *VAR_7++ = 0xBA;
    }
    FUNC_1(VAR_7, VAR_4, (unsigned int)VAR_5);
    VAR_7 += VAR_5;
    *VAR_7 = 0xCC;
    return 1;
}
