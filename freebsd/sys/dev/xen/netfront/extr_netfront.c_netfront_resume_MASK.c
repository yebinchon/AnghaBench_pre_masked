
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
 int FUNC_6 (struct netfront_info*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct netfront_info *VAR_2 = FUNC_4(VAR_1);
 u_int VAR_3;

 if (VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_queues; VAR_3++) {
   FUNC_0(&VAR_2->rxq[VAR_3]);
   FUNC_2(&VAR_2->txq[VAR_3]);
  }
  FUNC_5(VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_2->num_queues; VAR_3++) {
   FUNC_1(&VAR_2->rxq[VAR_3]);
   FUNC_3(&VAR_2->txq[VAR_3]);
  }
  return (0);
 }

 FUNC_6(VAR_2);
 return (0);
}
