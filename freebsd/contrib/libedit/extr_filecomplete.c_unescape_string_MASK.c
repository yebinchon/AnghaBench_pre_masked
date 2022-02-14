
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 char* FUNC_0 (size_t,int) ;

__attribute__((used)) static wchar_t *
FUNC_1(const wchar_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = 0;
 wchar_t *VAR_4 = FUNC_0(VAR_1 + 1, sizeof(*VAR_0));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_1 ; VAR_2++) {
  if (VAR_0[VAR_2] == '\\')
   continue;
  VAR_4[VAR_3++] = VAR_0[VAR_2];
 }
 VAR_4[VAR_3] = 0;
 return VAR_4;
}
