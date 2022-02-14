
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;


 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (int ,int ,int ,int ,struct ui_file*,int,int,int,int) ;
 int FUNC_5 (struct value*,struct ui_file*) ;

int
FUNC_6 (struct value *VAR_0, struct ui_file *VAR_1, int VAR_2,
    int VAR_3, int VAR_4, enum val_prettyprint VAR_5)
{
  if (!FUNC_5 (VAR_0, VAR_1))
    return 0;

  return FUNC_4 (FUNC_3(VAR_0), FUNC_1 (VAR_0),
      FUNC_2 (VAR_0), FUNC_0 (VAR_0),
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
