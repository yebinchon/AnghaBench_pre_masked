
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 char* FUNC_0 (char const*,size_t) ;

char * FUNC_1(const u8 *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] == '@' || VAR_0[VAR_2] == '\0')
   break;
 }

 return FUNC_0(VAR_0, VAR_2);
}
