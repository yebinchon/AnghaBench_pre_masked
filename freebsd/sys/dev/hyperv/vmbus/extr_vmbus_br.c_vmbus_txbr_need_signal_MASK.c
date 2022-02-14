
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmbus_txbr {scalar_t__ txbr_rindex; scalar_t__ txbr_imask; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static __inline boolean_t
FUNC_2(const struct vmbus_txbr *VAR_2, uint32_t VAR_3)
{
 FUNC_1();
 if (VAR_2->txbr_imask)
  return (VAR_0);

 FUNC_0();





 if (VAR_3 == VAR_2->txbr_rindex)
  return (VAR_1);

 return (VAR_0);
}
