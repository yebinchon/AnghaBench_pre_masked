
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef size_t (* mbrtowc_pfn_t ) (int *,char const*,size_t,int *) ;



size_t
FUNC_0(wchar_t * __restrict VAR_0, const char ** __restrict VAR_1,
    size_t VAR_2, size_t VAR_3, mbstate_t * __restrict VAR_4,
    mbrtowc_pfn_t VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;
 wchar_t VAR_8;
 size_t VAR_9;

 VAR_6 = *VAR_1;
 VAR_7 = 0;

 if (VAR_0 == ((void*)0)) {
  for (;;) {
   if ((VAR_9 = VAR_5(&VAR_8, VAR_6, VAR_2, VAR_4)) == (size_t)-1)

    return ((size_t)-1);
   else if (VAR_9 == 0 || VAR_9 == (size_t)-2)
    return (VAR_7);
   VAR_6 += VAR_9;
   VAR_2 -= VAR_9;
   VAR_7++;
  }

 }

 while (VAR_3-- > 0) {
  if ((VAR_9 = VAR_5(VAR_0, VAR_6, VAR_2, VAR_4)) == (size_t)-1) {
   *VAR_1 = VAR_6;
   return ((size_t)-1);
  } else if (VAR_9 == (size_t)-2) {
   *VAR_1 = VAR_6 + VAR_2;
   return (VAR_7);
  } else if (VAR_9 == 0) {
   *VAR_1 = ((void*)0);
   return (VAR_7);
  }
  VAR_6 += VAR_9;
  VAR_2 -= VAR_9;
  VAR_7++;
  VAR_0++;
 }
 *VAR_1 = VAR_6;
 return (VAR_7);
}
