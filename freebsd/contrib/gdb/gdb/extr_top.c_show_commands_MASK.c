
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int ) ;

void
FUNC_3 (char *VAR_3, int VAR_4)
{

  int VAR_5;



  static int VAR_6 = 0;



  int VAR_7;



  VAR_7 = VAR_2;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      if (!FUNC_0 (VAR_1 + VAR_5))
 {
   VAR_7 = VAR_5;
   break;
 }
    }

  if (VAR_3)
    {
      if (VAR_3[0] == '+' && VAR_3[1] == '\0')

 ;
      else

 VAR_6 = (FUNC_1 (VAR_3) - VAR_1) - VAR_0 / 2;
    }

  else
    {
      VAR_6 = VAR_7 - VAR_0;
    }

  if (VAR_6 < 0)
    VAR_6 = 0;



  if (VAR_7 - VAR_6 < VAR_0)
    {
      VAR_6 = VAR_7 - VAR_0;
      if (VAR_6 < 0)
 VAR_6 = 0;
    }

  for (VAR_5 = VAR_6; VAR_5 < VAR_6 + VAR_0 && VAR_5 < VAR_7; VAR_5++)
    {
      FUNC_2 ("%5d  %s\n", VAR_1 + VAR_5,
         (FUNC_0 (VAR_1 + VAR_5))->line);
    }



  VAR_6 += VAR_0;




  if (VAR_4 && VAR_3)
    {
      VAR_3[0] = '+';
      VAR_3[1] = '\0';
    }
}
