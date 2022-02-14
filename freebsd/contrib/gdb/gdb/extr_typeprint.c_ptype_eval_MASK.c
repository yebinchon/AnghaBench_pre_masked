
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
struct TYPE_2__ {scalar_t__ opcode; struct type* type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct type *
FUNC_0 (struct expression *VAR_1)
{
  if (VAR_1->elts[0].opcode == VAR_0)
    {
      return (VAR_1->elts[1].type);
    }
  else
    {
      return (((void*)0));
    }
}
