
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event_base {int dummy; } ;
struct comm_base {TYPE_1__* eb; } ;
struct TYPE_2__ {struct ub_event_base* base; } ;



struct ub_event_base* FUNC_0(struct comm_base* VAR_0)
{
 return VAR_0->eb->base;
}
