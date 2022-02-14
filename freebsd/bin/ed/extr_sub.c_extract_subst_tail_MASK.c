
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (long,char*) ;
 int * FUNC_1 () ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_2(int *VAR_5, long *VAR_6)
{
 char VAR_7;

 *VAR_5 = *VAR_6 = 0;
 if ((VAR_7 = *VAR_3) == '\n') {
  VAR_4 = 0;
  *VAR_5 = VAR_1;
  return 0;
 } else if (FUNC_1() == ((void*)0))
  return VAR_0;
 else if (*VAR_3 == '\n') {
  *VAR_5 = VAR_1;
  return 0;
 } else if (*VAR_3 == VAR_7)
  VAR_3++;
 if ('1' <= *VAR_3 && *VAR_3 <= '9') {
  FUNC_0(*VAR_6, VAR_3);
  return 0;
 } else if (*VAR_3 == 'g') {
  VAR_3++;
  *VAR_5 = VAR_2;
  return 0;
 }
 return 0;
}
