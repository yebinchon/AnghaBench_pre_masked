
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(const void *VAR_0, size_t VAR_1)
{
 const uint64_t *VAR_2 = VAR_0;
 unsigned int VAR_3;
 uint64_t VAR_4;

 FUNC_0((VAR_1 % sizeof(*VAR_2)) == 0);
 VAR_1 >>= 3;
 if ((VAR_2[0] | VAR_2[VAR_1 >> 1] | VAR_2[VAR_1 - 1]) != 0)
  return (0);
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_4 |= *VAR_2++;
 return (VAR_4 == 0);
}
