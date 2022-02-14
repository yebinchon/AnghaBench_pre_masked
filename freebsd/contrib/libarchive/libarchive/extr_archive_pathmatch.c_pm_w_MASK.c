
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int const*,int const,int) ;
 int* FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(const wchar_t *VAR_1, const wchar_t *VAR_2, int VAR_3)
{
 const wchar_t *VAR_4;




 if (VAR_2[0] == L'.' && VAR_2[1] == L'/')
  VAR_2 = FUNC_2(VAR_2 + 1);
 if (VAR_1[0] == L'.' && VAR_1[1] == L'/')
  VAR_1 = FUNC_2(VAR_1 + 1);

 for (;;) {
  switch (*VAR_1) {
  case L'\0':
   if (VAR_2[0] == L'/') {
    if (VAR_3 & VAR_0)
     return (1);

    VAR_2 = FUNC_2(VAR_2);
   }
   return (*VAR_2 == L'\0');
  case L'?':

   if (*VAR_2 == L'\0')
    return (0);
   break;
  case L'*':

   while (*VAR_1 == L'*')
    ++VAR_1;

   if (*VAR_1 == L'\0')
    return (1);
   while (*VAR_2) {
    if (FUNC_0(VAR_1, VAR_2, VAR_3))
     return (1);
    ++VAR_2;
   }
   return (0);
  case L'[':




   VAR_4 = VAR_1 + 1;
   while (*VAR_4 != L'\0' && *VAR_4 != L']') {
    if (*VAR_4 == L'\\' && VAR_4[1] != L'\0')
     ++VAR_4;
    ++VAR_4;
   }
   if (*VAR_4 == L']') {

    if (!FUNC_1(VAR_1 + 1, VAR_4, *VAR_2, VAR_3))
     return (0);
    VAR_1 = VAR_4;
    break;
   } else

    if (*VAR_1 != *VAR_2)
     return (0);
   break;
  case L'\\':

   if (VAR_1[1] == L'\0') {
    if (*VAR_2 != L'\\')
     return (0);
   } else {
    ++VAR_1;
    if (*VAR_1 != *VAR_2)
     return (0);
   }
   break;
  case L'/':
   if (*VAR_2 != L'/' && *VAR_2 != L'\0')
    return (0);


   VAR_1 = FUNC_2(VAR_1);
   VAR_2 = FUNC_2(VAR_2);
   if (*VAR_1 == L'\0' && (VAR_3 & VAR_0))
    return (1);
   --VAR_1;
   --VAR_2;
   break;
  case L'$':


   if (VAR_1[1] == L'\0' && (VAR_3 & VAR_0)){

    return (*FUNC_2(VAR_2) == L'\0');
   }


  default:
   if (*VAR_1 != *VAR_2)
    return (0);
   break;
  }
  ++VAR_1;
  ++VAR_2;
 }
}
