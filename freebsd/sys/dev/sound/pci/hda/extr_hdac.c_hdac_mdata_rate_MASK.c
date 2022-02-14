
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static int
FUNC_0(uint16_t VAR_0)
{
 static const int VAR_1[8] = { 8, 16, 32, 32, 32, 32, 32, 32 };
 int VAR_2, VAR_3;

 if (VAR_0 & (1 << 14))
  VAR_2 = 44100;
 else
  VAR_2 = 48000;
 VAR_2 *= ((VAR_0 >> 11) & 0x07) + 1;
 VAR_2 /= ((VAR_0 >> 8) & 0x07) + 1;
 VAR_3 = VAR_1[(VAR_0 >> 4) & 0x03];
 VAR_3 *= (VAR_0 & 0x0f) + 1;
 return (VAR_2 * VAR_3);
}
