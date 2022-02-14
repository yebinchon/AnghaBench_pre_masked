
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int crc32_result ;



uint32_t
FUNC_0(uint8_t *VAR_0,
           uint32_t VAR_1,
           uint32_t VAR_2,
           uint8_t VAR_3)
{
   uint32_t VAR_4 = 0;
   uint32_t VAR_5 = 0;
   uint8_t VAR_6 = 0;
   uint32_t VAR_7 = 0;
   uint32_t VAR_8 = 0;
   uint8_t VAR_9 = 0;
   uint32_t VAR_10 = VAR_2;
   const uint32_t VAR_11 = 0x1edc6f41;

   if ((VAR_0 == ((void*)0)) ||
       (VAR_1 == 0) ||
       ((VAR_1 % 8) != 0))
    {
        return (VAR_10);
    }

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 = VAR_4 + 1)
    {
        VAR_9 = VAR_0[VAR_4];
        for (VAR_5 = 0; VAR_5 < 8; VAR_5 = VAR_5 + 1)
        {

            VAR_6 = (uint8_t)(VAR_10 >> 31);

            VAR_10 = VAR_10 << 1;


            if (VAR_6 != (0x1 & (VAR_9 >> VAR_5)))
            {
                VAR_10 = VAR_10 ^ VAR_11;

                VAR_10 |= 1;
            }
        }
    }
    VAR_7 = VAR_10;
    VAR_8 = sizeof(VAR_10) * 8 - 1;

    for (VAR_10 >>= 1; VAR_10; VAR_10 >>= 1)
    {
        VAR_7 <<= 1;
        VAR_7 |= VAR_10 & 1;
        VAR_8-- ;
    }


    VAR_7 <<= VAR_8;



    {
        uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
        VAR_12 = (0x000000ff & (VAR_7 >> 24));
        VAR_13 = (0x0000ff00 & (VAR_7 >> 8));
        VAR_14 = (0x00ff0000 & (VAR_7 << 8));
        VAR_15 = (0xff000000 & (VAR_7 << 24));
        VAR_10 = VAR_12 | VAR_13 | VAR_14 | VAR_15;
    }


    if (VAR_3)
    {
        VAR_10 = ~VAR_10;
    }

    return (VAR_10);
}
