
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_hal_eth_adapter {int dummy; } ;
struct al_eth_kr_coef_up_data {int c_plus; int c_zero; int c_minus; scalar_t__ initialize; scalar_t__ preset; } ;
typedef enum al_eth_an_lt_lane { ____Placeholder_al_eth_an_lt_lane } al_eth_an_lt_lane ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int,int ) ;

void FUNC_3(
   struct al_hal_eth_adapter *VAR_10,
   enum al_eth_an_lt_lane VAR_11,
   struct al_eth_kr_coef_up_data *VAR_12)
{
 uint16_t VAR_13 = 0;

 if (VAR_12->preset)
  FUNC_0(VAR_13, VAR_6);

 if (VAR_12->initialize)
  FUNC_0(VAR_13, VAR_1);

 FUNC_1(VAR_13,
    VAR_2,
    VAR_3,
    VAR_12->c_minus);

 FUNC_1(VAR_13,
    VAR_7,
    VAR_8,
    VAR_12->c_zero);

 FUNC_1(VAR_13,
    VAR_4,
    VAR_5,
    VAR_12->c_plus);

 FUNC_2(VAR_10, VAR_0, VAR_9, VAR_11, VAR_13);
}
