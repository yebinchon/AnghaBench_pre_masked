
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sched_param {scalar_t__ sched_priority; } ;
typedef TYPE_1__* pthread_attr_t ;
struct TYPE_5__ {scalar_t__ pri_min; scalar_t__ pri_max; } ;
struct TYPE_4__ {int sched_policy; scalar_t__ prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

int
FUNC_0(pthread_attr_t * __restrict VAR_5,
    const struct sched_param * __restrict VAR_6)
{
 int VAR_7;

 if ((VAR_5 == ((void*)0)) || (*VAR_5 == ((void*)0)))
  return (VAR_0);

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_7 = (*VAR_5)->sched_policy;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_3) {
  if (VAR_6->sched_priority < VAR_4[VAR_7-1].pri_min ||
      VAR_6->sched_priority > VAR_4[VAR_7-1].pri_max)
  return (VAR_1);
 } else {





 }

 (*VAR_5)->prio = VAR_6->sched_priority;

 return (0);
}
