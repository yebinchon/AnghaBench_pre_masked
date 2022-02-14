
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fun_macro {size_t argc; size_t* args; TYPE_3__* node; } ;
struct TYPE_5__ {TYPE_1__* macro; } ;
struct TYPE_6__ {TYPE_2__ value; } ;
struct TYPE_4__ {size_t paramc; } ;



__attribute__((used)) static void
FUNC_0 (struct fun_macro *VAR_0, size_t VAR_1)
{
  VAR_0->argc++;
  if (VAR_0->argc <= VAR_0->node->value.macro->paramc)
    VAR_0->args[VAR_0->argc] = VAR_1;
}
