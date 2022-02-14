
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(int VAR_2, int VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
    uint32_t VAR_6 = 0;


    VAR_6 = VAR_4;
    VAR_6 |= 0x0 << 26;
    VAR_6 |= (VAR_2 & 0x1f) << 21;
    VAR_6 |= (VAR_3 & 0x1f) << 16;
    VAR_6 |= 1 << 30;
    VAR_6 |= 1 << 31;




    FUNC_1(VAR_0, VAR_6);

    while (FUNC_0(VAR_0) & ( 1 << 30))
        ;


    FUNC_1(VAR_1, VAR_5);


    VAR_6 = 0;
    VAR_6 |= 0x1 << 26;
    VAR_6 |= (VAR_2 & 0x1f) << 21;
    VAR_6 |= (VAR_3 & 0x1f) << 16;
    VAR_6 |= 1 << 30;
    VAR_6 |= 1 << 31;
    FUNC_1(VAR_0, VAR_6);

    while (FUNC_0(VAR_0) & ( 1 << 30))
        ;


}
