
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dsa_switch_tree {size_t cpu_switch; int cpu_port; } ;
struct dsa_switch {size_t index; TYPE_1__* pd; struct dsa_switch_tree* dst; } ;
struct TYPE_2__ {int * rtable; } ;



__attribute__((used)) static inline u8 FUNC_0(struct dsa_switch *VAR_0)
{
 struct dsa_switch_tree *VAR_1 = VAR_0->dst;







 if (VAR_1->cpu_switch == VAR_0->index)
  return VAR_1->cpu_port;
 else
  return VAR_0->pd->rtable[VAR_1->cpu_switch];
}
