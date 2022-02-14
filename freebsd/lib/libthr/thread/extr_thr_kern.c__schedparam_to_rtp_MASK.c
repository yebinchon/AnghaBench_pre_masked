
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {void* sched_priority; } ;
struct rtprio {void* prio; int type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




int
FUNC_0(int VAR_4, const struct sched_param *VAR_5,
 struct rtprio *VAR_6)
{
 switch(VAR_4) {
 case 128:
  VAR_6->type = VAR_3;
  VAR_6->prio = VAR_1 - VAR_5->sched_priority;
  break;
 case 130:
  VAR_6->type = VAR_0;
  VAR_6->prio = VAR_1 - VAR_5->sched_priority;
  break;
 case 129:
 default:
  VAR_6->type = VAR_2;
  VAR_6->prio = 0;
  break;
 }
 return (0);
}
