
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_0, bool VAR_1)
{
    uint8_t VAR_2, VAR_3, VAR_4, VAR_5 = 1;


    if (VAR_0<8)
    {
        VAR_3 = 0;
        for (VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++, VAR_5 <<= 1)
            VAR_3 |= VAR_5;
    }
    else
    {
       VAR_3 = 0xFF;
       VAR_4 = 0;
       if (VAR_1 && VAR_0>24)

           VAR_4 = (uint8_t)(VAR_0-24);
       else

          if (!VAR_1 && VAR_0>8)
               VAR_4 = (uint8_t)(VAR_0-8);
       for (VAR_2 = 0 ; VAR_2 < VAR_4 ; VAR_2++, VAR_5 <<= 1)
           VAR_3 &= ~VAR_5;

    }
    return VAR_3;
}
