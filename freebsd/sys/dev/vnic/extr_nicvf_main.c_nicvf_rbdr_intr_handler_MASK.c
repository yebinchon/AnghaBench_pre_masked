
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbdr {int rbdr_task_nowait; int rbdr_taskq; } ;
struct queue_set {int rbdr_cnt; struct rbdr* rbdr; } ;
struct nicvf {struct queue_set* qs; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,int ,int) ;
 int FUNC_1 (struct nicvf*,int ,int) ;
 int FUNC_2 (struct nicvf*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct nicvf *VAR_2;
 struct queue_set *VAR_3;
 struct rbdr *VAR_4;
 int VAR_5;

 VAR_2 = (struct nicvf *)VAR_1;


 for (VAR_5 = 0; VAR_5 < VAR_2->qs->rbdr_cnt; VAR_5++) {
  if (!FUNC_2(VAR_2, VAR_0, VAR_5))
   continue;
  FUNC_1(VAR_2, VAR_0, VAR_5);

  VAR_3 = VAR_2->qs;
  VAR_4 = &VAR_3->rbdr[VAR_5];
  FUNC_3(VAR_4->rbdr_taskq, &VAR_4->rbdr_task_nowait);

  FUNC_0(VAR_2, VAR_0, VAR_5);
 }
}
