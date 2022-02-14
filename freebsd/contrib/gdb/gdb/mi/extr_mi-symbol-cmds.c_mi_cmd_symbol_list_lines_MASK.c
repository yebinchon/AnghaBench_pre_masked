
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symtab {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
struct TYPE_4__ {int nitems; TYPE_1__* item; } ;
struct TYPE_3__ {int line; int pc; } ;


 TYPE_2__* FUNC_0 (struct symtab*) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*) ;
 struct symtab* FUNC_3 (char*) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 struct cleanup* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_1 ;

enum mi_cmd_result
FUNC_8 (char *VAR_2, char **VAR_3, int VAR_4)
{
  char *VAR_5;
  struct symtab *VAR_6;
  int VAR_7;
  struct cleanup *VAR_8, *VAR_9;

  if (VAR_4 != 1)
    FUNC_2 ("mi_cmd_symbol_list_lines: Usage: SOURCE_FILENAME");

  VAR_5 = VAR_3[0];
  VAR_6 = FUNC_3 (VAR_5);

  if (VAR_6 == ((void*)0))
    FUNC_2 ("mi_cmd_symbol_list_lines: Unknown source file name.");





  VAR_8 = FUNC_4 (VAR_1, "lines");

  if (FUNC_0 (VAR_6) != ((void*)0) && FUNC_0 (VAR_6)->nitems > 0)
    for (VAR_7 = 0; VAR_7 < FUNC_0 (VAR_6)->nitems; VAR_7++)
    {
      VAR_9 = FUNC_5 (VAR_1, ((void*)0));
      FUNC_6 (VAR_1, "pc", FUNC_0 (VAR_6)->item[VAR_7].pc);
      FUNC_7 (VAR_1, "line", FUNC_0 (VAR_6)->item[VAR_7].line);
      FUNC_1 (VAR_9);
    }

  FUNC_1 (VAR_8);

  return VAR_0;
}
