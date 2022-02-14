
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 size_t FUNC_3 (char*,char*,size_t) ;
 struct wpa_ssid* FUNC_4 (int ,int) ;
 char* FUNC_5 (struct wpa_ssid*,char*) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(
 struct wpa_supplicant *VAR_1, char *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 struct wpa_ssid *VAR_7;
 char *VAR_8, *VAR_9;


 VAR_8 = FUNC_2(VAR_2, ' ');
 if (VAR_8 == ((void*)0) || VAR_4 == 0)
  return -1;
 *VAR_8++ = '\0';

 VAR_5 = FUNC_0(VAR_2);
 FUNC_6(VAR_0, "CTRL_IFACE: GET_NETWORK id=%d name='%s'",
     VAR_5, VAR_8);

 VAR_7 = FUNC_4(VAR_1->conf, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_0, "CTRL_IFACE: Could not find network "
      "id=%d", VAR_5);
  return -1;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_0, "CTRL_IFACE: Failed to get network "
      "variable '%s'", VAR_8);
  return -1;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_9, VAR_4);
 if (VAR_6 >= VAR_4) {
  FUNC_1(VAR_9);
  return -1;
 }

 FUNC_1(VAR_9);

 return VAR_6;
}
