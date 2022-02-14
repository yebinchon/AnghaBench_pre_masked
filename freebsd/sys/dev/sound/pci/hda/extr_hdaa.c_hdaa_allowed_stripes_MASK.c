
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(uint16_t VAR_0)
{
 static const int VAR_1[8] = { 8, 16, 20, 24, 32, 32, 32, 32 };
 int VAR_2;

 VAR_2 = VAR_1[(VAR_0 >> 4) & 0x03];
 VAR_2 *= (VAR_0 & 0x0f) + 1;
 VAR_2 *= ((VAR_0 >> 11) & 0x07) + 1;
 return (0xffffffffU >> (32 - FUNC_0(VAR_2 / 8)));
}
