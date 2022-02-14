
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;



int FUNC_0(const struct event *VAR_0)
{
 return VAR_0->ev_timeout_pos.min_heap_idx == 0;
}
