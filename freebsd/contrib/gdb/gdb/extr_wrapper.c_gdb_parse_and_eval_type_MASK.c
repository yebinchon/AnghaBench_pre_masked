
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct type {int dummy; } ;
struct TYPE_4__ {scalar_t__ pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__ result; TYPE_1__* args; } ;
typedef int catch_errors_ftype ;
struct TYPE_3__ {char* pointer; int integer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gdb_wrapper_arguments*,char*,int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_1 (char *VAR_2, int VAR_3, struct type **VAR_4)
{
  struct gdb_wrapper_arguments VAR_5;
  VAR_5.args[0].pointer = VAR_2;
  VAR_5.args[1].integer = VAR_3;

  if (!FUNC_0 ((catch_errors_ftype *) VAR_1, &VAR_5,
       "", VAR_0))
    {

      return 0;
    }

  *VAR_4 = (struct type *) VAR_5.result.pointer;
  return 1;
}
