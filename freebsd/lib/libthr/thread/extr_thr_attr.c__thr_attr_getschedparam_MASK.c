
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {int prio; } ;


 int VAR_0 ;

int
FUNC_0(const pthread_attr_t * __restrict VAR_1,
    struct sched_param * __restrict VAR_2)
{
 int VAR_3 = 0;

 if ((VAR_1 == ((void*)0)) || (*VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
  VAR_3 = VAR_0;
 else
  VAR_2->sched_priority = (*VAR_1)->prio;

 return(VAR_3);
}
