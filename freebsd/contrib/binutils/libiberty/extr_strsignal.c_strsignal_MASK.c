
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 int ** VAR_2 ;

const char *
FUNC_2 (int VAR_3)
{
  const char *VAR_4;
  static char VAR_5[32];



  if (VAR_0 == ((void*)0))
    {
      FUNC_0 ();
    }



  if ((VAR_3 < 0) || (VAR_3 >= VAR_1))
    {

      VAR_4 = ((void*)0);
    }
  else if ((VAR_2 == ((void*)0)) || (VAR_2[VAR_3] == ((void*)0)))
    {

      FUNC_1 (VAR_5, "Signal %d", VAR_3);
      VAR_4 = (const char *) VAR_5;
    }
  else
    {

      VAR_4 = (const char *) VAR_2[VAR_3];
    }

  return (VAR_4);
}
