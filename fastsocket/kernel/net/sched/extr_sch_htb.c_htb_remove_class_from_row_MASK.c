
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htb_sched {scalar_t__** ptr; int* row_mask; TYPE_1__** row; } ;
struct htb_class {size_t level; scalar_t__ node; } ;
struct TYPE_2__ {int rb_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct htb_sched *VAR_0,
       struct htb_class *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2) {
  int VAR_4 = FUNC_0(~VAR_2);

  VAR_2 &= ~(1 << VAR_4);
  if (VAR_0->ptr[VAR_1->level][VAR_4] == VAR_1->node + VAR_4)
   FUNC_1(VAR_0->ptr[VAR_1->level] + VAR_4);

  FUNC_2(VAR_1->node + VAR_4, VAR_0->row[VAR_1->level] + VAR_4);
  if (!VAR_0->row[VAR_1->level][VAR_4].rb_node)
   VAR_3 |= 1 << VAR_4;
 }
 VAR_0->row_mask[VAR_1->level] &= ~VAR_3;
}
