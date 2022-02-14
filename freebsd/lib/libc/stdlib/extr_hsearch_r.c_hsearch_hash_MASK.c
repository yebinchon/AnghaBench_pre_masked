
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t
FUNC_2(size_t VAR_1, const char *VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_1;
 while (*VAR_2 != '\0') {
  VAR_3 ^= (uint8_t)*VAR_2++;
  if (sizeof(size_t) * VAR_0 <= 32)
   VAR_3 *= FUNC_0(16777619);
  else
   VAR_3 *= FUNC_1(1099511628211);
 }
 return (VAR_3);
}
