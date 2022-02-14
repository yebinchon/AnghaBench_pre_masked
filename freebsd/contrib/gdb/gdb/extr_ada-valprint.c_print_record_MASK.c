
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct ui_file*,char*) ;
 scalar_t__ FUNC_2 (struct type*,char*,struct ui_file*,int,int,int,int ,struct type*,char*) ;
 int FUNC_3 (int,struct ui_file*) ;

__attribute__((used)) static void
FUNC_4 (struct type *VAR_0, char *VAR_1, struct ui_file *VAR_2,
       int VAR_3, int VAR_4, enum val_prettyprint VAR_5)
{
  FUNC_0 (VAR_0);

  FUNC_1 (VAR_2, "(");

  if (FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     0, VAR_0, VAR_1) != 0 && VAR_5)
    {
      FUNC_1 (VAR_2, "\n");
      FUNC_3 (2 * VAR_4, VAR_2);
    }

  FUNC_1 (VAR_2, ")");
}
