
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_1(uint64_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 8) {
  VAR_0[VAR_3 >> 3] ^= FUNC_0((const unsigned char *)VAR_1 + VAR_3);
 }
}
