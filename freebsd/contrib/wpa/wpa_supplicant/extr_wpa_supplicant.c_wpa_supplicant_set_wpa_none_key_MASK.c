
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int group_cipher; } ;
struct wpa_ssid {scalar_t__ mode; int psk; int psk_set; } ;
typedef int key ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct wpa_supplicant*,int,int *,int ,int,int *,int,int *,size_t) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,...) ;

int FUNC_4(struct wpa_supplicant *VAR_5,
        struct wpa_ssid *VAR_6)
{
 u8 VAR_7[32];
 size_t VAR_8;
 enum wpa_alg VAR_9;
 u8 VAR_10[6] = { 0 };
 int VAR_11;




 if (VAR_6->mode != VAR_1) {
  FUNC_3(VAR_5, VAR_0, "WPA: Invalid mode %d (not "
   "IBSS/ad-hoc) for WPA-None", VAR_6->mode);
  return -1;
 }

 if (!VAR_6->psk_set) {
  FUNC_3(VAR_5, VAR_0, "WPA: No PSK configured for "
   "WPA-None");
  return -1;
 }

 switch (VAR_5->group_cipher) {
 case 130:
  FUNC_0(VAR_7, VAR_6->psk, 16);
  VAR_8 = 16;
  VAR_9 = VAR_2;
  break;
 case 129:
  FUNC_0(VAR_7, VAR_6->psk, 16);
  VAR_8 = 16;
  VAR_9 = VAR_3;
  break;
 case 128:

  FUNC_0(VAR_7, VAR_6->psk, 16 + 8);
  FUNC_0(VAR_7 + 16 + 8, VAR_6->psk + 16, 8);
  VAR_8 = 32;
  VAR_9 = VAR_4;
  break;
 default:
  FUNC_3(VAR_5, VAR_0, "WPA: Invalid group cipher %d for "
   "WPA-None", VAR_5->group_cipher);
  return -1;
 }




 VAR_11 = FUNC_2(VAR_5, VAR_9, ((void*)0), 0, 1, VAR_10, 6, VAR_7, VAR_8);
 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 return VAR_11;
}
