
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t *
FUNC_0(wchar_t *VAR_0, wchar_t VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 wchar_t *VAR_4;

 VAR_4 = (wchar_t *)VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  *VAR_4 = VAR_1;
  VAR_4++;
 }
 return VAR_0;
}
