
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int rbdr_cnt; int cq_cnt; int sq_cnt; int * sq; int * cq; int * rbdr; int * qs_err_taskq; int qs_err_task; } ;
struct nicvf {struct queue_set* qs; } ;


 int FUNC_0 (struct nicvf*,int *) ;
 int FUNC_1 (struct nicvf*,int *) ;
 int FUNC_2 (struct nicvf*,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct nicvf *VAR_0)
{
 int VAR_1;
 struct queue_set *VAR_2;

 VAR_2 = VAR_0->qs;




 if (VAR_2->qs_err_taskq != ((void*)0)) {

  while (FUNC_3(VAR_2->qs_err_taskq,
      &VAR_2->qs_err_task, ((void*)0)) != 0) {
   FUNC_4(VAR_2->qs_err_taskq, &VAR_2->qs_err_task);

  }
  FUNC_5(VAR_2->qs_err_taskq);
  VAR_2->qs_err_taskq = ((void*)0);
 }

 for (VAR_1 = 0; VAR_1 < VAR_2->rbdr_cnt; VAR_1++)
  FUNC_1(VAR_0, &VAR_2->rbdr[VAR_1]);


 for (VAR_1 = 0; VAR_1 < VAR_2->cq_cnt; VAR_1++)
  FUNC_0(VAR_0, &VAR_2->cq[VAR_1]);


 for (VAR_1 = 0; VAR_1 < VAR_2->sq_cnt; VAR_1++)
  FUNC_2(VAR_0, &VAR_2->sq[VAR_1]);
}
