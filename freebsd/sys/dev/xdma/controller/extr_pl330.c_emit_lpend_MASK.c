
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_0(uint8_t *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, uint8_t VAR_5)
{

 VAR_2[0] = VAR_0;
 VAR_2[0] |= VAR_1;
 VAR_2[0] |= (VAR_3 << 2);
 if (VAR_4)
  VAR_2[0] |= (1 << 1) | (1 << 0);
 else
  VAR_2[0] |= (0 << 1) | (1 << 0);
 VAR_2[1] = VAR_5;

 return (2);
}
