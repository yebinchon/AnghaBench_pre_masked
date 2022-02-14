
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;

int
FUNC_2 (FILE *VAR_3, int VAR_4)
{
  for (;;)
    {
      if (VAR_4 == ' ' || VAR_4 == '\t')
 VAR_4 = FUNC_0 (VAR_3);
      else if (VAR_4 == '/')
 {
   VAR_4 = FUNC_0 (VAR_3);
   if (VAR_4 != '*')
     {
       FUNC_1 (VAR_4, VAR_3);
       return '/';
     }
   VAR_4 = FUNC_0 (VAR_3);
   for (;;)
     {
       if (VAR_4 == VAR_0)
  return VAR_0;
       else if (VAR_4 != '*')
  {
    if (VAR_4 == '\n')
      VAR_2++, VAR_1++;
    VAR_4 = FUNC_0 (VAR_3);
  }
       else if ((VAR_4 = FUNC_0 (VAR_3)) == '/')
  return FUNC_0 (VAR_3);
     }
 }
      else
 break;
    }
  return VAR_4;
}
