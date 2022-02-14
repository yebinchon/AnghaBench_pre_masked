
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;


 char FUNC_0 (uintptr_t) ;

__attribute__((used)) static size_t
FUNC_1(const char *VAR_0, size_t VAR_1)
{
 uint_t VAR_2;

 for (VAR_2 = 0; VAR_2 != VAR_1; VAR_2++) {
  if (FUNC_0((uintptr_t)VAR_0++) == '\0')
   break;
 }

 return (VAR_2);
}
