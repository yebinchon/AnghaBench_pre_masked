
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 struct wpa_ssid* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct wpa_supplicant *VAR_1,
           char *VAR_2)
{
 FUNC_5(VAR_0, "CTRL_IFACE: 802.1X not included");
 return -1;

}
