
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct taskqueue {int dummy; } ;
struct TYPE_4__ {int work_task; TYPE_1__* work_queue; int state; } ;
struct delayed_work {TYPE_2__ work; } ;
struct TYPE_3__ {struct taskqueue* taskqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,char*) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (struct delayed_work*,int) ;
 int FUNC_3 (struct delayed_work*) ;
 int FUNC_4 (struct taskqueue*,int *) ;
 int FUNC_5 (struct taskqueue*,int *) ;

bool
FUNC_6(struct delayed_work *VAR_2)
{
 struct taskqueue *VAR_3;
 bool VAR_4;

 FUNC_0(VAR_0 | VAR_1, ((void*)0),
     "linux_flush_delayed_work() might sleep");

 switch (FUNC_1(&VAR_2->work.state)) {
 case 129:
  return (0);
 case 128:
  if (FUNC_2(VAR_2, 1))
   FUNC_3(VAR_2);

 default:
  VAR_3 = VAR_2->work.work_queue->taskqueue;
  VAR_4 = FUNC_5(VAR_3, &VAR_2->work.work_task);
  FUNC_4(VAR_3, &VAR_2->work.work_task);
  return (VAR_4);
 }
}
