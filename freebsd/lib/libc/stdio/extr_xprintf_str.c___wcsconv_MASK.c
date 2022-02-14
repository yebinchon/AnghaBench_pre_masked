
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int mbstate_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 size_t FUNC_2 (char*,int ,int *) ;
 size_t FUNC_3 (char*,int const**,size_t,int *) ;

__attribute__((used)) static char *
FUNC_4(wchar_t *VAR_1, int VAR_2)
{
 static const mbstate_t VAR_3;
 mbstate_t VAR_4;
 char VAR_5[VAR_0];
 wchar_t *VAR_6;
 char *VAR_7;
 size_t VAR_8, VAR_9;


 if (VAR_2 < 0) {
  VAR_6 = VAR_1;
  VAR_4 = VAR_3;
  VAR_9 = FUNC_3(((void*)0), (const wchar_t **)&VAR_6, 0, &VAR_4);
  if (VAR_9 == (size_t)-1)
   return (((void*)0));
 } else {





  if (VAR_2 < 128)
   VAR_9 = VAR_2;
  else {
   VAR_9 = 0;
   VAR_6 = VAR_1;
   VAR_4 = VAR_3;
   for (;;) {
    VAR_8 = FUNC_2(VAR_5, *VAR_6++, &VAR_4);
    if (VAR_8 == 0 || VAR_8 == (size_t)-1 ||
        (int)(VAR_9 + VAR_8) > VAR_2)
     break;
    VAR_9 += VAR_8;
   }
  }
 }
 if ((VAR_7 = FUNC_1(VAR_9 + 1)) == ((void*)0))
  return (((void*)0));


 VAR_6 = VAR_1;
 VAR_4 = VAR_3;
 if ((VAR_9 = FUNC_3(VAR_7, (const wchar_t **)&VAR_6,
     VAR_9, &VAR_4)) == (size_t)-1) {
  FUNC_0(VAR_7);
  return (((void*)0));
 }
 VAR_7[VAR_9] = '\0';
 return (VAR_7);
}
