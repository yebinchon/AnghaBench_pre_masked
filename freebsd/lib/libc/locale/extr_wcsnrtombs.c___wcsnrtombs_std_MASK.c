
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t (* wcrtomb_pfn_t ) (char*,int const,int *) ;
typedef int wchar_t ;
typedef int mbstate_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;

size_t
FUNC_1(char * __restrict VAR_2, const wchar_t ** __restrict VAR_3,
    size_t VAR_4, size_t VAR_5, mbstate_t * __restrict VAR_6,
    wcrtomb_pfn_t VAR_7)
{
 mbstate_t VAR_8;
 char VAR_9[VAR_1];
 const wchar_t *VAR_10;
 size_t VAR_11;
 size_t VAR_12;

 VAR_10 = *VAR_3;
 VAR_11 = 0;

 if (VAR_2 == ((void*)0)) {
  while (VAR_4-- > 0) {
   if ((VAR_12 = VAR_7(VAR_9, *VAR_10, VAR_6)) == (size_t)-1)

    return ((size_t)-1);
   else if (*VAR_10 == L'\0')
    return (VAR_11 + VAR_12 - 1);
   VAR_10++;
   VAR_11 += VAR_12;
  }
  return (VAR_11);
 }

 while (VAR_5 > 0 && VAR_4-- > 0) {
  if (VAR_5 > (size_t)VAR_0) {

   if ((VAR_12 = VAR_7(VAR_2, *VAR_10, VAR_6)) == (size_t)-1) {
    *VAR_3 = VAR_10;
    return ((size_t)-1);
   }
  } else {







   VAR_8 = *VAR_6;
   if ((VAR_12 = VAR_7(VAR_9, *VAR_10, VAR_6)) == (size_t)-1) {
    *VAR_3 = VAR_10;
    return ((size_t)-1);
   }
   if (VAR_12 > (int)VAR_5) {

    *VAR_6 = VAR_8;
    break;
   }
   FUNC_0(VAR_2, VAR_9, VAR_12);
  }
  if (*VAR_10 == L'\0') {
   *VAR_3 = ((void*)0);
   return (VAR_11 + VAR_12 - 1);
  }
  VAR_10++;
  VAR_2 += VAR_12;
  VAR_5 -= VAR_12;
  VAR_11 += VAR_12;
 }
 *VAR_3 = VAR_10;
 return (VAR_11);
}
