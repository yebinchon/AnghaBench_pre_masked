
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(void)
{
    int VAR_1;
    uint8_t VAR_2;
    uint32_t VAR_3;

    for(VAR_1=0; VAR_1<2; VAR_1++)
    {
        VAR_3 = FUNC_0(VAR_0, 0x0);
        VAR_3 |= (FUNC_1(VAR_0) & 0xff) << 8;
        VAR_3 |= (FUNC_1(VAR_0) & 0xff) << 16;
        VAR_3 |= (FUNC_1(VAR_0) & 0xff) << 24;

        VAR_2 = FUNC_0(VAR_0, 0x0);
        if (VAR_2 == (VAR_3 & 0xff))
            break;
    }

    return VAR_3;
}
