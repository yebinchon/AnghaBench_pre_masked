
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netfront_info {size_t num_queues; int * txq; int * rxq; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct netfront_info* FUNC_4 (int ) ;
 int FUNC_5 (struct netfront_info*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_4(VAR_0);
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++) {
  FUNC_0(&VAR_1->rxq[VAR_2]);
  FUNC_2(&VAR_1->txq[VAR_2]);
 }
 FUNC_5(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++) {
  FUNC_1(&VAR_1->rxq[VAR_2]);
  FUNC_3(&VAR_1->txq[VAR_2]);
 }
 return (0);
}
