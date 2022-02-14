
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; char* msg; } ;


 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int ** VAR_2 ;
 int VAR_3 ;

char *
FUNC_2 (int VAR_4)
{
  const char *VAR_5;
  static char VAR_6[32];



  if (VAR_0 == ((void*)0))
    {
      FUNC_0 ();
    }



  if ((VAR_4 < 0) || (VAR_4 >= VAR_3))
    {






      VAR_5 = ((void*)0);
    }
  else if ((VAR_2 == ((void*)0)) || (VAR_2[VAR_4] == ((void*)0)))
    {

      FUNC_1 (VAR_6, "Error %d", VAR_4);
      VAR_5 = VAR_6;
    }
  else
    {

      VAR_5 = (char *) VAR_2[VAR_4];
    }

  return (VAR_5);
}
