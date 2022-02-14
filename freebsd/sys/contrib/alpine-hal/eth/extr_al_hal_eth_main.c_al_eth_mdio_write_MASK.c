
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct al_hal_eth_adapter {scalar_t__ mdio_if; scalar_t__ mdio_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct al_hal_eth_adapter*,int ,int ,int ,int *) ;
 int FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct al_hal_eth_adapter*,int ,int ,int ) ;
 int FUNC_4 (struct al_hal_eth_adapter*) ;
 int FUNC_5 (struct al_hal_eth_adapter*) ;

int FUNC_6(struct al_hal_eth_adapter *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint16_t VAR_6)
{
 int VAR_7;
 FUNC_0("eth mdio write: phy_addr %x, device %x, reg %x, val %x\n", VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_7 = FUNC_5(VAR_2);

 if (VAR_7)
  return VAR_7;

 if (VAR_2->mdio_if == VAR_0)
  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
 else
  if (VAR_2->mdio_type == VAR_1)
   VAR_7 = FUNC_1(VAR_2, 0, VAR_3, VAR_5, &VAR_6);
  else
   VAR_7 = FUNC_2(VAR_2, 0, VAR_3, VAR_4, VAR_5, &VAR_6);

 FUNC_4(VAR_2);
 return VAR_7;
}
