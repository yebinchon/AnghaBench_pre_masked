
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint16_t
FUNC_1(uint16_t VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0xff;

 if (1 <= VAR_0 && VAR_0 <= 14)
  return 0;
 if (36 <= VAR_0 && VAR_0 <= 64)
  return 1;
 if (100 <= VAR_0 && VAR_0 <= 140)
  return 2;
 return 3;
}
