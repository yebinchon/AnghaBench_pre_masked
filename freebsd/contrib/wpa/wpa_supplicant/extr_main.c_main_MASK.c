
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_params {int dbus_ctrl_interface; int match_iface_count; struct wpa_params* pid_file; struct wpa_params* match_ifaces; int * ctrl_interface; int * ifname; int * confname; int wait_for_monitor; int wpa_debug_timestamp; int wpa_debug_tracing; int wpa_debug_syslog; int wpa_debug_level; void* driver_param; void* override_ctrl_interface; void* override_driver; void* conf_p2p_dev; int wpa_debug_show_keys; void* confanother; void* ctrl_interface_group; void* wpa_debug_file_path; void* entropy_file; void* driver; int daemonize; void* bridge_ifname; } ;
struct wpa_interface {int dbus_ctrl_interface; int match_iface_count; struct wpa_interface* pid_file; struct wpa_interface* match_ifaces; int * ctrl_interface; int * ifname; int * confname; int wait_for_monitor; int wpa_debug_timestamp; int wpa_debug_tracing; int wpa_debug_syslog; int wpa_debug_level; void* driver_param; void* override_ctrl_interface; void* override_driver; void* conf_p2p_dev; int wpa_debug_show_keys; void* confanother; void* ctrl_interface_group; void* wpa_debug_file_path; void* entropy_file; void* driver; int daemonize; void* bridge_ifname; } ;
struct wpa_global {int dummy; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 void* VAR_4 ;
 int FUNC_5 (struct wpa_params*) ;
 int FUNC_6 (struct wpa_params*,int ,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 struct wpa_params* FUNC_9 (struct wpa_params*,int,int) ;
 struct wpa_params* FUNC_10 (void*) ;
 struct wpa_params* FUNC_11 (int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*) ;
 struct wpa_supplicant* FUNC_15 (struct wpa_global*,struct wpa_params*,int *) ;
 int FUNC_16 (struct wpa_global*) ;
 int FUNC_17 (int) ;
 struct wpa_global* FUNC_18 (struct wpa_params*) ;
 int FUNC_19 (struct wpa_global*) ;
 int FUNC_20 (struct wpa_global*) ;
 char* VAR_5 ;

int FUNC_21(int VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9;
 struct wpa_interface *VAR_10, *VAR_11;
 int VAR_12, VAR_13 = -1;
 struct wpa_params VAR_14;
 struct wpa_global *VAR_15;

 if (FUNC_8())
  return -1;

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.wpa_debug_level = VAR_1;

 VAR_11 = VAR_10 = FUNC_11(sizeof(struct wpa_interface));
 if (VAR_10 == ((void*)0))
  return -1;
 VAR_12 = 1;

 FUNC_17(1);






 for (;;) {
  VAR_8 = FUNC_3(VAR_6, VAR_7,
      "b:Bc:C:D:de:f:g:G:hi:I:KLMm:No:O:p:P:qsTtuvW");
  if (VAR_8 < 0)
   break;
  switch (VAR_8) {
  case 'b':
   VAR_11->bridge_ifname = VAR_4;
   break;
  case 'B':
   VAR_14.daemonize++;
   break;
  case 'c':
   VAR_11->confname = VAR_4;
   break;
  case 'C':
   VAR_11->ctrl_interface = VAR_4;
   break;
  case 'D':
   VAR_11->driver = VAR_4;
   break;
  case 'd':






   VAR_14.wpa_debug_level--;
   break;

  case 'e':
   VAR_14.entropy_file = VAR_4;
   break;





  case 'g':
   VAR_14.ctrl_interface = VAR_4;
   break;
  case 'G':
   VAR_14.ctrl_interface_group = VAR_4;
   break;
  case 'h':
   FUNC_13();
   VAR_13 = 0;
   goto out;
  case 'i':
   VAR_11->ifname = VAR_4;
   break;
  case 'I':
   VAR_11->confanother = VAR_4;
   break;
  case 'K':
   VAR_14.wpa_debug_show_keys++;
   break;
  case 'L':
   FUNC_4();
   VAR_13 = 0;
   goto out;





  case 'o':
   VAR_14.override_driver = VAR_4;
   break;
  case 'O':
   VAR_14.override_ctrl_interface = VAR_4;
   break;
  case 'p':
   VAR_11->driver_param = VAR_4;
   break;
  case 'P':
   FUNC_5(VAR_14.pid_file);
   VAR_14.pid_file = FUNC_10(VAR_4);
   break;
  case 'q':
   VAR_14.wpa_debug_level++;
   break;
  case 't':
   VAR_14.wpa_debug_timestamp++;
   break;





  case 'v':
   FUNC_12("%s\n", VAR_5);
   VAR_13 = 0;
   goto out;
  case 'W':
   VAR_14.wait_for_monitor++;
   break;
  case 'N':
   VAR_12++;
   VAR_11 = FUNC_9(VAR_10, VAR_12,
       sizeof(struct wpa_interface));
   if (VAR_11 == ((void*)0))
    goto out;
   VAR_10 = VAR_11;
   VAR_11 = &VAR_10[VAR_12 - 1];
   FUNC_6(VAR_11, 0, sizeof(*VAR_11));
   break;
  default:
   FUNC_13();
   VAR_13 = 0;
   goto out;
  }
 }

 VAR_13 = 0;
 VAR_15 = FUNC_18(&VAR_14);
 if (VAR_15 == ((void*)0)) {
  FUNC_14(VAR_0, "Failed to initialize wpa_supplicant");
  VAR_13 = -1;
  goto out;
 } else {
  FUNC_14(VAR_1, "Successfully initialized "
      "wpa_supplicant");
 }

 if (FUNC_2()) {
  FUNC_14(VAR_0, "Failed to initialize FST");
  VAR_13 = -1;
  goto out;
 }






 for (VAR_9 = 0; VAR_13 == 0 && VAR_9 < VAR_12; VAR_9++) {
  struct wpa_supplicant *VAR_16;

  if ((VAR_10[VAR_9].confname == ((void*)0) &&
       VAR_10[VAR_9].ctrl_interface == ((void*)0)) ||
      VAR_10[VAR_9].ifname == ((void*)0)) {
   if (VAR_12 == 1 && (VAR_14.ctrl_interface ||



       VAR_14.dbus_ctrl_interface))
    break;
   FUNC_13();
   VAR_13 = -1;
   break;
  }
  VAR_16 = FUNC_15(VAR_15, &VAR_10[VAR_9], ((void*)0));
  if (VAR_16 == ((void*)0)) {
   VAR_13 = -1;
   break;
  }
 }






 if (VAR_13 == 0)
  VAR_13 = FUNC_20(VAR_15);

 FUNC_16(VAR_15);

 FUNC_1();

out:
 FUNC_17(0);
 FUNC_5(VAR_10);



 FUNC_5(VAR_14.pid_file);

 FUNC_7();

 return VAR_13;
}
