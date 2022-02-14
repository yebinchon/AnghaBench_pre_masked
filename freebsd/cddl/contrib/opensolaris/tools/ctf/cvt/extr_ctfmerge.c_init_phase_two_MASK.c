
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wq_ninqueue; int wq_donequeue; int wq_queue; } ;
typedef TYPE_1__ workqueue_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(workqueue_t *VAR_0)
{
 int VAR_1;
 VAR_0->wq_ninqueue = VAR_1 = FUNC_2(VAR_0->wq_donequeue);
 while (VAR_1 != 1) {
  VAR_0->wq_ninqueue += VAR_1 / 2;
  VAR_1 = VAR_1 / 2 + VAR_1 % 2;
 }





 FUNC_0(FUNC_2(VAR_0->wq_queue) == 0);
 FUNC_1(VAR_0->wq_queue, ((void*)0));
 VAR_0->wq_queue = VAR_0->wq_donequeue;
}
