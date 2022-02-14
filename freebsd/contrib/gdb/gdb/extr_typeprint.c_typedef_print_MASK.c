
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct TYPE_2__ {int la_language; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ui_file*,char*,...) ;




 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct type*,char*,struct ui_file*,int ) ;

void
FUNC_9 (struct type *VAR_1, struct symbol *VAR_2, struct ui_file *VAR_3)
{
  FUNC_0 (VAR_1);
  switch (VAR_0->la_language)
    {
    default:
      FUNC_5 ("Language not supported.");
    }
  FUNC_6 (VAR_3, ";\n");
}
