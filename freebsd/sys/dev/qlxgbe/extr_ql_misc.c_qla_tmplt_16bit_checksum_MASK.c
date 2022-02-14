
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int qla_host_t ;



__attribute__((used)) static uint16_t
FUNC_0(qla_host_t *VAR_0, uint16_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = VAR_2 >> 1;

 while (VAR_4-- > 0)
  VAR_3 += *VAR_1++;

 while (VAR_3 >> 16)
  VAR_3 = (VAR_3 & 0xFFFF) + (VAR_3 >> 16);

 return (~VAR_3);
}
