
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(uint32_t VAR_5)
{
    uint32_t VAR_6;

    VAR_6 = (0x1 << FUNC_2()) - 1;
    VAR_5 &= VAR_6;


    if (VAR_5 == VAR_6 && (FUNC_1(VAR_1) || FUNC_1(VAR_2)))
        return -1;

    if (FUNC_1(VAR_3) || FUNC_1(VAR_4))
        FUNC_4(FUNC_0(0), VAR_5);
    else
        FUNC_4(VAR_0,
                   (FUNC_3(VAR_0) & ~0xFF) | VAR_5);
    return 0;
}
