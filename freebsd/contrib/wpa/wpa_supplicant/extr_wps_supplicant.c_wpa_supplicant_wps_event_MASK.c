
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enrollee; } ;
union wps_event_data {int set_sel_reg; int ap_settings; int enrollee; int ap; TYPE_1__ pwd_auth_fail; int fail; int m2d; } ;
struct wpa_supplicant {int ap_iface; } ;
typedef enum wps_event { ____Placeholder_wps_event } wps_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*,int *) ;
 int FUNC_4 (struct wpa_supplicant*,int *) ;
 int FUNC_5 (struct wpa_supplicant*,int *) ;
 int FUNC_6 (struct wpa_supplicant*,int *) ;
 int FUNC_7 (struct wpa_supplicant*,int *) ;
 int FUNC_8 (struct wpa_supplicant*,int *) ;
 int FUNC_9 (struct wpa_supplicant*,int *) ;
 int FUNC_10 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_11(void *VAR_3, enum wps_event VAR_4,
         union wps_event_data *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_3;
 switch (VAR_4) {
 case 134:
  FUNC_9(VAR_6, &VAR_5->m2d);
  break;
 case 135:
  FUNC_8(VAR_6, &VAR_5->fail);
  break;
 case 128:
  FUNC_10(VAR_6);
  break;
 case 129:




  break;
 case 131:
  break;
 case 130:
  break;
 case 133:
  FUNC_0(VAR_6, VAR_0, VAR_1);
  break;
 case 132:
  FUNC_0(VAR_6, VAR_0, VAR_2);
  break;
 case 141:
  FUNC_2(VAR_6, &VAR_5->ap);
  break;
 case 140:
  FUNC_3(VAR_6, &VAR_5->ap);
  break;
 case 138:
  FUNC_5(VAR_6,
        &VAR_5->enrollee);
  break;
 case 137:
  FUNC_6(VAR_6,
           &VAR_5->enrollee);
  break;
 case 139:
  FUNC_4(VAR_6,
       &VAR_5->ap_settings);
  break;
 case 136:
  FUNC_7(VAR_6,
       &VAR_5->set_sel_reg);
  break;
 case 142:
  break;
 }
}
