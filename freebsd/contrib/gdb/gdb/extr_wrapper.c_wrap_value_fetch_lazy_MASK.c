
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct gdb_wrapper_arguments {TYPE_1__* args; } ;
struct TYPE_2__ {scalar_t__ pointer; } ;


 int FUNC_0 (struct value*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0)
{
  struct gdb_wrapper_arguments *VAR_1 = (struct gdb_wrapper_arguments *) VAR_0;

  FUNC_0 ((struct value *) (VAR_1)->args[0].pointer);
  return 1;
}
