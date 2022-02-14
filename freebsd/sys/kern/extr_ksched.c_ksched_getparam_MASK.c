
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sched_param {scalar_t__ sched_priority; } ;
struct rtprio {scalar_t__ prio; int type; } ;
struct ksched {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct rtprio*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(struct ksched *VAR_2, struct thread *VAR_3,
    struct sched_param *VAR_4)
{
 struct rtprio VAR_5;

 FUNC_1(VAR_3, &VAR_5);
 if (FUNC_0(VAR_5.type))
  VAR_4->sched_priority = FUNC_2(VAR_5.prio);
 else {
  if (VAR_1 < VAR_5.prio)




   VAR_4->sched_priority = VAR_0 -
       VAR_1;
  else
   VAR_4->sched_priority = FUNC_3(VAR_5.prio);
 }
 return (0);
}
