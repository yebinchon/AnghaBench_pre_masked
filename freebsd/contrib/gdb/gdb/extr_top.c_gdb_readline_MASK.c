
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,int) ;

char *
FUNC_6 (char *VAR_4)
{
  int VAR_5;
  char *VAR_6;
  int VAR_7 = 0;
  int VAR_8 = 80;

  if (VAR_4)
    {



      FUNC_1 (VAR_4, VAR_1);
      FUNC_2 (VAR_1);
    }

  VAR_6 = (char *) FUNC_4 (VAR_8);

  while (1)
    {


      VAR_5 = FUNC_0 (VAR_2 ? VAR_2 : VAR_3);

      if (VAR_5 == VAR_0)
 {
   if (VAR_7 > 0)



     break;
   FUNC_3 (VAR_6);
   return ((void*)0);
 }

      if (VAR_5 == '\n')

 break;
      VAR_6[VAR_7++] = VAR_5;
      while (VAR_7 >= VAR_8)
 {
   VAR_8 *= 2;
   VAR_6 = (char *) FUNC_5 (VAR_6, VAR_8);
 }
    }

  VAR_6[VAR_7++] = '\0';
  return VAR_6;
}
