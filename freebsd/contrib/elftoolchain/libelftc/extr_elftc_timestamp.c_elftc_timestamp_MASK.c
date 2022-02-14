
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long time_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 long long FUNC_1 (char*,char**,int) ;
 long long FUNC_2 (int *) ;

int
FUNC_3(time_t *VAR_3)
{
 long long VAR_4;
 char *VAR_5, *VAR_6;

 if ((VAR_5 = FUNC_0("SOURCE_DATE_EPOCH")) != ((void*)0)) {
  VAR_2 = 0;
  VAR_4 = FUNC_1(VAR_5, &VAR_6, 10);
  if (*VAR_6 != '\0')
   VAR_2 = VAR_0;
  if (VAR_4 < 0)
   VAR_2 = VAR_1;
  if (VAR_2 != 0)
   return (-1);
  *VAR_3 = VAR_4;
  return (0);
 }
 *VAR_3 = FUNC_2(((void*)0));
 return (0);
}
