
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
struct gdb_wrapper_arguments {TYPE_1__ result; TYPE_2__* args; } ;
struct expression {int dummy; } ;
typedef char* block ;
typedef int catch_errors_ftype ;
struct TYPE_4__ {char** pointer; int integer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gdb_wrapper_arguments*,char*,int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_1 (char **VAR_2, struct block *VAR_3, int VAR_4,
   struct expression **VAR_5)
{
  struct gdb_wrapper_arguments VAR_6;
  VAR_6.args[0].pointer = VAR_2;
  VAR_6.args[1].pointer = VAR_3;
  VAR_6.args[2].integer = VAR_4;

  if (!FUNC_0 ((catch_errors_ftype *) VAR_1, &VAR_6,
       "", VAR_0))
    {

      return 0;
    }

  *VAR_5 = (struct expression *) VAR_6.result.pointer;
  return 1;

}
