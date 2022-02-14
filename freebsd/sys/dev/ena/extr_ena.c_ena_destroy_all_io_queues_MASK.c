
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_que {int cleanup_tq; int cleanup_task; } ;
struct ena_adapter {int num_queues; struct ena_que* que; } ;


 int FUNC_0 (struct ena_adapter*) ;
 int FUNC_1 (struct ena_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ena_adapter *VAR_0)
{
 struct ena_que *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  VAR_1 = &VAR_0->que[VAR_2];
  while (FUNC_2(VAR_1->cleanup_tq,
      &VAR_1->cleanup_task, ((void*)0)))
   FUNC_3(VAR_1->cleanup_tq,
       &VAR_1->cleanup_task);
  FUNC_4(VAR_1->cleanup_tq);
 }

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
