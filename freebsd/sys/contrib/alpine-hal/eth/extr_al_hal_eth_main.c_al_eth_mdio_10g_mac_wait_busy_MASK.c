
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {int name; TYPE_2__* mac_regs_base; } ;
struct TYPE_3__ {int mdio_cfg_status; } ;
struct TYPE_4__ {TYPE_1__ mac_10g; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct al_hal_eth_adapter *VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5;

 do {
  VAR_5 = FUNC_2(&VAR_3->mac_regs_base->mac_10g.mdio_cfg_status);






  if (VAR_5 & FUNC_0(0)){
   if (VAR_4 > 0)
    FUNC_1("eth [%s] mdio: still busy!\n", VAR_3->name);
  }else{
   return 0;
  }
  FUNC_3(VAR_1);
 }while(VAR_4++ < VAR_0);

 return -VAR_2;
}
