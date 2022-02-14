
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

const char *
FUNC_2 (int VAR_2)
{
  const char *VAR_3;
  static char VAR_4[32];

  if (VAR_1 == ((void*)0))
    {
      FUNC_0 ();
    }

  if ((VAR_2 < 0) || (VAR_2 >= VAR_0))
    {

      VAR_3 = ((void*)0);
    }
  else if ((VAR_1 == ((void*)0)) || (VAR_1[VAR_2] == ((void*)0)))
    {

      FUNC_1 (VAR_4, "Signal %d", VAR_2);
      VAR_3 = (const char *) VAR_4;
    }
  else
    {

      VAR_3 = VAR_1[VAR_2];
    }

  return (VAR_3);
}
