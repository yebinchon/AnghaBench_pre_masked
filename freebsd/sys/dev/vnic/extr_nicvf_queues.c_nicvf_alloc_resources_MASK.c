
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int rbdr_cnt; int sq_cnt; int cq_cnt; int qs_err_taskq; int qs_err_task; int cq_len; int * cq; int sq_len; int * sq; int rbdr_len; int * rbdr; } ;
struct nicvf {int dev; struct queue_set* qs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,struct nicvf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nicvf*) ;
 scalar_t__ FUNC_3 (struct nicvf*,int *,int ,int) ;
 scalar_t__ FUNC_4 (struct nicvf*,int *,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct nicvf*,int *,int ,int) ;
 int VAR_4 ;
 int FUNC_6 (char*,int ,int ,int *) ;
 int FUNC_7 (int *,int,int ,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct nicvf *VAR_6)
{
 struct queue_set *VAR_7 = VAR_6->qs;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_7->rbdr_cnt; VAR_8++) {
  if (FUNC_4(VAR_6, &VAR_7->rbdr[VAR_8], VAR_7->rbdr_len,
        VAR_0, VAR_8))
   goto alloc_fail;
 }


 for (VAR_8 = 0; VAR_8 < VAR_7->sq_cnt; VAR_8++) {
  if (FUNC_5(VAR_6, &VAR_7->sq[VAR_8], VAR_7->sq_len, VAR_8))
   goto alloc_fail;
 }


 for (VAR_8 = 0; VAR_8 < VAR_7->cq_cnt; VAR_8++) {
  if (FUNC_3(VAR_6, &VAR_7->cq[VAR_8], VAR_7->cq_len, VAR_8))
   goto alloc_fail;
 }


 FUNC_0(&VAR_7->qs_err_task, 0, VAR_4, VAR_6);
 VAR_7->qs_err_taskq = FUNC_6("nicvf_qs_err_taskq", VAR_2,
     VAR_5, &VAR_7->qs_err_taskq);
 FUNC_7(&VAR_7->qs_err_taskq, 1, VAR_3, "%s: qs_taskq",
     FUNC_1(VAR_6->dev));

 return (0);
alloc_fail:
 FUNC_2(VAR_6);
 return (VAR_1);
}
