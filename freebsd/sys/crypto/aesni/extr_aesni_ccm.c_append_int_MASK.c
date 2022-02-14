
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int __m128i ;



__attribute__((used)) static void
FUNC_0(size_t VAR_0, __m128i *VAR_1, size_t VAR_2)
{
 int VAR_3 = sizeof(*VAR_1) - 1;
 uint8_t *VAR_4 = (uint8_t*)VAR_1;

 while (VAR_3 > (sizeof(*VAR_1) - VAR_2)) {
  VAR_4[VAR_3] = VAR_0 & 0xff;
  VAR_3--;
  VAR_0 >>= 8;
 }
}
