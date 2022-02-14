
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wq_bar2; int wq_queue; int wq_ninqueue; int wq_bar1; } ;
typedef TYPE_1__ workqueue_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(workqueue_t *VAR_0)
{
 FUNC_6(VAR_0);

 FUNC_1(2, "%d: entering first barrier\n", FUNC_5());

 if (FUNC_0(&VAR_0->wq_bar1)) {

  FUNC_1(2, "%d: doing work in first barrier\n", FUNC_5());

  FUNC_3(VAR_0);

  FUNC_4(VAR_0);

  FUNC_1(2, "%d: ninqueue is %d, %d on queue\n", FUNC_5(),
      VAR_0->wq_ninqueue, FUNC_2(VAR_0->wq_queue));
 }

 FUNC_1(2, "%d: entering second barrier\n", FUNC_5());

 (void) FUNC_0(&VAR_0->wq_bar2);

 FUNC_1(2, "%d: phase 1 complete\n", FUNC_5());

 FUNC_7(VAR_0);
}
