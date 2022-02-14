
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct expression {TYPE_2__* language_defn; } ;
struct TYPE_4__ {TYPE_1__* la_exp_desc; } ;
struct TYPE_3__ {int (* dump_subexp_body ) (struct expression*,struct ui_file*,int) ;} ;


 int FUNC_0 (struct expression*,struct ui_file*,int) ;

__attribute__((used)) static int
FUNC_1 (struct expression *VAR_0, struct ui_file *VAR_1, int VAR_2)
{
  return VAR_0->language_defn->la_exp_desc->dump_subexp_body (VAR_0, VAR_1, VAR_2);
}
