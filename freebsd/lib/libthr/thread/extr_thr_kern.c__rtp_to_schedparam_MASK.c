
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {void* sched_priority; } ;
struct rtprio {int type; void* prio; } ;



 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(const struct rtprio *VAR_4, int *VAR_5,
 struct sched_param *VAR_6)
{
 switch(VAR_4->type) {
 case 128:
  *VAR_5 = VAR_3;
  VAR_6->sched_priority = VAR_0 - VAR_4->prio;
  break;
 case 129:
  *VAR_5 = VAR_1;
  VAR_6->sched_priority = VAR_0 - VAR_4->prio;
  break;
 default:
  *VAR_5 = VAR_2;
  VAR_6->sched_priority = 0;
  break;
 }
 return (0);
}
