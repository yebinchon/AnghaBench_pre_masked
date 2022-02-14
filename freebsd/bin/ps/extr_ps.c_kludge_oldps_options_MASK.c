
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_0, char *VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;





 VAR_4 = ((void*)0);
 if (VAR_0 != ((void*)0)) {
  for (VAR_5 = VAR_1; *VAR_5 != '\0'; VAR_5++) {
   VAR_8 = FUNC_3(VAR_0, *VAR_5);
   if ((VAR_8 != ((void*)0)) && *(VAR_8 + 1) == ':') {
    VAR_4 = VAR_5;
    break;
   }
  }
 }
 if (VAR_4 != ((void*)0) && *VAR_1 == '-')
  return (VAR_1);
 VAR_3 = FUNC_5(VAR_1);
 VAR_5 = VAR_1 + VAR_3 - 1;
 VAR_9 = ((void*)0);
 if (*VAR_5 == 't' && *VAR_1 != '-' && VAR_5 == VAR_4) {
  if (VAR_2 == ((void*)0) || *VAR_2 == '-' || FUNC_0(*VAR_2))
   *VAR_5 = 'T';
 } else if (VAR_4 == ((void*)0)) {






  if (FUNC_0(*VAR_5)) {
   while (VAR_5 >= VAR_1 && (*VAR_5 == ',' || FUNC_0(*VAR_5)))
    --VAR_5;
   VAR_9 = VAR_5 + 1;
  }
 }





 if (*VAR_1 == '-' && VAR_9 == ((void*)0))
  return (VAR_1);





 if ((VAR_6 = VAR_7 = FUNC_1(VAR_3 + 3)) == ((void*)0))
  FUNC_6(1, "malloc failed");

 if (*VAR_1 != '-')
  *VAR_7++ = '-';

 if (VAR_9 == ((void*)0))
  FUNC_4(VAR_7, VAR_1);
 else {




  VAR_3 = VAR_9 - VAR_1;
  FUNC_2(VAR_7, VAR_1, VAR_3);
  VAR_7 += VAR_3;
  *VAR_7++ = 'p';
  FUNC_4(VAR_7, VAR_9);
 }

 return (VAR_6);
}
