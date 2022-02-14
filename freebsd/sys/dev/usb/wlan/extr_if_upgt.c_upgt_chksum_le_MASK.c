
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(const uint32_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += sizeof(uint32_t)) {
  VAR_3 = FUNC_0(VAR_3 ^ *VAR_0++);
  VAR_3 = FUNC_0((VAR_3 >> 5) ^ (VAR_3 << 3));
 }

 return (VAR_3);
}
