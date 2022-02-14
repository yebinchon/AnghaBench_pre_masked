
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_hal_eth_adapter {int name; } ;
typedef enum al_eth_an_lt_lane { ____Placeholder_al_eth_an_lt_lane } al_eth_an_lt_lane ;
typedef scalar_t__ al_bool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int,int) ;
 int FUNC_3 (struct al_hal_eth_adapter*,int) ;

int FUNC_4(struct al_hal_eth_adapter *VAR_9,
         enum al_eth_an_lt_lane VAR_10,
         al_bool VAR_11,
         al_bool VAR_12)
{
 uint16_t VAR_13 = VAR_2 | VAR_4;

 FUNC_1("Eth [%s]: enable autonegotiation. lt_en %s",
  VAR_9->name, (VAR_12 == VAR_8) ? "yes" : "no");

 FUNC_2(VAR_9, VAR_5, VAR_7,
          VAR_10, FUNC_0(VAR_6));

 if (VAR_11 == VAR_8)
  VAR_13 |= VAR_3;

 FUNC_2(VAR_9, VAR_1, VAR_0,
          VAR_10, VAR_13);

 if (VAR_12 == VAR_8) {
  FUNC_3(VAR_9, VAR_10);
 }

 return 0;
}
