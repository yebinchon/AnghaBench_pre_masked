
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {scalar_t__ udma_id; int unit_regs; int mac_ints_base; int ec_ints_base; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct al_hal_eth_adapter *VAR_7)
{

 FUNC_1("eth [%s]: enable ethernet and mac interrupts\n", VAR_7->name);


 if (VAR_7->udma_id != 0)
  return -VAR_4;


 FUNC_2(VAR_7->ec_ints_base, VAR_0,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->ec_ints_base, VAR_1,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->ec_ints_base, VAR_2,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->ec_ints_base, VAR_3,
  VAR_6 | VAR_5);


 FUNC_3(VAR_7->ec_ints_base, VAR_0, 8);


 FUNC_2(VAR_7->mac_ints_base, VAR_0,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->mac_ints_base, VAR_1,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->mac_ints_base, VAR_2,
  VAR_6 | VAR_5);
 FUNC_2(VAR_7->mac_ints_base, VAR_3,
  VAR_6 | VAR_5);


 FUNC_3(VAR_7->mac_ints_base, VAR_1, FUNC_0(14));

 FUNC_3(VAR_7->unit_regs, VAR_3, FUNC_0(11));
 return 0;
}
