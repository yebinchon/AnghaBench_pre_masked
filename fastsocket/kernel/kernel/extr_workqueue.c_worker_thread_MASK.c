
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_workqueue_struct {int more_work; int worklist; TYPE_1__* wq; } ;
struct TYPE_2__ {scalar_t__ freezeable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct cpu_workqueue_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(void *VAR_3)
{
 struct cpu_workqueue_struct *VAR_4 = VAR_3;
 FUNC_0(VAR_2);

 if (VAR_4->wq->freezeable)
  FUNC_8();

 for (;;) {
  FUNC_5(&VAR_4->more_work, &VAR_2, VAR_0);
  if (!FUNC_2(VAR_1) &&
      !FUNC_3() &&
      FUNC_4(&VAR_4->worklist))
   FUNC_7();
  FUNC_1(&VAR_4->more_work, &VAR_2);

  FUNC_9();

  if (FUNC_3())
   break;

  FUNC_6(VAR_4);
 }

 return 0;
}
