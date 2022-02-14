
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int eapol; int conf; int dbus_new_path; } ;
struct wpa_ssid {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ,char const**,int ,char const**,int ,char const**,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int *,int) ;
 struct wpa_ssid* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*,char const*,char const*) ;
 int * FUNC_8 (int *,char const*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;
 char* FUNC_11 (char const*,int ,char**) ;

DBusMessage * FUNC_12(DBusMessage *VAR_6,
           struct wpa_supplicant *VAR_7)
{
 FUNC_6(VAR_3, "dbus: 802.1X not included");
 return FUNC_10(VAR_6, "802.1X not included");

}
