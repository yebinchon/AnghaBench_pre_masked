
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ want; } ;
typedef TYPE_1__ _UTF8State ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__*,char const*,size_t,int *) ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_1(wchar_t * __restrict VAR_2, const char ** __restrict VAR_3,
    size_t VAR_4, size_t VAR_5, mbstate_t * __restrict VAR_6)
{
 _UTF8State *VAR_7;
 const char *VAR_8;
 size_t VAR_9;
 wchar_t VAR_10;
 size_t VAR_11;

 VAR_7 = (_UTF8State *)VAR_6;

 VAR_8 = *VAR_3;
 VAR_9 = 0;

 if (VAR_2 == ((void*)0)) {





  if (VAR_4 > 0 && VAR_7->want > 0 && (signed char)*VAR_8 > 0) {
   VAR_1 = VAR_0;
   return ((size_t)-1);
  }
  for (;;) {
   if (VAR_4 > 0 && (signed char)*VAR_8 > 0)




    VAR_11 = 1;
   else if ((VAR_11 = FUNC_0(&VAR_10, VAR_8, VAR_4, VAR_6)) ==
       (size_t)-1)

    return ((size_t)-1);
   else if (VAR_11 == 0 || VAR_11 == (size_t)-2)
    return (VAR_9);
   VAR_8 += VAR_11;
   VAR_4 -= VAR_11;
   VAR_9++;
  }

 }






 if (VAR_4 > 0 && VAR_5 > 0 && VAR_7->want > 0 && (signed char)*VAR_8 > 0) {
  VAR_1 = VAR_0;
  return ((size_t)-1);
 }
 while (VAR_5-- > 0) {
  if (VAR_4 > 0 && (signed char)*VAR_8 > 0) {




   *VAR_2 = (wchar_t)*VAR_8;
   VAR_11 = 1;
  } else if ((VAR_11 = FUNC_0(VAR_2, VAR_8, VAR_4, VAR_6)) ==
      (size_t)-1) {
   *VAR_3 = VAR_8;
   return ((size_t)-1);
  } else if (VAR_11 == (size_t)-2) {
   *VAR_3 = VAR_8 + VAR_4;
   return (VAR_9);
  } else if (VAR_11 == 0) {
   *VAR_3 = ((void*)0);
   return (VAR_9);
  }
  VAR_8 += VAR_11;
  VAR_4 -= VAR_11;
  VAR_9++;
  VAR_2++;
 }
 *VAR_3 = VAR_8;
 return (VAR_9);
}
