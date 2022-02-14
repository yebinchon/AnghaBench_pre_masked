
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {scalar_t__ rev_id; int name; } ;
struct al_eth_an_adv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct al_hal_eth_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct al_hal_eth_adapter*) ;
 int FUNC_3 (struct al_hal_eth_adapter*,struct al_eth_an_adv*) ;
 int FUNC_4 (struct al_hal_eth_adapter*,struct al_eth_an_adv*) ;

int FUNC_5(struct al_hal_eth_adapter *VAR_4,
        struct al_eth_an_adv *VAR_5)
{
 int VAR_6;

 if (VAR_4->rev_id > VAR_3)
  FUNC_2(VAR_4);

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;


 FUNC_1(VAR_4, VAR_2, VAR_0, VAR_1);

 FUNC_0("[%s]: autonegotiation initialized successfully", VAR_4->name);
 return 0;
}
