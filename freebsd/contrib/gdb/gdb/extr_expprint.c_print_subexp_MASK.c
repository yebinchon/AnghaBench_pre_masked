
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct expression {TYPE_2__* language_defn; } ;
typedef enum precedence { ____Placeholder_precedence } precedence ;
struct TYPE_4__ {TYPE_1__* la_exp_desc; } ;
struct TYPE_3__ {int (* print_subexp ) (struct expression*,int*,struct ui_file*,int) ;} ;


 int FUNC_0 (struct expression*,int*,struct ui_file*,int) ;

void
FUNC_1 (struct expression *VAR_0, int *VAR_1,
       struct ui_file *VAR_2, enum precedence VAR_3)
{
  VAR_0->language_defn->la_exp_desc->print_subexp (VAR_0, VAR_1, VAR_2, VAR_3);
}
