
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pointer; } ;
struct gdb_wrapper_arguments {TYPE_2__* args; TYPE_1__ result; } ;
struct block {int dummy; } ;
struct TYPE_4__ {int integer; scalar_t__ pointer; } ;


 int FUNC_0 (char**,struct block*,int ) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0)
{
  struct gdb_wrapper_arguments *VAR_1
    = (struct gdb_wrapper_arguments *) VAR_0;
  VAR_1->result.pointer = FUNC_0((char **) VAR_1->args[0].pointer,
         (struct block *) VAR_1->args[1].pointer,
         VAR_1->args[2].integer);
  return 1;
}
