
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ixgbe_dcb_tc_config {scalar_t__ pfc; } ;
struct ixgbe_dcb_config {struct ixgbe_dcb_tc_config* tc_config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct ixgbe_dcb_config *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct ixgbe_dcb_tc_config *VAR_5 = &VAR_2->tc_config[0];
 int VAR_6;





 for (*VAR_4 = 0, VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5[VAR_3[VAR_6]].pfc != VAR_1)
   *VAR_4 |= 1 << VAR_6;
 }
}
