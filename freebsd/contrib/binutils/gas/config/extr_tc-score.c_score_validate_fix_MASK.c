
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fx_frag; int fx_where; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {scalar_t__ insn_addr; } ;



void
FUNC_0 (fixS *VAR_0)
{
  VAR_0->fx_where += VAR_0->fx_frag->insn_addr;
}
