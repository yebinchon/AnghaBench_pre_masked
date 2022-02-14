
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned long uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint8_t *VAR_0)
{
    const int VAR_1 = 16;
    unsigned long VAR_2, VAR_3, VAR_4, VAR_5;
    unsigned long VAR_6 = 0x4F4E;
    unsigned long VAR_7 = ((((unsigned long)1<<(VAR_1-1))-1)<<1)|1;
    unsigned long VAR_8 = (unsigned long)1<<(VAR_1-1);

    for (VAR_2 = 0; VAR_2 < 254; VAR_2++)
    {
        VAR_4 = (unsigned long)VAR_0[VAR_2];
        for (VAR_3 = 0x80; VAR_3; VAR_3 >>= 1) {
              VAR_5 = VAR_6 & VAR_8;
              VAR_6 <<= 1;
              if (VAR_4 & VAR_3)
                  VAR_5 ^= VAR_8;
              if (VAR_5)
                   VAR_6 ^= 0x8005;
        }
        VAR_6 &= VAR_7;
    }
    return(VAR_6);
}
