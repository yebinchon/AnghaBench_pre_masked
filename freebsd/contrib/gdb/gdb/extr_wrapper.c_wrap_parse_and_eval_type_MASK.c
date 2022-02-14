
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__ result; TYPE_1__* args; } ;
struct TYPE_3__ {int integer; scalar_t__ pointer; } ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0)
{
  struct gdb_wrapper_arguments *VAR_1 = (struct gdb_wrapper_arguments *) VAR_0;

  char *VAR_2 = (char *) VAR_1->args[0].pointer;
  int VAR_3 = VAR_1->args[1].integer;

  VAR_1->result.pointer = (char *) FUNC_0 (VAR_2, VAR_3);

  return 1;
}
