
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t* VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(const char *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0[(VAR_3 ^ *VAR_1++) & 0xFFL] ^ (VAR_3 >> 8);
 }

 return (VAR_3 ^ 0xFFFFFFFF);
}
