
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; } ;
struct event_config {int limit_callbacks_after_prio; int max_dispatch_callbacks; TYPE_1__ max_dispatch_interval; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct event_config* FUNC_1 (int,int) ;

struct event_config *
FUNC_2(void)
{
 struct event_config *VAR_1 = FUNC_1(1, sizeof(*VAR_1));

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_1->entries);
 VAR_1->max_dispatch_interval.tv_sec = -1;
 VAR_1->max_dispatch_callbacks = VAR_0;
 VAR_1->limit_callbacks_after_prio = 1;

 return (VAR_1);
}
