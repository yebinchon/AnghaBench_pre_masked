
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static __inline int
FUNC_0(void *restrict VAR_0, void *restrict VAR_1, int VAR_2)
{
 uint64_t *VAR_3 = VAR_0;
 uint64_t *VAR_4 = VAR_1;

 for (; VAR_2 > 0; VAR_2 -= 32) {
  *VAR_4++ = *VAR_3++;
  *VAR_4++ = *VAR_3++;
  *VAR_4++ = *VAR_3++;
  *VAR_4++ = *VAR_3++;
 }
 return (0);
}
