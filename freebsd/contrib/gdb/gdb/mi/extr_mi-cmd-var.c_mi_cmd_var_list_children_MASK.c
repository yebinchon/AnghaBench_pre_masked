
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum print_values { ____Placeholder_print_values } print_values ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 struct cleanup* FUNC_2 (int ,char*) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_8 (struct varobj*) ;
 struct varobj* FUNC_9 (char*) ;
 int FUNC_10 (struct varobj*) ;
 char* FUNC_11 (struct varobj*) ;
 char* FUNC_12 (struct varobj*) ;
 char* FUNC_13 (struct varobj*) ;
 int FUNC_14 (struct varobj*,struct varobj***) ;
 int FUNC_15 (struct varobj**) ;

enum mi_cmd_result
FUNC_16 (char *VAR_4, char **VAR_5, int VAR_6)
{
  struct varobj *VAR_7;
  struct varobj **VAR_8;
  struct varobj **VAR_9;
  struct cleanup *VAR_10;
  int VAR_11;
  char *VAR_12;
  enum print_values VAR_13;

  if (VAR_6 != 1 && VAR_6 != 2)
    FUNC_1 ("mi_cmd_var_list_children: Usage: [PRINT_VALUES] NAME");


  if (VAR_6 == 1) VAR_7 = FUNC_9 (VAR_5[0]);
  else VAR_7 = FUNC_9 (VAR_5[1]);
  if (VAR_7 == ((void*)0))
    FUNC_1 ("Variable object not found");

  VAR_11 = FUNC_14 (VAR_7, &VAR_8);
  FUNC_6 (VAR_3, "numchild", VAR_11);
  if (VAR_6 == 2)
    if (FUNC_5 (VAR_5[0], "0") == 0
 || FUNC_5 (VAR_5[0], "--no-values") == 0)
      VAR_13 = VAR_2;
    else if (FUNC_5 (VAR_5[0], "1") == 0
      || FUNC_5 (VAR_5[0], "--all-values") == 0)
      VAR_13 = VAR_1;
    else
     FUNC_1 ("Unknown value for PRINT_VALUES: must be: 0 or \"--no-values\", 1 or \"--all-values\"");
  else VAR_13 = VAR_2;

  if (VAR_11 <= 0)
    return VAR_0;

  if (FUNC_4 (VAR_3) == 1)
    VAR_10 = FUNC_3 (VAR_3, "children");
  else
    VAR_10 = FUNC_2 (VAR_3, "children");
  VAR_9 = VAR_8;
  while (*VAR_9 != ((void*)0))
    {
      struct cleanup *VAR_14;
      VAR_14 = FUNC_3 (VAR_3, "child");
      FUNC_7 (VAR_3, "name", FUNC_11 (*VAR_9));
      FUNC_7 (VAR_3, "exp", FUNC_8 (*VAR_9));
      FUNC_6 (VAR_3, "numchild", FUNC_10 (*VAR_9));
      if (VAR_13)
 FUNC_7 (VAR_3, "value", FUNC_13 (*VAR_9));
      VAR_12 = FUNC_12 (*VAR_9);

      if (VAR_12)
 FUNC_7 (VAR_3, "type", FUNC_12 (*VAR_9));
      FUNC_0 (VAR_14);
      VAR_9++;
    }
  FUNC_0 (VAR_10);
  FUNC_15 (VAR_8);
  return VAR_0;
}
