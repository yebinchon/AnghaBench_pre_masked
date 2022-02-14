
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_opcode {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_1 (const struct arc_opcode *VAR_1)
{
  if (FUNC_0 (VAR_1->flags) <= VAR_0)
    return 1;
  return 0;
}
