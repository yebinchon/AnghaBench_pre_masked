
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct captured_value_struct_elt_args {int err; int static_memfuncp; int name; int args; int argp; int * result_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (struct ui_out *VAR_1, void *VAR_2)
{
  struct captured_value_struct_elt_args *VAR_3 = VAR_2;
  *VAR_3->result_ptr = FUNC_0 (VAR_3->argp, VAR_3->args, VAR_3->name,
        VAR_3->static_memfuncp, VAR_3->err);
  return VAR_0;
}
