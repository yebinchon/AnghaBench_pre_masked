
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct gdb_wrapper_arguments {TYPE_1__* args; } ;
typedef int catch_errors_ftype ;
struct TYPE_2__ {struct value* pointer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gdb_wrapper_arguments*,char*,int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_1 (struct value *VAR_2)
{
  struct gdb_wrapper_arguments VAR_3;

  VAR_3.args[0].pointer = VAR_2;
  return FUNC_0 ((catch_errors_ftype *) VAR_1, &VAR_3,
         "", VAR_0);
}
