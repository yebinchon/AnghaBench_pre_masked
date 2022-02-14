
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2 (char *VAR_4,
   int VAR_5,
   int VAR_6)
{
  switch (VAR_6)
    {
    case 0:
      break;
    case 1:
      if (VAR_5 != -1)
 FUNC_0 ();
      break;
    case 1 << 1:
    case 1 << 2:

      break;
    default:
      FUNC_0 ();
    }

  if (VAR_5 >= 0)
    VAR_1 = VAR_5;
  else if (VAR_5 == -1 && VAR_4 && !*VAR_4 && (VAR_6 & (1 << 2)))
    {
      VAR_0 = VAR_2;
      VAR_1 = VAR_3;
      VAR_4 = ((void*)0);
    }

  if (VAR_4
      && (VAR_0 == ((void*)0)
   || FUNC_1 (VAR_0, VAR_4)))
    {
      VAR_0 = VAR_4;
      return 1;
    }
  else
    return 0;
}
