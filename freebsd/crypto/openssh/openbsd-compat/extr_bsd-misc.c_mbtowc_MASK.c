
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(wchar_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return 0;
 if (*VAR_3 < 0 || *VAR_3 > 0x7f || VAR_4 < 1) {
  VAR_1 = VAR_0;
  return -1;
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = *VAR_3;
 return 1;
}
