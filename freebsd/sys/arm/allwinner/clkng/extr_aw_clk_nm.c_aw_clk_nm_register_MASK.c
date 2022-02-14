
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct TYPE_11__ {int shift; int width; int mask; int cond_mask; int cond_value; int cond_shift; int flags; int value; } ;
struct TYPE_9__ {int shift; int width; int mask; int flags; int value; } ;
struct TYPE_7__ {int shift; int width; int mask; int flags; int value; } ;
struct aw_clk_nm_sc {int mux_shift; int mux_mask; int flags; int lock_retries; int lock_shift; int gate_shift; TYPE_5__ prediv; TYPE_3__ n; TYPE_1__ m; int offset; } ;
struct TYPE_12__ {int shift; int width; int cond_width; int cond_mask; int cond_value; int cond_shift; int flags; int value; } ;
struct TYPE_10__ {int shift; int width; int flags; int value; } ;
struct TYPE_8__ {int shift; int width; int flags; int value; } ;
struct aw_clk_nm_def {int mux_shift; int mux_width; int flags; int lock_retries; int lock_shift; int gate_shift; TYPE_6__ prediv; TYPE_4__ n; TYPE_2__ m; int offset; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct aw_clk_nm_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct aw_clk_nm_def *VAR_2)
{
 struct clknode *VAR_3;
 struct aw_clk_nm_sc *VAR_4;

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

 VAR_4->n.shift = VAR_2->n.shift;
 VAR_4->n.width = VAR_2->n.width;
 VAR_4->n.mask = ((1 << VAR_4->n.width) - 1) << VAR_4->n.shift;
 VAR_4->n.value = VAR_2->n.value;
 VAR_4->n.flags = VAR_2->n.flags;

 VAR_4->prediv.shift = VAR_2->prediv.shift;
 VAR_4->prediv.width = VAR_2->prediv.width;
 VAR_4->prediv.mask = ((1 << VAR_4->prediv.width) - 1) << VAR_4->prediv.shift;
 VAR_4->prediv.value = VAR_2->prediv.value;
 VAR_4->prediv.flags = VAR_2->prediv.flags;
 VAR_4->prediv.cond_shift = VAR_2->prediv.cond_shift;
 if (VAR_2->prediv.cond_width != 0)
  VAR_4->prediv.cond_mask = ((1 << VAR_2->prediv.cond_width) - 1) << VAR_4->prediv.shift;
 else
  VAR_4->prediv.cond_mask = VAR_2->prediv.cond_mask;
 VAR_4->prediv.cond_value = VAR_2->prediv.cond_value;

 VAR_4->mux_shift = VAR_2->mux_shift;
 VAR_4->mux_mask = ((1 << VAR_2->mux_width) - 1) << VAR_4->mux_shift;

 VAR_4->gate_shift = VAR_2->gate_shift;

 VAR_4->lock_shift = VAR_2->lock_shift;
 VAR_4->lock_retries = VAR_2->lock_retries;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
