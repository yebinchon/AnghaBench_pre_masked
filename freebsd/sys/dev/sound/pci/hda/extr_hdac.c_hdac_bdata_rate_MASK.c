
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static int
FUNC_0(uint16_t VAR_0, int VAR_1)
{
 static const int VAR_2[8] = { 8, 16, 20, 24, 32, 32, 32, 32 };
 int VAR_3, VAR_4;

 VAR_3 = 48000;
 VAR_3 *= ((VAR_0 >> 11) & 0x07) + 1;
 VAR_4 = VAR_2[(VAR_0 >> 4) & 0x03];
 VAR_4 *= (VAR_0 & 0x0f) + 1;
 if (!VAR_1)
  VAR_4 = ((VAR_4 + 7) & ~0x07) + 10;
 return (VAR_3 * VAR_4);
}
