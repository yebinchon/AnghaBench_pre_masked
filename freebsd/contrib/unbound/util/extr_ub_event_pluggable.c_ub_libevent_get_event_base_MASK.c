
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event_base {int * vmt; } ;
struct event_base {int dummy; } ;
struct TYPE_2__ {struct event_base* base; } ;


 TYPE_1__* FUNC_0 (struct ub_event_base*) ;
 int VAR_0 ;

struct event_base*
FUNC_1(struct ub_event_base* VAR_1)
{

 if (VAR_1->vmt == &VAR_0)
  return FUNC_0(VAR_1)->base;



 return ((void*)0);
}
