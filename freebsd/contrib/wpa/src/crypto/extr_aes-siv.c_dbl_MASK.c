
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_1[0] & 0x80;
 for (VAR_2 = 0; VAR_2 < VAR_0 - 1; VAR_2++)
  VAR_1[VAR_2] = (VAR_1[VAR_2] << 1) | (VAR_1[VAR_2 + 1] >> 7);
 VAR_1[VAR_0 - 1] <<= 1;
 if (VAR_3)
  VAR_1[VAR_0 - 1] ^= 0x87;
}
