
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uint8_t *VAR_1, uint8_t VAR_2, uint32_t VAR_3)
{

 if (VAR_2 > 1)
  return (0);

 VAR_1[0] = VAR_0;
 VAR_1[0] |= (VAR_2 << 1);
 VAR_1[1] = (VAR_3 - 1) & 0xff;

 return (2);
}
