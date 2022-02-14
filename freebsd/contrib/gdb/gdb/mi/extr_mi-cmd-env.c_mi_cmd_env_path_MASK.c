
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
 int FUNC_2 (char*,char**) ;
 char* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,int,char**,struct mi_opt*,int*,char**) ;
 int FUNC_5 (int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

enum mi_cmd_result
FUNC_10 (char *VAR_5, char **VAR_6, int VAR_7)
{
  char *VAR_8;
  char *VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12;
  char *VAR_13;
  enum opt
    {
      RESET_OPT
    };
  static struct mi_opt VAR_14[] =
  {
    {"r", RESET_OPT, 0},
    0
  };

  FUNC_0 ();

  if (FUNC_5 (VAR_4) < 2)
    {
      for (VAR_12 = VAR_7 - 1; VAR_12 >= 0; --VAR_12)
 FUNC_1 ("path", VAR_6[VAR_12]);
      return VAR_0;
    }


  while (1)
    {
      int VAR_15 = FUNC_4 ("mi_cmd_env_path", VAR_7, VAR_6, VAR_14,
                           &VAR_11, &VAR_13);
      if (VAR_15 < 0)
        break;
      switch ((enum opt) VAR_15)
        {
        case RESET_OPT:
          VAR_10 = 1;
          break;
        }
    }
  VAR_6 += VAR_11;
  VAR_7 -= VAR_11;


  if (VAR_10)
    {

      VAR_8 = FUNC_9 (VAR_2);
    }
  else
    {

      VAR_9 = FUNC_3 (VAR_1, VAR_3);


      if (!VAR_9)
        VAR_9 = "";
      VAR_8 = FUNC_9 (VAR_9);
    }

  for (VAR_12 = VAR_7 - 1; VAR_12 >= 0; --VAR_12)
    FUNC_2 (VAR_6[VAR_12], &VAR_8);

  FUNC_6 (VAR_1, VAR_3, VAR_8);
  FUNC_8 (VAR_8);
  VAR_9 = FUNC_3 (VAR_1, VAR_3);
  FUNC_7 (VAR_4, "path", VAR_9);

  return VAR_0;
}
