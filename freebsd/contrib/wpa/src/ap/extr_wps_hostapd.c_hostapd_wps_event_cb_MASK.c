
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union wps_event_data {int pwd_auth_fail; int success; int fail; } ;
struct hostapd_data {int wps_event_cb_ctx; int (* wps_event_cb ) (int ,int,union wps_event_data*) ;int msg_ctx; } ;
typedef enum wps_event { ____Placeholder_wps_event } wps_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hostapd_data*,int *) ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct hostapd_data*,int *) ;
 int FUNC_3 (struct hostapd_data*) ;
 int FUNC_4 (struct hostapd_data*) ;
 int FUNC_5 (struct hostapd_data*) ;
 int FUNC_6 (struct hostapd_data*) ;
 int FUNC_7 (struct hostapd_data*,int *) ;
 int FUNC_8 (int ,int,union wps_event_data*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_7, enum wps_event VAR_8,
     union wps_event_data *VAR_9)
{
 struct hostapd_data *VAR_10 = VAR_7;

 switch (VAR_8) {
 case 134:
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_3);
  break;
 case 135:
  FUNC_2(VAR_10, &VAR_9->fail);
  break;
 case 128:
  FUNC_7(VAR_10, &VAR_9->success);
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_10, &VAR_9->pwd_auth_fail);
  break;
 case 131:
  FUNC_5(VAR_10);
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_4);
  break;
 case 130:
  FUNC_6(VAR_10);
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_6);
  break;
 case 133:
  FUNC_3(VAR_10);
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_1);
  break;
 case 132:
  FUNC_4(VAR_10);
  FUNC_9(VAR_10->msg_ctx, VAR_0, VAR_2);
  break;
 case 141:
  break;
 case 140:
  break;
 case 138:
  break;
 case 137:
  break;
 case 139:
  break;
 case 136:
  break;
 case 142:
  FUNC_1(VAR_10);
  break;
 }
 if (VAR_10->wps_event_cb)
  VAR_10->wps_event_cb(VAR_10->wps_event_cb_ctx, VAR_8, VAR_9);
}
