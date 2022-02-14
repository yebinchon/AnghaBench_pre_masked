
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_opcode {scalar_t__ ent_index; int name; } ;


 struct ia64_opcode* FUNC_0 (int ,scalar_t__) ;

struct ia64_opcode *
FUNC_1 (struct ia64_opcode *VAR_0)
{
  return FUNC_0 (VAR_0->name,
        VAR_0->ent_index + 1);
}
