
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int* FUNC_1 (size_t) ;
 size_t FUNC_2 (char const*,int ,int *) ;
 size_t FUNC_3 (int*,char const*,size_t,int *) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static wchar_t *
FUNC_5(char *VAR_2, int VAR_3)
{
 mbstate_t VAR_4;
 wchar_t *VAR_5, *VAR_6;
 const char *VAR_7;
 size_t VAR_8, VAR_9, VAR_10;

 if (VAR_2 == ((void*)0))
  return (((void*)0));





 if (VAR_3 >= 0) {




  VAR_7 = VAR_2;
  VAR_8 = VAR_9 = VAR_10 = 0;
  VAR_4 = VAR_1;
  while (VAR_9 != (size_t)VAR_3) {
   VAR_10 = FUNC_2(VAR_7, VAR_0, &VAR_4);
   if (VAR_10 == 0 || VAR_10 == (size_t)-1 ||
       VAR_10 == (size_t)-2)
    break;
   VAR_7 += VAR_10;
   VAR_9++;
   VAR_8 += VAR_10;
  }
  if (VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2)
   return (((void*)0));
 } else {
  VAR_8 = FUNC_4(VAR_2);
  VAR_10 = 0;
 }






 VAR_5 = FUNC_1((VAR_8 + 1) * sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_6 = VAR_5;
 VAR_7 = VAR_2;
 VAR_4 = VAR_1;
 while (VAR_8 != 0) {
  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8, &VAR_4);
  if (VAR_10 == 0 || VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2)
   break;
  VAR_6++;
  VAR_7 += VAR_10;
  VAR_8 -= VAR_10;
 }
 if (VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2) {
  FUNC_0(VAR_5);
  return (((void*)0));
 }
 *VAR_6 = L'\0';

 return (VAR_5);
}
