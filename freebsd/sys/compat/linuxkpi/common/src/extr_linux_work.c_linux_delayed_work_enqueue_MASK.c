
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct taskqueue {int dummy; } ;
struct TYPE_4__ {int work_task; TYPE_1__* work_queue; } ;
struct delayed_work {TYPE_2__ work; } ;
struct TYPE_3__ {struct taskqueue* taskqueue; } ;


 int FUNC_0 (struct taskqueue*,int *) ;

__attribute__((used)) static void
FUNC_1(struct delayed_work *VAR_0)
{
 struct taskqueue *VAR_1;

 VAR_1 = VAR_0->work.work_queue->taskqueue;
 FUNC_0(VAR_1, &VAR_0->work.work_task);
}
