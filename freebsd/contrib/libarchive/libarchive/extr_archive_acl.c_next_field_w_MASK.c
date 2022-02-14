
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static void
FUNC_0(const wchar_t **VAR_0, const wchar_t **VAR_1,
    const wchar_t **VAR_2, wchar_t *VAR_3)
{

 while (**VAR_0 == L' ' || **VAR_0 == L'\t' || **VAR_0 == L'\n') {
  (*VAR_0)++;
 }
 *VAR_1 = *VAR_0;


 while (**VAR_0 != L'\0' && **VAR_0 != L',' && **VAR_0 != L':' &&
     **VAR_0 != L'\n' && **VAR_0 != L'#') {
  (*VAR_0)++;
 }
 *VAR_3 = **VAR_0;


 if (*VAR_0 == *VAR_1) {
  *VAR_2 = *VAR_0;
 } else {
  *VAR_2 = *VAR_0 - 1;
  while (**VAR_2 == L' ' || **VAR_2 == L'\t' || **VAR_2 == L'\n') {
   (*VAR_2)--;
  }
  (*VAR_2)++;
 }


 if (*VAR_3 == L'#') {
  while (**VAR_0 != L'\0' && **VAR_0 != L',' && **VAR_0 != L'\n') {
   (*VAR_0)++;
  }
  *VAR_3 = **VAR_0;
 }


 if (**VAR_0 != L'\0')
  (*VAR_0)++;
}
