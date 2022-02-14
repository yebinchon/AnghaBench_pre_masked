
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ udma_id; int name; int ec_ints_base; int mac_ints_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_5)
{
 uint32_t VAR_6;
 FUNC_0("[%s]: ethernet interrupts handler\n", VAR_5->name);


 if (VAR_5->udma_id != 0)
  return -VAR_4;


 VAR_6 = FUNC_1(VAR_5->ec_ints_base, VAR_0);
 FUNC_0("[%s]: ethernet group A cause 0x%08x\n", VAR_5->name, VAR_6);
 if (VAR_6 & 1)
 {
  VAR_6 = FUNC_1(VAR_5->mac_ints_base, VAR_0);
  FUNC_0("[%s]: mac group A cause 0x%08x\n", VAR_5->name, VAR_6);

  VAR_6 = FUNC_1(VAR_5->mac_ints_base, VAR_1);
  FUNC_0("[%s]: mac group B cause 0x%08x\n", VAR_5->name, VAR_6);

  VAR_6 = FUNC_1(VAR_5->mac_ints_base, VAR_2);
  FUNC_0("[%s]: mac group C cause 0x%08x\n", VAR_5->name, VAR_6);

  VAR_6 = FUNC_1(VAR_5->mac_ints_base, VAR_3);
  FUNC_0("[%s]: mac group D cause 0x%08x\n", VAR_5->name, VAR_6);
 }
 VAR_6 = FUNC_1(VAR_5->ec_ints_base, VAR_1);
 FUNC_0("[%s]: ethernet group B cause 0x%08x\n", VAR_5->name, VAR_6);
 VAR_6 = FUNC_1(VAR_5->ec_ints_base, VAR_2);
 FUNC_0("[%s]: ethernet group C cause 0x%08x\n", VAR_5->name, VAR_6);
 VAR_6 = FUNC_1(VAR_5->ec_ints_base, VAR_3);
 FUNC_0("[%s]: ethernet group D cause 0x%08x\n", VAR_5->name, VAR_6);

 return 0;
}
