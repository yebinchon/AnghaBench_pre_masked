
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
struct TYPE_7__ {int shift; int width; int mask; int flags; int value; } ;
struct TYPE_5__ {int shift; int width; int mask; int flags; int value; } ;
struct aw_clk_np_sc {int flags; int lock_retries; int lock_shift; int gate_shift; TYPE_3__ p; TYPE_1__ n; int offset; } ;
struct TYPE_8__ {int shift; int width; int flags; int value; } ;
struct TYPE_6__ {int shift; int width; int flags; int value; } ;
struct aw_clk_np_def {int flags; int lock_retries; int lock_shift; int gate_shift; TYPE_4__ p; TYPE_2__ n; int offset; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct aw_clk_np_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct aw_clk_np_def *VAR_2)
{
 struct clknode *VAR_3;
 struct aw_clk_np_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->offset = VAR_2->offset;

 VAR_4->n.shift = VAR_2->n.shift;
 VAR_4->n.width = VAR_2->n.width;
 VAR_4->n.mask = ((1 << VAR_4->n.width) - 1) << VAR_4->n.shift;
 VAR_4->n.value = VAR_2->n.value;
 VAR_4->n.flags = VAR_2->n.flags;

 VAR_4->p.shift = VAR_2->p.shift;
 VAR_4->p.width = VAR_2->p.width;
 VAR_4->p.mask = ((1 << VAR_4->p.width) - 1) << VAR_4->p.shift;
 VAR_4->p.value = VAR_2->p.value;
 VAR_4->p.flags = VAR_2->p.flags;

 VAR_4->gate_shift = VAR_2->gate_shift;

 VAR_4->lock_shift = VAR_2->lock_shift;
 VAR_4->lock_retries = VAR_2->lock_retries;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
