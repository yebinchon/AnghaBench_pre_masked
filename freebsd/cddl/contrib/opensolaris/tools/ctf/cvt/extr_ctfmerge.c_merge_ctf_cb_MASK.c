
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* wq_ithrottle; int wq_queue_lock; int wq_work_avail; int wq_queue; int wq_work_removed; } ;
typedef TYPE_1__ workqueue_t ;
typedef int tdata_t ;


 int FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(tdata_t *VAR_0, char *VAR_1, void *VAR_2)
{
 workqueue_t *VAR_3 = VAR_2;

 FUNC_0(3, "Adding tdata %p for processing\n", (void *)VAR_0);

 FUNC_5(&VAR_3->wq_queue_lock);
 while (FUNC_2(VAR_3->wq_queue) > VAR_3->wq_ithrottle) {
  FUNC_0(2, "Throttling input (len = %d, throttle = %d)\n",
      FUNC_2(VAR_3->wq_queue), VAR_3->wq_ithrottle);
  FUNC_4(&VAR_3->wq_work_removed, &VAR_3->wq_queue_lock);
 }

 FUNC_1(VAR_3->wq_queue, VAR_0);
 FUNC_0(1, "Thread %d announcing %s\n", FUNC_7(), VAR_1);
 FUNC_3(&VAR_3->wq_work_avail);
 FUNC_6(&VAR_3->wq_queue_lock);

 return (1);
}
