
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_hal_eth_adapter {int dummy; } ;
struct al_eth_kr_status_report_data {scalar_t__ receiver_ready; int c_plus; int c_zero; int c_minus; } ;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct al_hal_eth_adapter*,int ,int ,int,int ) ;

void FUNC_3(
   struct al_hal_eth_adapter *VAR_9,
   enum al_eth_an_lt_lane VAR_10,
   struct al_eth_kr_status_report_data *VAR_11)
{
 uint16_t VAR_12 = 0;

 FUNC_1(VAR_12,
    VAR_1,
    VAR_2,
    VAR_11->c_minus);

 FUNC_1(VAR_12,
    VAR_6,
    VAR_7,
    VAR_11->c_zero);

 FUNC_1(VAR_12,
    VAR_3,
    VAR_4,
    VAR_11->c_plus);

 if (VAR_11->receiver_ready)
  FUNC_0(VAR_12,
   VAR_5);

 FUNC_2(VAR_9, VAR_0, VAR_8, VAR_10, VAR_12);
}
