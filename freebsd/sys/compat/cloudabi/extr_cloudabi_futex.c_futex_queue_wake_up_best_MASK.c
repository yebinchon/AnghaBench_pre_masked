
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_waiter {int fw_locked; int fw_wait; int * fw_queue; } ;
struct futex_queue {int fq_count; int fq_list; } ;


 struct futex_waiter* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct futex_queue *VAR_1)
{
 struct futex_waiter *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->fq_list);
 VAR_2->fw_locked = 1;
 VAR_2->fw_queue = ((void*)0);
 FUNC_2(&VAR_2->fw_wait);

 FUNC_1(&VAR_1->fq_list, VAR_0);
 --VAR_1->fq_count;
}
