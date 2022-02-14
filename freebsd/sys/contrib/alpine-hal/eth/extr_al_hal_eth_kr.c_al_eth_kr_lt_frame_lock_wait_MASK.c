
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct al_hal_eth_adapter {int name; } ;
typedef enum al_eth_an_lt_lane { ____Placeholder_al_eth_an_lt_lane } al_eth_an_lt_lane ;
typedef int al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int) ;
 int FUNC_3 (char*,int ,scalar_t__,...) ;
 int FUNC_4 (int) ;

al_bool FUNC_5(struct al_hal_eth_adapter *VAR_6,
         enum al_eth_an_lt_lane VAR_7,
         uint32_t VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_3, VAR_7);

  if (FUNC_0(VAR_10, VAR_1)) {
   FUNC_3("[%s]: Failed on Training Failure."
          " loops %d PMD STATUS 0x%04x\n",
          VAR_6->name, VAR_9, VAR_10);

   return VAR_4;
  }
  if (FUNC_0(VAR_10,
   VAR_2)) {
   FUNC_1("[%s]: Frame lock received."
          " loops %d PMD STATUS 0x%04x\n",
          VAR_6->name, VAR_9, VAR_10);

   return VAR_5;
  }
  FUNC_4(1);
 }
 FUNC_3("[%s]: Failed on timeout. PMD STATUS 0x%04x\n",
   VAR_6->name, VAR_10);

 return VAR_4;
}
