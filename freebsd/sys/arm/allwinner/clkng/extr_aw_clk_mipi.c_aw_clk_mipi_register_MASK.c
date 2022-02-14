
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
struct TYPE_11__ {int shift; int width; int mask; int min_value; int flags; int value; } ;
struct TYPE_9__ {int shift; int width; int mask; int min_value; int flags; int value; } ;
struct TYPE_7__ {int shift; int width; int mask; int min_value; int flags; int value; } ;
struct aw_clk_mipi_sc {int flags; int lock_retries; int lock_shift; int gate_shift; int max_freq; int min_freq; TYPE_5__ n; TYPE_3__ m; TYPE_1__ k; int offset; } ;
struct TYPE_12__ {int shift; int width; int min_value; int flags; int value; } ;
struct TYPE_10__ {int shift; int width; int min_value; int flags; int value; } ;
struct TYPE_8__ {int shift; int width; int min_value; int flags; int value; } ;
struct aw_clk_mipi_def {int flags; int lock_retries; int lock_shift; int gate_shift; int max_freq; int min_freq; TYPE_6__ n; TYPE_4__ m; TYPE_2__ k; int offset; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct aw_clk_mipi_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct aw_clk_mipi_def *VAR_2)
{
 struct clknode *VAR_3;
 struct aw_clk_mipi_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->offset = VAR_2->offset;

 VAR_4->k.shift = VAR_2->k.shift;
 VAR_4->k.width = VAR_2->k.width;
 VAR_4->k.mask = ((1 << VAR_4->k.width) - 1) << VAR_4->k.shift;
 VAR_4->k.value = VAR_2->k.value;
 VAR_4->k.flags = VAR_2->k.flags;
 VAR_4->k.min_value = VAR_2->k.min_value;

 VAR_4->m.shift = VAR_2->m.shift;
 VAR_4->m.width = VAR_2->m.width;
 VAR_4->m.mask = ((1 << VAR_4->m.width) - 1) << VAR_4->m.shift;
 VAR_4->m.value = VAR_2->m.value;
 VAR_4->m.flags = VAR_2->m.flags;
 VAR_4->m.min_value = VAR_2->m.min_value;

 VAR_4->n.shift = VAR_2->n.shift;
 VAR_4->n.width = VAR_2->n.width;
 VAR_4->n.mask = ((1 << VAR_4->n.width) - 1) << VAR_4->n.shift;
 VAR_4->n.value = VAR_2->n.value;
 VAR_4->n.flags = VAR_2->n.flags;
 VAR_4->n.min_value = VAR_2->n.min_value;

 VAR_4->min_freq = VAR_2->min_freq;
 VAR_4->max_freq = VAR_2->max_freq;

 VAR_4->gate_shift = VAR_2->gate_shift;

 VAR_4->lock_shift = VAR_2->lock_shift;
 VAR_4->lock_retries = VAR_2->lock_retries;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
