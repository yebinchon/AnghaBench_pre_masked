
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atheros_driver_data {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct atheros_driver_data*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct atheros_driver_data *VAR_1,
          int VAR_2, char *VAR_3, int VAR_4)
{
 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_0, "WEXT: EV_P2P_SEND_ACTION_CB");
  FUNC_0(VAR_1);
  break;
 case 128:
  FUNC_1(VAR_0, "WEXT: EV_RX_MGMT");
  FUNC_0(VAR_1);
  break;
 default:
  break;
 }
}
