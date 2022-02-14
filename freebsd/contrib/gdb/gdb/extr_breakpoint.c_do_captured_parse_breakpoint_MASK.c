
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct captured_parse_breakpoint_args {int not_found_ptr; int addr_string_p; int sals_p; int arg_p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (struct ui_out *VAR_1, void *VAR_2)
{
  struct captured_parse_breakpoint_args *VAR_3 = VAR_2;

  FUNC_0 (VAR_3->arg_p, VAR_3->sals_p, VAR_3->addr_string_p,
           VAR_3->not_found_ptr);

  return VAR_0;
}
