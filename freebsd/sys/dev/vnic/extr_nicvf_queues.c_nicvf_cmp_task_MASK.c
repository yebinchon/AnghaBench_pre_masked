
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int dummy; } ;
struct cmp_queue {int idx; int cmp_task; int cmp_taskq; struct nicvf* nic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nicvf*,int ,int ) ;
 int FUNC_2 (struct nicvf*,int ) ;
 int FUNC_3 (struct nicvf*,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct cmp_queue *VAR_3;
 struct nicvf *VAR_4;
 int VAR_5;

 VAR_3 = (struct cmp_queue *)VAR_1;
 VAR_4 = VAR_3->nic;


 VAR_5 = FUNC_2(VAR_4, VAR_3->idx);
 if (FUNC_0(VAR_5 != 0)) {




  FUNC_4(VAR_3->cmp_taskq, &VAR_3->cmp_task);

 }

 FUNC_1(VAR_4, VAR_0, VAR_3->idx);

 FUNC_3(VAR_4, VAR_0, VAR_3->idx);

}
