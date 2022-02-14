
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {int name; } ;
typedef enum al_eth_an_lt_lane { ____Placeholder_al_eth_an_lt_lane } al_eth_an_lt_lane ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int,int) ;

void FUNC_3(struct al_hal_eth_adapter *VAR_4,
     enum al_eth_an_lt_lane VAR_5)
{
 FUNC_1("[%s]: KR LT Restart Link Training.\n", VAR_4->name);

 FUNC_2(VAR_4, VAR_0, VAR_3,
          VAR_5, (FUNC_0(VAR_1) |
          FUNC_0(VAR_2)));
}
