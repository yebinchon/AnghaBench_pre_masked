
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp_procs {int dummy; } ;
struct interp {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct interp*,char*) ;
 int FUNC_4 (struct interp*) ;
 struct interp* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 () ;
 int VAR_4 ;
 int FUNC_9 () ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int) ;

enum mi_cmd_result
FUNC_16 (char *VAR_8, char **VAR_9, int VAR_10)
{
  struct interp *VAR_11;
  enum mi_cmd_result VAR_12 = VAR_1;
  int VAR_13;
  struct interp_procs *VAR_14;

  if (VAR_10 < 2)
    {
      FUNC_13 (&VAR_3,
   "mi_cmd_interpreter_exec: Usage: -interpreter-exec interp command");
      return VAR_2;
    }

  VAR_11 = FUNC_5 (VAR_9[0]);
  if (VAR_11 == ((void*)0))
    {
      FUNC_13 (&VAR_3,
   "mi_cmd_interpreter_exec: could not find interpreter \"%s\"",
   VAR_9[0]);
      return VAR_2;
    }

  if (!FUNC_4 (VAR_11))
    {
      FUNC_13 (&VAR_3,
   "mi_cmd_interpreter_exec: interpreter \"%s\" does not support command execution",
   VAR_9[0]);
      return VAR_2;
    }





  FUNC_8 ();



  for (VAR_13 = 1; VAR_13 < VAR_10; VAR_13++)
    {
      char *VAR_15 = ((void*)0);


      if (FUNC_12 () && (FUNC_10 (VAR_9[0], "console") == 0))
 {
   int VAR_16 = FUNC_11 (VAR_9[VAR_13]);
   VAR_15 = FUNC_15 (VAR_16 + 2);
   FUNC_6 (VAR_15, VAR_9[VAR_13], VAR_16);
   VAR_15[VAR_16] = '&';
   VAR_15[VAR_16 + 1] = '\0';
 }






      VAR_6 = 1;
      if (FUNC_3 (VAR_11, VAR_9[VAR_13]) < 0)
 {
   FUNC_7 ();
   VAR_12 = VAR_2;
   break;
 }
      FUNC_14 (VAR_15);
      FUNC_1 (VAR_0);
      VAR_6 = 0;
    }

  FUNC_9 ();






  if (FUNC_12 () && VAR_7)
    {
      FUNC_2 ("^running\n", VAR_5);
      FUNC_0 (VAR_4, ((void*)0));
    }

  return VAR_12;
}
