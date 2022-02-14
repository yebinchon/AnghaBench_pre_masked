
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 VAR_3 = VAR_0;
 VAR_2 = 0;

 while (VAR_1) {
  VAR_2 |= (VAR_1 & 0xF) << ((VAR_3 & 0xF) * 4);
  VAR_3 >>= 4;
  VAR_1 >>= 4;
 }
 return (VAR_2);
}
