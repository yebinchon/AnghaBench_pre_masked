
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; int ifname; } ;
struct wpa_ssid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (struct wpa_ssid*,char*) ;
 struct wpa_ssid* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*,char*,char*) ;

__attribute__((used)) static int FUNC_7(
 struct wpa_supplicant *VAR_1, char *VAR_2,
 struct wpa_supplicant *VAR_3)
{
 struct wpa_ssid *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 VAR_7 = FUNC_2(VAR_2, ' ');
 if (VAR_7 == ((void*)0))
  return -1;
 *VAR_7++ = '\0';

 VAR_6 = FUNC_2(VAR_7, ' ');
 if (VAR_6 == ((void*)0))
  return -1;
 *VAR_6++ = '\0';

 VAR_9 = FUNC_0(VAR_2);
 VAR_10 = FUNC_0(VAR_7);

 FUNC_5(VAR_0,
     "CTRL_IFACE: DUP_NETWORK ifname=%s->%s id=%d->%d name='%s'",
     VAR_1->ifname, VAR_3->ifname, VAR_9, VAR_10, VAR_6);

 VAR_4 = FUNC_4(VAR_1->conf, VAR_9);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_0, "CTRL_IFACE: Could not find "
      "network id=%d", VAR_9);
  return -1;
 }

 VAR_5 = FUNC_4(VAR_3->conf, VAR_10);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_0, "CTRL_IFACE: Could not find "
      "network id=%d", VAR_10);
  return -1;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_0, "CTRL_IFACE: Failed to get network "
      "variable '%s'", VAR_6);
  return -1;
 }

 VAR_11 = FUNC_6(VAR_3, VAR_5, VAR_6,
             VAR_8);

 FUNC_1(VAR_8);

 return VAR_11;
}
