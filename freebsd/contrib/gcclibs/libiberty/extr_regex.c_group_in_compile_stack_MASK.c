
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ regnum_t ;
struct TYPE_5__ {int avail; TYPE_1__* stack; } ;
typedef TYPE_2__ compile_stack_type ;
typedef int boolean ;
struct TYPE_4__ {scalar_t__ regnum; } ;



__attribute__((used)) static boolean
FUNC_0 (compile_stack_type VAR_0, regnum_t VAR_1)
{
  int VAR_2;

  for (VAR_2 = VAR_0.avail - 1;
       VAR_2 >= 0;
       VAR_2--)
    if (VAR_0.stack[VAR_2].regnum == VAR_1)
      return 1;

  return 0;
}
