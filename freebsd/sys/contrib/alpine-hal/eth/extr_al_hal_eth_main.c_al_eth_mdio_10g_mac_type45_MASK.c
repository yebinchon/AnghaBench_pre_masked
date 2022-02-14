
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct al_hal_eth_adapter {TYPE_2__* mac_regs_base; int name; } ;
struct TYPE_3__ {int mdio_cmd; int mdio_regaddr; int mdio_data; int mdio_cfg_status; } ;
struct TYPE_4__ {TYPE_1__ mac_10g; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char const*,...) ;
 int FUNC_2 (struct al_hal_eth_adapter*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int) ;

__attribute__((used)) static int FUNC_6(
 struct al_hal_eth_adapter *VAR_1,
 int VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint16_t *VAR_6)
{
 int VAR_7;
 const char *VAR_8 = (VAR_2 == 1) ? "read":"write";
 uint32_t VAR_9;
 uint16_t VAR_10;


 VAR_7 = FUNC_2(VAR_1);
 if (VAR_7) {
  FUNC_1(" %s mdio %s failed. HW is busy\n", VAR_1->name, VAR_8);
  return VAR_7;
 }

 VAR_10 = (uint16_t)(0x1F & VAR_4);
 VAR_10 |= (0x1F & VAR_3) << 5;
 FUNC_5(&VAR_1->mac_regs_base->mac_10g.mdio_cmd,
   VAR_10);


 FUNC_5(&VAR_1->mac_regs_base->mac_10g.mdio_regaddr, VAR_5);

 VAR_7 = FUNC_2(VAR_1);
 if (VAR_7) {
  FUNC_1(" %s mdio %s (address frame) failed on timeout\n", VAR_1->name, VAR_8);
  return VAR_7;
 }


 if (VAR_2) {
  VAR_10 |= FUNC_0(15);
  FUNC_5(
   (uint16_t *)&VAR_1->mac_regs_base->mac_10g.mdio_cmd,
   VAR_10);
 } else {
  FUNC_5(
   (uint16_t *)&VAR_1->mac_regs_base->mac_10g.mdio_data,
   *VAR_6);
 }

 VAR_7 = FUNC_2(VAR_1);
 if (VAR_7) {
  FUNC_1(" %s mdio %s failed on timeout\n", VAR_1->name, VAR_8);
  return VAR_7;
 }

 VAR_9 = FUNC_4(&VAR_1->mac_regs_base->mac_10g.mdio_cfg_status);

 if (VAR_9 & FUNC_0(1)){
  FUNC_1(" %s mdio %s failed on error. port 0x%x, device 0x%x reg 0x%x\n",
   VAR_1->name, VAR_8, VAR_3, VAR_4, VAR_5);
   return -VAR_0;
 }
 if (VAR_2)
  *VAR_6 = FUNC_3(
   (uint16_t *)&VAR_1->mac_regs_base->mac_10g.mdio_data);
 return 0;
}
