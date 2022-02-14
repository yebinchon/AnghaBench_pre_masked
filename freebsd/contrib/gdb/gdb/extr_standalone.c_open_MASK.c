
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

FUNC_2 (char *VAR_9, int VAR_10)
{
  char *VAR_11;

  if (VAR_10)
    {
      VAR_2 = VAR_1;
      return -1;
    }

  if (VAR_7)
    {
      VAR_2 = VAR_0;
      return -1;
    }

  for (VAR_11 = VAR_3; *(int *) VAR_11; VAR_11 += *(int *) VAR_11)
    {
      if (!FUNC_0 (VAR_11 + 4, VAR_9))
 {
   VAR_4 = VAR_11 + 4 + FUNC_1 (VAR_11 + 4) + 1;
   VAR_4 = (char *) (((int) VAR_4 + 3) & (-4));
   VAR_7 = VAR_4;
   VAR_8 = VAR_11 + *(int *) VAR_11 - VAR_7;
   VAR_6 = VAR_8;
   return VAR_5;
 }
    }
  return 0;
}
