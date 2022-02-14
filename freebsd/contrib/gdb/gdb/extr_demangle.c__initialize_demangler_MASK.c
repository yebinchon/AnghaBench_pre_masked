
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_2__ {scalar_t__ demangling_style; int demangling_style_name; } ;


 int VAR_0 ;
 struct cmd_list_element* FUNC_0 (char*,int ,int *,char const**,char*,int *) ;
 struct cmd_list_element* FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6 (void)
{
  struct cmd_list_element *VAR_9, *VAR_10;
  int VAR_11, VAR_12;


  for (VAR_12 = 0;
       VAR_4[VAR_12].demangling_style != VAR_8;
       VAR_12++)
    ;
  VAR_3 = FUNC_4 (VAR_12 + 1, sizeof (char *));
  for (VAR_11 = 0;
       VAR_4[VAR_11].demangling_style != VAR_8;
       VAR_11++)
    VAR_3[VAR_11] =
      FUNC_5 (VAR_4[VAR_11].demangling_style_name);

  VAR_9 = FUNC_0 ("demangle-style", VAR_1,
     VAR_3,
     (const char **) &VAR_2,
     "Set the current C++ demangling style.\nUse `set demangle-style' without arguments for a list of demangling styles.",

     &VAR_6);
  VAR_10 = FUNC_1 (VAR_9, &VAR_7);
  FUNC_2 (VAR_9, VAR_5);


  FUNC_3 (VAR_0);
}
