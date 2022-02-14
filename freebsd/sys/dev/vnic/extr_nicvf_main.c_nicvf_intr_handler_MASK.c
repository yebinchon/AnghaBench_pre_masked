
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int dummy; } ;
struct cmp_queue {int idx; int cmp_task; int cmp_taskq; struct nicvf* nic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*,int ,int) ;
 int FUNC_1 (struct nicvf*,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct nicvf *VAR_3;
 struct cmp_queue *VAR_4;
 int VAR_5;

 VAR_4 = (struct cmp_queue *)VAR_2;
 VAR_3 = VAR_4->nic;
 VAR_5 = VAR_4->idx;


 FUNC_1(VAR_3, VAR_1, VAR_5);

 FUNC_2(VAR_4->cmp_taskq, &VAR_4->cmp_task);


 FUNC_0(VAR_3, VAR_1, VAR_5);

 return (VAR_0);
}
