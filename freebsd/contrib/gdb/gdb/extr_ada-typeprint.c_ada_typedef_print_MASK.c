
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ui_file*,char*,int ,int ) ;
 int FUNC_3 (struct type*,char*,struct ui_file*,int) ;

void
FUNC_4 (struct type *VAR_0, struct symbol *VAR_1,
     struct ui_file *VAR_2)
{
  FUNC_2 (VAR_2, "type %.*s is ",
      FUNC_1 (FUNC_0 (VAR_1)),
      FUNC_0 (VAR_1));
  FUNC_3 (VAR_0, "", VAR_2, 1);
}
