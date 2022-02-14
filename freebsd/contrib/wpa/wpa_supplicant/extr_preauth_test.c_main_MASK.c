
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wpa_s ;
typedef int u8 ;
struct wpa_supplicant {int wpa; scalar_t__ auth_timed_out; TYPE_2__* conf; int * ctrl_iface; } ;
struct preauth_test_data {int wpa; scalar_t__ auth_timed_out; TYPE_2__* conf; int * ctrl_iface; } ;
typedef int preauth_test ;
struct TYPE_4__ {char* ctrl_interface; TYPE_1__* ssid; } ;
struct TYPE_3__ {int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,struct wpa_supplicant*) ;
 int FUNC_5 (int ,struct wpa_supplicant*) ;
 int FUNC_6 (int,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,int *) ;
 int FUNC_9 (struct wpa_supplicant*,int ,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int *,int *,int *,int ,int *,int ) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (int ,int *,int *) ;
 int FUNC_15 (struct wpa_supplicant*) ;
 TYPE_2__* FUNC_16 (char*,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (struct wpa_supplicant*,char*) ;
 int FUNC_18 (int ,char*) ;
 int * FUNC_19 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_20 (struct wpa_supplicant*,TYPE_1__*) ;

int FUNC_21(int VAR_7, char *VAR_8[])
{
 struct wpa_supplicant VAR_9;
 int VAR_10 = 1;
 u8 VAR_11[VAR_0];
 struct preauth_test_data VAR_12;

 if (FUNC_11())
  return -1;

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));

 VAR_5 = 0;
 VAR_6 = 1;

 if (VAR_7 != 4) {
  FUNC_13("usage: preauth_test <conf> <target MAC address> "
         "<ifname>\n");
  return -1;
 }

 if (FUNC_8(VAR_8[2], VAR_11)) {
  FUNC_13("Failed to parse target address '%s'.\n", VAR_8[2]);
  return -1;
 }

 if (FUNC_1()) {
  FUNC_18(VAR_1, "Failed to register EAP methods");
  return -1;
 }

 if (FUNC_3()) {
  FUNC_18(VAR_1, "Failed to initialize event loop");
  return -1;
 }

 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.conf = FUNC_16(VAR_8[1], ((void*)0));
 if (VAR_9.conf == ((void*)0)) {
  FUNC_13("Failed to parse configuration file '%s'.\n", VAR_8[1]);
  return -1;
 }
 if (VAR_9.conf->ssid == ((void*)0)) {
  FUNC_13("No networks defined.\n");
  return -1;
 }

 FUNC_17(&VAR_9, VAR_8[3]);
 VAR_9.ctrl_iface = FUNC_19(&VAR_9);
 if (VAR_9.ctrl_iface == ((void*)0)) {
  FUNC_13("Failed to initialize control interface '%s'.\n"
         "You may have another preauth_test process already "
         "running or the file was\n"
         "left by an unclean termination of preauth_test in "
         "which case you will need\n"
         "to manually remove this file before starting "
         "preauth_test again.\n",
         VAR_9.conf->ctrl_interface);
  return -1;
 }
 if (FUNC_20(&VAR_9, VAR_9.conf->ssid))
  return -1;

 if (FUNC_14(VAR_9.wpa, VAR_11, &VAR_9.conf->ssid->eap))
  return -1;

 FUNC_6(30, 0, VAR_4, &VAR_12, ((void*)0));
 FUNC_6(0, 100000, VAR_2, &VAR_9, ((void*)0));
 FUNC_5(VAR_3, &VAR_9);
 FUNC_4(VAR_3, &VAR_9);
 FUNC_7();

 if (VAR_12.auth_timed_out)
  VAR_10 = -2;
 else {
  VAR_10 = FUNC_12(VAR_9.wpa, ((void*)0), VAR_11, ((void*)0), 0,
           ((void*)0), 0) ? 0 : -3;
 }

 FUNC_15(&VAR_9);

 FUNC_0();

 FUNC_2();

 FUNC_10();

 return VAR_10;
}
