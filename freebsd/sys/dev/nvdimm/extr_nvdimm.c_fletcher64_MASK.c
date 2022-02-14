
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static uint64_t
FUNC_0(const void *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3, VAR_4;
 const uint32_t *VAR_5;

 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = (const uint32_t *)VAR_0;
 VAR_1 = VAR_1 / sizeof(uint32_t);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 += VAR_5[VAR_2];
  VAR_4 += VAR_3;
 }
 return ((uint64_t)VAR_4 << 32 | VAR_3);
}
