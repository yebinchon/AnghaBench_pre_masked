
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_opt {char* member_0; int member_1; int member_2; } ;
typedef enum wp_type { ____Placeholder_wp_type } wp_type ;
typedef enum opt { ____Placeholder_opt } opt ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;



 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char**,struct mi_opt*,int*,char**) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

enum mi_cmd_result
FUNC_5 (char *VAR_2, char **VAR_3, int VAR_4)
{
  char *VAR_5 = ((void*)0);
  enum wp_type VAR_6 = 128;
  enum opt
    {
      READ_OPT, ACCESS_OPT
    };
  static struct mi_opt VAR_7[] =
  {
    {"r", READ_OPT, 0},
    {"a", ACCESS_OPT, 0},
    0
  };


  int VAR_8 = 0;
  char *VAR_9;
  while (1)
    {
      int VAR_10 = FUNC_2 ("mi_cmd_break_watch", VAR_4, VAR_3, VAR_7, &VAR_8, &VAR_9);
      if (VAR_10 < 0)
 break;
      switch ((enum opt) VAR_10)
 {
 case READ_OPT:
   VAR_6 = 129;
   break;
 case ACCESS_OPT:
   VAR_6 = 130;
   break;
 }
    }
  if (VAR_8 >= VAR_4)
    FUNC_1 ("mi_cmd_break_watch: Missing <expression>");
  if (VAR_8 < VAR_4 - 1)
    FUNC_1 ("mi_cmd_break_watch: Garbage following <expression>");
  VAR_5 = VAR_3[VAR_8];


  switch (VAR_6)
    {
    case 128:
      FUNC_4 (VAR_5, VAR_0);
      break;
    case 129:
      FUNC_3 (VAR_5, VAR_0);
      break;
    case 130:
      FUNC_0 (VAR_5, VAR_0);
      break;
    default:
      FUNC_1 ("mi_cmd_break_watch: Unknown watchpoint type.");
    }
  return VAR_1;
}
