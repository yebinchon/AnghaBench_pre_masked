
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_waiter {int fw_locked; int fw_donated; int fw_wait; int * fw_queue; } ;
struct futex_queue {int fq_count; int fq_list; } ;


 struct futex_waiter* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct futex_queue*,int *,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct futex_queue *VAR_1, unsigned int VAR_2)
{
 struct futex_waiter *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->fq_list);
 if (VAR_3 == ((void*)0))
  return;
 VAR_3->fw_locked = 0;
 VAR_3->fw_queue = ((void*)0);
 FUNC_2(&VAR_3->fw_wait);

 FUNC_1(&VAR_1->fq_list, VAR_0);
 --VAR_1->fq_count;
 FUNC_3(VAR_1, &VAR_3->fw_donated, VAR_2);
}
