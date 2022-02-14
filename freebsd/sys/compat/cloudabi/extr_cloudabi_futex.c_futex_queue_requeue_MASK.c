
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_waiter {struct futex_queue* fw_queue; } ;
struct futex_queue {int fq_count; int fq_list; } ;


 int FUNC_0 (int *) ;
 struct futex_waiter* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct futex_waiter*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct futex_queue *VAR_1, struct futex_queue *VAR_2,
    unsigned int VAR_3)
{
 struct futex_waiter *VAR_4;


 while (VAR_3-- > 0 && !FUNC_0(&VAR_1->fq_list)) {
  VAR_4 = FUNC_1(&VAR_1->fq_list);
  FUNC_3(&VAR_1->fq_list, VAR_0);
  --VAR_1->fq_count;

  VAR_4->fw_queue = VAR_2;
  FUNC_2(&VAR_2->fq_list, VAR_4, VAR_0);
  ++VAR_2->fq_count;
 }
}
