
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct event_config {int max_dispatch_callbacks; int limit_callbacks_after_prio; TYPE_1__ max_dispatch_interval; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct timeval const*,int) ;

int
FUNC_1(struct event_config *VAR_1,
    const struct timeval *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2)
  FUNC_0(&VAR_1->max_dispatch_interval, VAR_2,
      sizeof(struct timeval));
 else
  VAR_1->max_dispatch_interval.tv_sec = -1;
 VAR_1->max_dispatch_callbacks =
     VAR_3 >= 0 ? VAR_3 : VAR_0;
 if (VAR_4 < 0)
  VAR_4 = 0;
 VAR_1->limit_callbacks_after_prio = VAR_4;
 return (0);
}
