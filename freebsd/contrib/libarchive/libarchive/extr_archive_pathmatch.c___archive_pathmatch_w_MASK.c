
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;
 int* FUNC_1 (int const*,int) ;

int
FUNC_2(const wchar_t *VAR_1, const wchar_t *VAR_2, int VAR_3)
{

 if (VAR_1 == ((void*)0) || *VAR_1 == L'\0')
  return (VAR_2 == ((void*)0) || *VAR_2 == L'\0');


 if (*VAR_1 == L'^') {
  ++VAR_1;
  VAR_3 &= ~VAR_0;
 }

 if (*VAR_1 == L'/' && *VAR_2 != L'/')
  return (0);


 if (*VAR_1 == L'*' || *VAR_1 == L'/') {
  while (*VAR_1 == L'/')
   ++VAR_1;
  while (*VAR_2 == L'/')
   ++VAR_2;
  return (FUNC_0(VAR_1, VAR_2, VAR_3));
 }


 if (VAR_3 & VAR_0) {
  for ( ; VAR_2 != ((void*)0); VAR_2 = FUNC_1(VAR_2, L'/')) {
   if (*VAR_2 == L'/')
    VAR_2++;
   if (FUNC_0(VAR_1, VAR_2, VAR_3))
    return (1);
  }
  return (0);
 }


 return (FUNC_0(VAR_1, VAR_2, VAR_3));
}
