
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct TYPE_2__ {scalar_t__ sched_policy; int prio; } ;
struct pthread {TYPE_1__ attr; int tid; } ;
typedef struct pthread* pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 (struct pthread*,struct pthread*,int ) ;
 int FUNC_4 (int ,scalar_t__,struct sched_param*) ;
 int VAR_1 ;

int
FUNC_5(pthread_t VAR_2, int VAR_3)
{
 struct pthread *VAR_4 = FUNC_2();
 struct sched_param VAR_5;
 int VAR_6;

 VAR_5.sched_priority = VAR_3;
 if (VAR_2 == VAR_4)
  FUNC_0(VAR_4);
 else if ((VAR_6 = FUNC_3(VAR_4, VAR_2, 0)))
  return (VAR_6);
 if (VAR_2->attr.sched_policy == VAR_0 ||
     VAR_2->attr.prio == VAR_3) {
  VAR_2->attr.prio = VAR_3;
  VAR_6 = 0;
 } else {
  VAR_6 = FUNC_4(VAR_2->tid,
   VAR_2->attr.sched_policy, &VAR_5);
  if (VAR_6 == -1)
   VAR_6 = VAR_1;
  else
   VAR_2->attr.prio = VAR_3;
 }
 FUNC_1(VAR_4, VAR_2);
 return (VAR_6);
}
