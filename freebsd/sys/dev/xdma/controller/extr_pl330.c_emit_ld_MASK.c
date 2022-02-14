
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uint8_t *VAR_1, uint8_t VAR_2)
{

 VAR_1[0] = VAR_0;
 if (VAR_2)
  VAR_1[0] |= (1 << 1) | (1 << 0);
 else
  VAR_1[0] |= (0 << 1) | (1 << 0);

 return (1);
}
