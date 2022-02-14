
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ debug_dv; } ;
struct TYPE_3__ {scalar_t__ insn_srlz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1 ()
{
  int VAR_6;
  if (VAR_2.debug_dv)
    FUNC_0 (VAR_5, "  Instruction serialization\n");
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    if (VAR_3[VAR_6].insn_srlz == VAR_1)
      VAR_3[VAR_6].insn_srlz = VAR_0;
}
