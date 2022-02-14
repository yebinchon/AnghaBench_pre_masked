
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;


 int* VAR_0 ;

uint16_t
FUNC_0(uint16_t VAR_1, const u_char *VAR_2, int VAR_3)
{
    register int VAR_4;

    for ( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
    {
        VAR_1 = ((VAR_1 << 8) & 0x3ff)
            ^ VAR_0[( VAR_1 >> 2) & 0xff]
            ^ *VAR_2++;
    }
    return VAR_1;
}
