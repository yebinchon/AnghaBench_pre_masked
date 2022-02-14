
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct mi_opt {char* member_0; int member_1; int member_2; } ;
typedef enum opt { ____Placeholder_opt } opt ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct symtab*,int,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int ,char*,int,int,int,int ,int ) ;
 struct symtab* FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char**,struct mi_opt*,int*,char**) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 char* FUNC_8 (char*) ;

enum mi_cmd_result
FUNC_9 (char *VAR_2, char **VAR_3, int VAR_4)
{
  enum mi_cmd_result VAR_5;
  CORE_ADDR VAR_6;

  int VAR_7;
  struct symtab *VAR_8;


  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;


  char *VAR_14 = ((void*)0);
  int VAR_15 = -1;
  int VAR_16 = -1;
  CORE_ADDR VAR_17 = 0;
  CORE_ADDR VAR_18 = 0;


  int VAR_19 = 0;
  char *VAR_20;
  enum opt
  {
    FILE_OPT, LINE_OPT, NUM_OPT, START_OPT, END_OPT
  };
  static struct mi_opt VAR_21[] = {
    {"f", FILE_OPT, 1},
    {"l", LINE_OPT, 1},
    {"n", NUM_OPT, 1},
    {"s", START_OPT, 1},
    {"e", END_OPT, 1},
    0
  };



  while (1)
    {
      int VAR_22 = FUNC_6 ("mi_cmd_disassemble", VAR_4, VAR_3, VAR_21,
      &VAR_19, &VAR_20);
      if (VAR_22 < 0)
 break;
      switch ((enum opt) VAR_22)
 {
 case FILE_OPT:
   VAR_14 = FUNC_8 (VAR_20);
   VAR_9 = 1;
   break;
 case LINE_OPT:
   VAR_15 = FUNC_0 (VAR_20);
   VAR_10 = 1;
   break;
 case NUM_OPT:
   VAR_16 = FUNC_0 (VAR_20);
   VAR_11 = 1;
   break;
 case START_OPT:
   VAR_17 = FUNC_7 (VAR_20);
   VAR_12 = 1;
   break;
 case END_OPT:
   VAR_18 = FUNC_7 (VAR_20);
   VAR_13 = 1;
   break;
 }
    }
  VAR_3 += VAR_19;
  VAR_4 -= VAR_19;




  if (!((VAR_10 && VAR_9 && VAR_11 && !VAR_12 && !VAR_13)
 || (VAR_10 && VAR_9 && !VAR_11 && !VAR_12 && !VAR_13)
 || (!VAR_10 && !VAR_9 && !VAR_11 && VAR_12 && VAR_13)))
    FUNC_1
      ("mi_cmd_disassemble: Usage: ( [-f filename -l linenum [-n howmany]] | [-s startaddr -e endaddr]) [--] mixed_mode.");

  if (VAR_4 != 1)
    FUNC_1
      ("mi_cmd_disassemble: Usage: [-f filename -l linenum [-n howmany]] [-s startaddr -e endaddr] [--] mixed_mode.");

  VAR_7 = FUNC_0 (VAR_3[0]);
  if ((VAR_7 != 0) && (VAR_7 != 1))
    FUNC_1 ("mi_cmd_disassemble: Mixed_mode argument must be 0 or 1.");





  if (VAR_10 && VAR_9)
    {
      VAR_8 = FUNC_5 (VAR_14);
      if (VAR_8 == ((void*)0))
 FUNC_1 ("mi_cmd_disassemble: Invalid filename.");
      if (!FUNC_2 (VAR_8, VAR_15, &VAR_6))
 FUNC_1 ("mi_cmd_disassemble: Invalid line number");
      if (FUNC_3 (VAR_6, ((void*)0), &VAR_17, &VAR_18) == 0)
 FUNC_1 ("mi_cmd_disassemble: No function contains specified address");
    }

  FUNC_4 (VAR_1,
       VAR_14,
     VAR_15,
     VAR_7, VAR_16, VAR_17, VAR_18);

  return VAR_0;
}
