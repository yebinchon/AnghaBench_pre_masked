
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef enum print_values { ____Placeholder_print_values } print_values ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct frame_info* FUNC_1 () ;
 int FUNC_2 (int,int,struct frame_info*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

enum mi_cmd_result
FUNC_4 (char *VAR_4, char **VAR_5, int VAR_6)
{
  struct frame_info *VAR_7;
  enum print_values VAR_8;

  if (VAR_6 != 1)
    FUNC_0 ("mi_cmd_stack_list_locals: Usage: PRINT_VALUES");

   VAR_7 = FUNC_1 ();

   if (FUNC_3 (VAR_5[0], "0") == 0
       || FUNC_3 (VAR_5[0], "--no-values") == 0)
     VAR_8 = VAR_2;
   else if (FUNC_3 (VAR_5[0], "1") == 0
     || FUNC_3 (VAR_5[0], "--all-values") == 0)
     VAR_8 = VAR_1;
   else if (FUNC_3 (VAR_5[0], "2") == 0
     || FUNC_3 (VAR_5[0], "--simple-values") == 0)
     VAR_8 = VAR_3;
   else
     FUNC_0 ("Unknown value for PRINT_VALUES: must be: 0 or \"--no-values\", 1 or \"--all-values\", 2 or \"--simple-values\"");
  FUNC_2 (1, VAR_8, VAR_7);
  return VAR_0;
}
