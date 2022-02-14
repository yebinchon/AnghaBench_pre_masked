
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_hal_eth_adapter {int dummy; } ;
typedef enum al_eth_an_lt_lane { ____Placeholder_al_eth_an_lt_lane } al_eth_an_lt_lane ;
typedef int al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct al_hal_eth_adapter*,int ,int ,int) ;

al_bool FUNC_2(struct al_hal_eth_adapter *VAR_3,
        enum al_eth_an_lt_lane VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_2, VAR_4);

 return (FUNC_0(VAR_5, VAR_1) != 0);
}
