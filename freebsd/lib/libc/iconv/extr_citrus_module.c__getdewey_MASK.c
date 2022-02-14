
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1[], char *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0, VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (*VAR_2 == '\0')
   break;

  if (*VAR_2 == '.') VAR_2++;
  if (*VAR_2 < '0' || '9' < *VAR_2)
   return (0);

  VAR_1[VAR_4++] = (int)FUNC_0(VAR_2, &VAR_2, 10);
 }

 return (VAR_4);
}
