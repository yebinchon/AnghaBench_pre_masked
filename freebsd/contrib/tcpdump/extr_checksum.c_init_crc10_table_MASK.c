
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verify_crc10_table ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_2(void)
{

    register int VAR_2, VAR_3;
    register uint16_t VAR_4;
    uint16_t VAR_5[256];

    for ( VAR_2 = 0; VAR_2 < 256; VAR_2++ )
    {
        VAR_4 = ((unsigned short) VAR_2 << 2);
        for ( VAR_3 = 0; VAR_3 < 8; VAR_3++ )
        {
            if ((VAR_4 <<= 1) & 0x400) VAR_4 ^= 0x633;
        }
        VAR_5[VAR_2] = VAR_4;
    }
    FUNC_0(FUNC_1(VAR_5,
      VAR_1,
      sizeof(VAR_5)) == 0);

}
