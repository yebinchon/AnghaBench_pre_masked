
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vmbus_rxbr {scalar_t__ rxbr_dsize; scalar_t__ rxbr_rindex; int rxbr_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct vmbus_rxbr*) ;
 scalar_t__ FUNC_6 (struct vmbus_rxbr*,scalar_t__,void*,int) ;

int
FUNC_7(struct vmbus_rxbr *VAR_1, void *VAR_2, int VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6 = VAR_1->rxbr_dsize;

 FUNC_0(VAR_3 + VAR_4 > 0, ("invalid dlen %d, offset %u", VAR_3, VAR_4));

 FUNC_3(&VAR_1->rxbr_lock);

 if (FUNC_5(VAR_1) < VAR_3 + VAR_4 + sizeof(uint64_t)) {
  FUNC_4(&VAR_1->rxbr_lock);
  return (VAR_0);
 }




 VAR_5 = FUNC_1(VAR_1->rxbr_rindex, VAR_4, VAR_6);
 VAR_5 = FUNC_6(VAR_1, VAR_5, VAR_2, VAR_3);




 VAR_5 = FUNC_1(VAR_5, sizeof(uint64_t), VAR_6);




 FUNC_2();
 VAR_1->rxbr_rindex = VAR_5;

 FUNC_4(&VAR_1->rxbr_lock);

 return (0);
}
