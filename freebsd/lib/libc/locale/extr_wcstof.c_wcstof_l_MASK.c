
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const,int ) ;
 char* FUNC_3 (size_t) ;
 float FUNC_4 (char*,char**,int ) ;
 size_t FUNC_5 (char*,int const**,size_t,int *,int ) ;

float
FUNC_6(const wchar_t * __restrict VAR_0, wchar_t ** __restrict VAR_1,
  locale_t VAR_2)
{
 static const mbstate_t VAR_3;
 mbstate_t VAR_4;
 float VAR_5;
 char *VAR_6, *VAR_7;
 const wchar_t *VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 FUNC_0(VAR_2);

 VAR_8 = VAR_0;
 VAR_10 = 0;
 while (FUNC_2(*VAR_8, VAR_2)) {
  VAR_8++;
  VAR_10++;
 }

 VAR_4 = VAR_3;
 if ((VAR_9 = FUNC_5(((void*)0), &VAR_8, 0, &VAR_4, VAR_2)) == (size_t)-1) {
  if (VAR_1 != ((void*)0))
   *VAR_1 = (wchar_t *)VAR_0;
  return (0.0);
 }
 if ((VAR_6 = FUNC_3(VAR_9 + 1)) == ((void*)0)) {
  if (VAR_1 != ((void*)0))
   *VAR_1 = (wchar_t *)VAR_0;
  return (0.0);
 }
 VAR_4 = VAR_3;
 FUNC_5(VAR_6, &VAR_8, VAR_9 + 1, &VAR_4, VAR_2);

 VAR_5 = FUNC_4(VAR_6, &VAR_7, VAR_2);

 if (VAR_1 != ((void*)0)) {
  *VAR_1 = (wchar_t *)VAR_0 + (VAR_7 - VAR_6);
  if (VAR_6 != VAR_7)
   *VAR_1 += VAR_10;
 }

 FUNC_1(VAR_6);

 return (VAR_5);
}
