
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netfront_info {size_t num_queues; int * txq; int * rxq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct netfront_info*) ;

__attribute__((used)) static void
FUNC_7(struct netfront_info *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {
  FUNC_0(&VAR_0->rxq[VAR_1]);
  FUNC_2(&VAR_0->txq[VAR_1]);
 }
 FUNC_6(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {
  FUNC_1(&VAR_0->rxq[VAR_1]);
  FUNC_3(&VAR_0->txq[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {
  FUNC_4(&VAR_0->rxq[VAR_1]);
  FUNC_5(&VAR_0->txq[VAR_1]);
 }
}
