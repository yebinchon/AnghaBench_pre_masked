
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_rxbr {int rxbr_lock; int rxbr_rindex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmbus_rxbr*) ;
 int FUNC_3 (struct vmbus_rxbr*,int ,void*,int) ;

int
FUNC_4(struct vmbus_rxbr *VAR_1, void *VAR_2, int VAR_3)
{
 FUNC_0(&VAR_1->rxbr_lock);





 if (FUNC_2(VAR_1) < VAR_3 + sizeof(uint64_t)) {
  FUNC_1(&VAR_1->rxbr_lock);
  return (VAR_0);
 }
 FUNC_3(VAR_1, VAR_1->rxbr_rindex, VAR_2, VAR_3);

 FUNC_1(&VAR_1->rxbr_lock);

 return (0);
}
