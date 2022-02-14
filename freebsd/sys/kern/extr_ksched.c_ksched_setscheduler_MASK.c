
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sched_param {scalar_t__ sched_priority; } ;
struct rtprio {int prio; int type; } ;
struct ksched {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rtprio*,struct thread*) ;

int
FUNC_3(struct ksched *VAR_9, struct thread *VAR_10, int VAR_11,
    const struct sched_param *VAR_12)
{
 struct rtprio VAR_13;
 int VAR_14;

 VAR_14 = 0;
 switch(VAR_11) {
 case 128:
 case 130:
  if (VAR_12->sched_priority >= VAR_3 &&
      VAR_12->sched_priority <= VAR_2) {
   VAR_13.prio = FUNC_0(VAR_12->sched_priority);
   VAR_13.type = (VAR_11 == 130) ? VAR_6 :
       VAR_8;
   FUNC_2(&VAR_13, VAR_10);
  } else {
   VAR_14 = VAR_1;
  }
  break;
 case 129:
  if (VAR_12->sched_priority >= 0 && VAR_12->sched_priority <=
      (VAR_4 - VAR_5)) {
   VAR_13.type = VAR_7;
   VAR_13.prio = FUNC_1(VAR_12->sched_priority);
   FUNC_2(&VAR_13, VAR_10);
  } else {
   VAR_14 = VAR_0;
  }
  break;
 default:
  VAR_14 = VAR_0;
  break;
 }
 return (VAR_14);
}
