
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int work_task; TYPE_1__* work_queue; int state; } ;
struct taskqueue {int dummy; } ;
struct TYPE_2__ {struct taskqueue* taskqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,char*) ;

 int FUNC_1 (int *) ;
 int FUNC_2 (struct taskqueue*,int *) ;
 int FUNC_3 (struct taskqueue*,int *) ;

bool
FUNC_4(struct work_struct *VAR_2)
{
 struct taskqueue *VAR_3;
 bool VAR_4;

 FUNC_0(VAR_0 | VAR_1, ((void*)0),
     "linux_flush_work() might sleep");

 switch (FUNC_1(&VAR_2->state)) {
 case 128:
  return (0);
 default:
  VAR_3 = VAR_2->work_queue->taskqueue;
  VAR_4 = FUNC_3(VAR_3, &VAR_2->work_task);
  FUNC_2(VAR_3, &VAR_2->work_task);
  return (VAR_4);
 }
}
