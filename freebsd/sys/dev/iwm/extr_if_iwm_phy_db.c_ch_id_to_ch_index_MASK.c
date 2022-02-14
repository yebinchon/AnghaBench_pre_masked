
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint8_t
FUNC_1(uint16_t VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0xff;

 if (VAR_0 <= 14)
  return VAR_0 - 1;
 if (VAR_0 <= 64)
  return (VAR_0 + 20) / 4;
 if (VAR_0 <= 140)
  return (VAR_0 - 12) / 4;
 return (VAR_0 - 13) / 4;
}
