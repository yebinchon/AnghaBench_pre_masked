
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct catch_errors_args {int (* func ) (int ) ;int func_args; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (struct ui_out *VAR_0, void *VAR_1)
{
  struct catch_errors_args *VAR_2 = VAR_1;
  return VAR_2->func (VAR_2->func_args);
}
