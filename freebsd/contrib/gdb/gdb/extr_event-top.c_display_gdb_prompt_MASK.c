
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 char* FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_12 (char *VAR_5)
{
  int VAR_6 = 0;
  char *VAR_7 = FUNC_6 ();



  if (!FUNC_3 ())
    return;

  if (VAR_4 && VAR_3)
    {
      FUNC_8 ();
      return;
    }

  if (!VAR_5)
    {

      VAR_6 = FUNC_11 (FUNC_0 (0)) +
 FUNC_11 (FUNC_1 (0)) +
 FUNC_11 (VAR_7) + 1;

      VAR_5 = (char *) FUNC_2 (VAR_6);


      FUNC_10 (VAR_5, FUNC_0 (0));
      FUNC_9 (VAR_5, VAR_7);


      FUNC_9 (VAR_5, FUNC_1 (0));
    }

  if (VAR_0)
    {
      FUNC_8 ();
      FUNC_7 (VAR_5, VAR_2);
    }

  else if (VAR_5)
    {



      FUNC_4 (VAR_5, VAR_1);
      FUNC_5 (VAR_1);
    }
}
