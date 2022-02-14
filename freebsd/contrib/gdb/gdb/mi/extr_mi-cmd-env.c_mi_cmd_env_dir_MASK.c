
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_opt {char* member_0; int member_1; int member_2; } ;
typedef enum opt { ____Placeholder_opt } opt ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char**,struct mi_opt*,int*,char**) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;

enum mi_cmd_result
FUNC_10 (char *VAR_3, char **VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7 = 0;
  int VAR_8 = 0;
  char *VAR_9;
  enum opt
    {
      RESET_OPT
    };
  static struct mi_opt VAR_10[] =
  {
    {"r", RESET_OPT, 0},
    0
  };

  FUNC_0 ();

  if (FUNC_7 (VAR_2) < 2)
    {
      for (VAR_6 = VAR_5 - 1; VAR_6 >= 0; --VAR_6)
 FUNC_1 ("dir", VAR_4[VAR_6]);
      return VAR_0;
    }


  while (1)
    {
      int VAR_11 = FUNC_6 ("mi_cmd_env_dir", VAR_5, VAR_4, VAR_10,
                           &VAR_7, &VAR_9);
      if (VAR_11 < 0)
        break;
      switch ((enum opt) VAR_11)
        {
        case RESET_OPT:
          VAR_8 = 1;
          break;
        }
    }
  VAR_4 += VAR_7;
  VAR_5 -= VAR_7;

  if (VAR_8)
    {

      FUNC_9 (VAR_1);
      FUNC_5 ();
    }

  for (VAR_6 = VAR_5 - 1; VAR_6 >= 0; --VAR_6)
    FUNC_2 (VAR_4[VAR_6], &VAR_1);
  FUNC_4 ();

  FUNC_8 (VAR_2, "source-path", VAR_1);
  FUNC_3 ();

  return VAR_0;
}
