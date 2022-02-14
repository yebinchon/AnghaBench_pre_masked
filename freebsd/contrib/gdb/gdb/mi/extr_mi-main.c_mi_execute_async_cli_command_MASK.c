
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 char* VAR_3 ;
 struct cleanup* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 () ;
 int VAR_6 ;
 int FUNC_13 (char**,char*,char*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (scalar_t__) ;

enum mi_cmd_result
FUNC_15 (char *VAR_8, char *VAR_9, int VAR_10)
{
  struct cleanup *VAR_11;
  char *VAR_12;
  char *VAR_13;

  if (FUNC_12 ())
    {
      VAR_13 = (char *) FUNC_14 (FUNC_11 (VAR_9) + 2);
      FUNC_6 (VAR_2, VAR_13);
      FUNC_10 (VAR_13, VAR_9);
      FUNC_9 (VAR_13, "&");
      FUNC_13 (&VAR_12, "%s %s", VAR_8, VAR_13);
      FUNC_6 (VAR_2, VAR_12);
      FUNC_0 (VAR_4, ((void*)0));
      VAR_11 = ((void*)0);
    }
  else
    {
      FUNC_13 (&VAR_12, "%s %s", VAR_8, VAR_9);
      VAR_11 = FUNC_5 (VAR_7, VAR_12);
    }

  if (!FUNC_12 ())
    {



      if (VAR_3)
 FUNC_3 (VAR_3, VAR_5);
      FUNC_3 ("^running\n", VAR_5);
      FUNC_3 ("(gdb) \n", VAR_5);
      FUNC_4 (VAR_5);
    }
  else
    {




      if (VAR_3)
 FUNC_3 (VAR_3, VAR_5);
      FUNC_3 ("^running\n", VAR_5);
    }

  FUNC_2 ( VAR_12, 0 );

  if (!FUNC_12 ())
    {


      FUNC_1 (VAR_11);


      if (VAR_3)
 FUNC_3 (VAR_3, VAR_5);
      FUNC_3 ("*stopped", VAR_5);
      FUNC_7 (VAR_6, VAR_5);
      FUNC_8 (VAR_6);
      FUNC_3 ("\n", VAR_5);
      return VAR_1;
    }
  return VAR_0;
}
