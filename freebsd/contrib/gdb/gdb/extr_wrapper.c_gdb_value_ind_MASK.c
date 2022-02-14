
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_4__ {scalar_t__ pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__ result; TYPE_1__* args; } ;
typedef int catch_errors_ftype ;
struct TYPE_3__ {struct value* pointer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gdb_wrapper_arguments*,char*,int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_1 (struct value *VAR_2, struct value **VAR_3)
{
  struct gdb_wrapper_arguments VAR_4;

  VAR_4.args[0].pointer = VAR_2;

  if (!FUNC_0 ((catch_errors_ftype *) VAR_1, &VAR_4,
       "", VAR_0))
    {

      return 0;
    }

  *VAR_3 = (struct value *) VAR_4.result.pointer;
  return 1;
}
