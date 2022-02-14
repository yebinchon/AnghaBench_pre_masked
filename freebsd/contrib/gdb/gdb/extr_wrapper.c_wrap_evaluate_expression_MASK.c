
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__* args; TYPE_1__ result; } ;
struct expression {int dummy; } ;
struct TYPE_4__ {scalar_t__ pointer; } ;


 scalar_t__ FUNC_0 (struct expression*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0)
{
  struct gdb_wrapper_arguments *VAR_1 = (struct gdb_wrapper_arguments *) VAR_0;

  (VAR_1)->result.pointer =
    (char *) FUNC_0 ((struct expression *) VAR_1->args[0].pointer);
  return 1;
}
