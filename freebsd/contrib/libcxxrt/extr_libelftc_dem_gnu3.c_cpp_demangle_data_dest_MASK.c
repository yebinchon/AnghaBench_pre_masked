
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {int output; int output_tmp; int subst; int tmpl; int class_type; int cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct cpp_demangle_data *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(&VAR_0->cmd);
 FUNC_1(&VAR_0->class_type);
 FUNC_1(&VAR_0->tmpl);
 FUNC_1(&VAR_0->subst);
 FUNC_1(&VAR_0->output_tmp);
 FUNC_1(&VAR_0->output);
}
