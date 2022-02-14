
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_4__ {int pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__ result; TYPE_1__* args; } ;
struct TYPE_3__ {scalar_t__ pointer; } ;


 int FUNC_0 (struct value*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0)
{
  struct gdb_wrapper_arguments *VAR_1 = (struct gdb_wrapper_arguments *) VAR_0;
  struct value *VAR_2;

  VAR_2 = (struct value *) (VAR_1)->args[0].pointer;
  (VAR_1)->result.pointer = FUNC_0 (VAR_2);
  return 1;
}
