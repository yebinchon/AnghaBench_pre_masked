
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ want; } ;
typedef TYPE_1__ _UTF8State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*,int const,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(char * __restrict VAR_4, const wchar_t ** __restrict VAR_5,
    size_t VAR_6, size_t VAR_7, mbstate_t * __restrict VAR_8)
{
 _UTF8State *VAR_9;
 char VAR_10[VAR_2];
 const wchar_t *VAR_11;
 size_t VAR_12;
 size_t VAR_13;

 VAR_9 = (_UTF8State *)VAR_8;

 if (VAR_9->want != 0) {
  VAR_3 = VAR_0;
  return ((size_t)-1);
 }

 VAR_11 = *VAR_5;
 VAR_12 = 0;

 if (VAR_4 == ((void*)0)) {
  while (VAR_6-- > 0) {
   if (0 <= *VAR_11 && *VAR_11 < 0x80)

    VAR_13 = 1;
   else if ((VAR_13 = FUNC_0(VAR_10, *VAR_11, VAR_8)) ==
       (size_t)-1)

    return ((size_t)-1);
   if (*VAR_11 == L'\0')
    return (VAR_12 + VAR_13 - 1);
   VAR_11++;
   VAR_12 += VAR_13;
  }
  return (VAR_12);
 }

 while (VAR_7 > 0 && VAR_6-- > 0) {
  if (0 <= *VAR_11 && *VAR_11 < 0x80) {

   VAR_13 = 1;
   *VAR_4 = *VAR_11;
  } else if (VAR_7 > (size_t)VAR_1) {

   if ((VAR_13 = FUNC_0(VAR_4, *VAR_11, VAR_8)) == (size_t)-1) {
    *VAR_5 = VAR_11;
    return ((size_t)-1);
   }
  } else {



   if ((VAR_13 = FUNC_0(VAR_10, *VAR_11, VAR_8)) == (size_t)-1) {
    *VAR_5 = VAR_11;
    return ((size_t)-1);
   }
   if (VAR_13 > (int)VAR_7)

    break;
   FUNC_1(VAR_4, VAR_10, VAR_13);
  }
  if (*VAR_11 == L'\0') {
   *VAR_5 = ((void*)0);
   return (VAR_12 + VAR_13 - 1);
  }
  VAR_11++;
  VAR_4 += VAR_13;
  VAR_7 -= VAR_13;
  VAR_12 += VAR_13;
 }
 *VAR_5 = VAR_11;
 return (VAR_12);
}
