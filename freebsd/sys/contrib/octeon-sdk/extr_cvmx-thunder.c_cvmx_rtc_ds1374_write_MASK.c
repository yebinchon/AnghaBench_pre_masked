
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(uint32_t VAR_1)
{
    int VAR_2;
    int VAR_3;
    uint8_t VAR_4;

    for(VAR_3=0; VAR_3<2; VAR_3++)
    {
        VAR_2 = FUNC_1(VAR_0, 0x0, VAR_1 & 0xff);
        VAR_2 |= FUNC_1(VAR_0, 0x1, (VAR_1 >> 8) & 0xff);
        VAR_2 |= FUNC_1(VAR_0, 0x2, (VAR_1 >> 16) & 0xff);
        VAR_2 |= FUNC_1(VAR_0, 0x3, (VAR_1 >> 24) & 0xff);
        VAR_4 = FUNC_0(VAR_0, 0x0);
        if (VAR_4 == (VAR_1 & 0xff))
            break;
    }

    return (VAR_2 ? -1 : 0);
}
