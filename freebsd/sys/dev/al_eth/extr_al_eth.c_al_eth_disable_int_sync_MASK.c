
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_eth_adapter {scalar_t__ board_type; scalar_t__ internal_pcie_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct al_eth_adapter*) ;

__attribute__((used)) static void
FUNC_2(struct al_eth_adapter *VAR_4)
{


 if ((VAR_4->board_type == VAR_0) ||
     (VAR_4->board_type == VAR_1)) {
  FUNC_0((uint32_t*)VAR_4->internal_pcie_base +
      VAR_3, VAR_2);
 }


 FUNC_1(VAR_4);
}
