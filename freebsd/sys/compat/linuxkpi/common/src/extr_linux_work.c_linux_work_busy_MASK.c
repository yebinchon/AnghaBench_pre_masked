
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int work_task; TYPE_1__* work_queue; int state; } ;
struct taskqueue {int dummy; } ;
struct TYPE_2__ {struct taskqueue* taskqueue; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct taskqueue*,int *) ;

bool
FUNC_2(struct work_struct *VAR_0)
{
 struct taskqueue *VAR_1;

 switch (FUNC_0(&VAR_0->state)) {
 case 128:
  return (0);
 case 129:
  VAR_1 = VAR_0->work_queue->taskqueue;
  return (FUNC_1(VAR_1, &VAR_0->work_task));
 default:
  return (1);
 }
}
