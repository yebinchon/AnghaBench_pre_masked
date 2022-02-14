
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,unsigned long) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    unsigned long VAR_3;

    if (VAR_2 == 0) return 0;

    if (VAR_2 < 2) return -1;


    VAR_3 = (VAR_1[0]<<8) | VAR_1[1];

    if (VAR_3 >= 0xD800 && VAR_3 < 0xE000) {
        unsigned int VAR_4;

        if (VAR_2 < 4) return -1;

        VAR_3 -= 0xD800;
        VAR_3 <<= 10;
        VAR_4 = (VAR_1[2]<<8) | VAR_1[3];
        if (VAR_4 < 0xDC00 || VAR_4 >= 0xE000) return -1;
        VAR_3 |= VAR_4-0xDC00;
        VAR_3 += 0x10000;
    }

    return FUNC_0((unsigned char *)VAR_0, VAR_2 > 4 ? 4 : VAR_2, VAR_3);
}
