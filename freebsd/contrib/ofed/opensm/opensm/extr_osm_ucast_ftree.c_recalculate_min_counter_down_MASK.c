
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t down_port_groups_num; size_t min_counter_down; TYPE_1__** down_port_groups; } ;
typedef TYPE_2__ ftree_sw_t ;
struct TYPE_4__ {size_t counter_down; } ;



__attribute__((used)) static inline void FUNC_0(ftree_sw_t * VAR_0)
{
 uint32_t VAR_1 = (1 << 30);
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->down_port_groups_num; VAR_2++) {
  if (VAR_0->down_port_groups[VAR_2]->counter_down < VAR_1) {
   VAR_1 = VAR_0->down_port_groups[VAR_2]->counter_down;
  }
 }
 VAR_0->min_counter_down = VAR_1;
 return;
}
