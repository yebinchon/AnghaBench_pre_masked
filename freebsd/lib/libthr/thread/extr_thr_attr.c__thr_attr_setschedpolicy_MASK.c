
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_5__ {int pri_default; } ;
struct TYPE_4__ {int sched_policy; int prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

int
FUNC_0(pthread_attr_t *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if ((VAR_5 == ((void*)0)) || (*VAR_5 == ((void*)0)))
  VAR_7 = VAR_0;
 else if ((VAR_6 < VAR_2) || (VAR_6 > VAR_3)) {
  VAR_7 = VAR_1;
 } else {
  (*VAR_5)->sched_policy = VAR_6;
  (*VAR_5)->prio = VAR_4[VAR_6-1].pri_default;
 }
 return(VAR_7);
}
