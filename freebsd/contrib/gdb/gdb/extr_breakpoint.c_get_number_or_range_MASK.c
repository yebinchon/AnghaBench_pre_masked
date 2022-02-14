
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**,char) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4 (char **VAR_0)
{
  static int VAR_1, VAR_2;
  static char *VAR_3;
  static int VAR_4 = 0;

  if (**VAR_0 != '-')
    {


      VAR_1 = FUNC_2 (VAR_0, '-');
      if (**VAR_0 == '-')
 {
   char **VAR_5;





   VAR_5 = &VAR_3;
   VAR_3 = *VAR_0 + 1;
   while (FUNC_3 ((int) *VAR_3))
     VAR_3++;
   VAR_2 = FUNC_1 (VAR_5);
   if (VAR_2 < VAR_1)
     {
       FUNC_0 ("inverted range");
     }
   else if (VAR_2 == VAR_1)
     {



       *VAR_0 = VAR_3;
     }
   else
     VAR_4 = 1;
 }
    }
  else if (! VAR_4)
    FUNC_0 ("negative value");
  else
    {






      if (++VAR_1 == VAR_2)
 {

   *VAR_0 = VAR_3;
   VAR_4 = 0;
 }
    }
  return VAR_1;
}
