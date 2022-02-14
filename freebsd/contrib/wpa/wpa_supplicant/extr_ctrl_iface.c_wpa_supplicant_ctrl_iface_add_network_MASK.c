
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_ssid {int id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int ,char*) ;
 struct wpa_ssid* FUNC_3 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_4(
 struct wpa_supplicant *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct wpa_ssid *VAR_4;
 int VAR_5;

 FUNC_2(VAR_0, "CTRL_IFACE: ADD_NETWORK");

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, "%d\n", VAR_4->id);
 if (FUNC_1(VAR_3, VAR_5))
  return -1;
 return VAR_5;
}
