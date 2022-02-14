
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;



wchar_t *
FUNC_0(wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1, size_t VAR_2)
{
 wchar_t *VAR_3;
 wchar_t *VAR_4;
 const wchar_t *VAR_5;

 VAR_3 = VAR_0;
 while (*VAR_3)
  VAR_3++;
 VAR_4 = VAR_3;
 VAR_5 = VAR_1;
 while (VAR_2 && *VAR_5) {
  *VAR_4++ = *VAR_5++;
  VAR_2--;
 }
 *VAR_4 = '\0';
 return VAR_0;
}
