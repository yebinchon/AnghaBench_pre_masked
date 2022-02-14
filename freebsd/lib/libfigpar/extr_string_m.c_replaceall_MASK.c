
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,size_t) ;

int
FUNC_5(char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 uint32_t VAR_10 = 0;

 VAR_0 = 0;


 if (VAR_1 == ((void*)0))
  return (0);
 if (VAR_2 == ((void*)0))
  return (FUNC_3(VAR_1));


 VAR_9 = FUNC_3(VAR_1);
 VAR_7 = FUNC_3(VAR_2);
 VAR_8 = VAR_3 ? FUNC_3(VAR_3) : 0;


 if (VAR_9 == 0 || VAR_7 == 0 || VAR_9 < VAR_7)
  return (VAR_9);


 if (VAR_8 > VAR_7) {
  VAR_6 = FUNC_1(VAR_9 + 1);
  if (VAR_6 == ((void*)0))
   return (-1);
  FUNC_2(VAR_6, VAR_1, VAR_9 + 1);
 } else
  VAR_6 = VAR_1;


 VAR_4 = VAR_1; VAR_5 = VAR_6;

 while (*VAR_5 != '\0') {
  if (FUNC_4(VAR_5, VAR_2, VAR_7) == 0) {

   for (VAR_10 = 0; VAR_3 && VAR_3[VAR_10]; VAR_10++)
    *VAR_4++ = VAR_3[VAR_10];
   VAR_5 += VAR_7;
  } else
   *VAR_4++ = *VAR_5++;
 }


 *VAR_4 = '\0';


 if (VAR_6 != VAR_1)
  FUNC_0(VAR_6);


 return (FUNC_3(VAR_1));
}
