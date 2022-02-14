
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct TYPE_7__ {int shift; int mask; int cond_mask; int flags; int cond_value; int cond_shift; int value; } ;
struct TYPE_5__ {int shift; int mask; int cond_mask; int flags; int cond_value; int cond_shift; int value; } ;
struct aw_clk_prediv_mux_sc {int mux_shift; int mux_mask; int flags; TYPE_3__ prediv; TYPE_1__ div; int offset; } ;
struct TYPE_8__ {int shift; int width; int cond_width; int cond_mask; int flags; int cond_value; int cond_shift; int value; } ;
struct TYPE_6__ {int shift; int width; int cond_width; int flags; int cond_value; int cond_shift; int value; } ;
struct aw_clk_prediv_mux_def {int mux_shift; int mux_width; int flags; TYPE_4__ prediv; TYPE_2__ div; int offset; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct aw_clk_prediv_mux_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct aw_clk_prediv_mux_def *VAR_2)
{
 struct clknode *VAR_3;
 struct aw_clk_prediv_mux_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->offset = VAR_2->offset;

 VAR_4->mux_shift = VAR_2->mux_shift;
 VAR_4->mux_mask = ((1 << VAR_2->mux_width) - 1) << VAR_4->mux_shift;

 VAR_4->div.shift = VAR_2->div.shift;
 VAR_4->div.mask = ((1 << VAR_2->div.width) - 1) << VAR_4->div.shift;
 VAR_4->div.value = VAR_2->div.value;
 VAR_4->div.cond_shift = VAR_2->div.cond_shift;
 VAR_4->div.cond_mask = ((1 << VAR_2->div.cond_width) - 1) << VAR_4->div.shift;
 VAR_4->div.cond_value = VAR_2->div.cond_value;
 VAR_4->div.flags = VAR_2->div.flags;

 VAR_4->prediv.shift = VAR_2->prediv.shift;
 VAR_4->prediv.mask = ((1 << VAR_2->prediv.width) - 1) << VAR_4->prediv.shift;
 VAR_4->prediv.value = VAR_2->prediv.value;
 VAR_4->prediv.cond_shift = VAR_2->prediv.cond_shift;
 if (VAR_2->prediv.cond_width != 0)
  VAR_4->prediv.cond_mask = ((1 << VAR_2->prediv.cond_width) - 1) << VAR_4->prediv.shift;
 else
  VAR_4->prediv.cond_mask = VAR_2->prediv.cond_mask;
 VAR_4->prediv.cond_value = VAR_2->prediv.cond_value;
 VAR_4->prediv.flags = VAR_2->prediv.flags;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
