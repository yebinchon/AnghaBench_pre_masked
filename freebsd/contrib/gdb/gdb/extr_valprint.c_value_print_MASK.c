
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;


 int FUNC_0 (struct value*,struct ui_file*,int,int) ;
 int FUNC_1 (struct value*,struct ui_file*) ;

int
FUNC_2 (struct value *VAR_0, struct ui_file *VAR_1, int VAR_2,
      enum val_prettyprint VAR_3)
{
  if (!FUNC_1 (VAR_0, VAR_1))
    return 0;

  return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);
}
