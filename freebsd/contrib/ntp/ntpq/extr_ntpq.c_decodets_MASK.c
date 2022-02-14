
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;

int
FUNC_4(
 char *VAR_0,
 l_fp *VAR_1
 )
{
 char *VAR_2;
 char VAR_3[30];
 size_t VAR_4;




 if (*VAR_0 == '0' && (*(VAR_0+1) == 'x' || *(VAR_0+1) == 'X'))
  return FUNC_2(VAR_0+2, VAR_1);




 if (*VAR_0 == '"') {
  VAR_2 = VAR_0 + 1;
  VAR_4 = 0;
  while ('"' != *VAR_2 && '\0' != *VAR_2 &&
         VAR_4 < FUNC_0(VAR_3) - 1)
   VAR_3[VAR_4++] = *VAR_2++;
  VAR_3[VAR_4] = '\0';
  return FUNC_3(VAR_3, VAR_1);
 }





 if ((*VAR_0 >= 'A' && *VAR_0 <= 'F') || (*VAR_0 >= 'a' && *VAR_0 <= 'f'))
  return FUNC_2(VAR_0, VAR_1);





 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 return FUNC_3(VAR_0, VAR_1);
}
