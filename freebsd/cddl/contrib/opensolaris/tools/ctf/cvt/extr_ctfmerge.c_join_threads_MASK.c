
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wq_nthreads; int * wq_thread; } ;
typedef TYPE_1__ workqueue_t ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(workqueue_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_nthreads; VAR_1++) {
  FUNC_0(VAR_0->wq_thread[VAR_1], ((void*)0));
 }
}
