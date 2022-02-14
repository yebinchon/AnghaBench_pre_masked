
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* VAR_1 ;
 size_t VAR_2 ;

int
FUNC_1(char *VAR_3, size_t *VAR_4)
{
 size_t VAR_5;

 if (*VAR_4 > VAR_0)
  return (-1);


 for (VAR_5 = 0; VAR_5 < *VAR_4; VAR_5++) {
  VAR_1[VAR_5] = VAR_3[VAR_5];
  if (VAR_3[VAR_5] == '\0')
   return (-1);
  if (VAR_3[VAR_5] == '\n')
   break;
 }

 if (VAR_5 == *VAR_4) {

  VAR_1[0] = '\0';
  VAR_2 = 0;
  if (VAR_5 < VAR_0)
   return (0);
  return (-1);
 }

 VAR_2 = VAR_5 + 1;
 VAR_1[VAR_2] = '\0';
 *VAR_4 -= VAR_2;


 if (*VAR_4 != 0)
  FUNC_0(VAR_3 + VAR_2, VAR_3, *VAR_4);

 return ((int)VAR_2);
}
