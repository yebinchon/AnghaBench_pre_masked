
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct TYPE_3__ {int shift; int width; int mask; int flags; int value; } ;
struct aw_clk_m_sc {int mux_shift; int mux_mask; int flags; int gate_shift; TYPE_1__ m; int offset; } ;
struct TYPE_4__ {int shift; int width; int flags; int value; } ;
struct aw_clk_m_def {int mux_shift; int mux_width; int flags; int gate_shift; TYPE_2__ m; int offset; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct aw_clk_m_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct aw_clk_m_def *VAR_2)
{
 struct clknode *VAR_3;
 struct aw_clk_m_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->offset = VAR_2->offset;

 VAR_4->m.shift = VAR_2->m.shift;
 VAR_4->m.width = VAR_2->m.width;
 VAR_4->m.mask = ((1 << VAR_4->m.width) - 1) << VAR_4->m.shift;
 VAR_4->m.value = VAR_2->m.value;
 VAR_4->m.flags = VAR_2->m.flags;

 VAR_4->mux_shift = VAR_2->mux_shift;
 VAR_4->mux_mask = ((1 << VAR_2->mux_width) - 1) << VAR_4->mux_shift;

 VAR_4->gate_shift = VAR_2->gate_shift;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
