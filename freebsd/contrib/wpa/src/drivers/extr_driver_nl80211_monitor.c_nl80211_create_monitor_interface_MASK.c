
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_driver_nl80211_data {int device_ap_sme; scalar_t__ monitor_sock; int monitor_refcount; int monitor_ifidx; TYPE_2__* global; TYPE_1__* first_bss; } ;
struct sockaddr_ll {int sll_ifindex; int sll_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int optval ;
typedef int ll ;
typedef int buf ;
struct TYPE_4__ {int ioctl_sock; } ;
struct TYPE_3__ {char* ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,struct wpa_driver_nl80211_data*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct sockaddr_ll*,int ,int) ;
 int FUNC_6 (struct wpa_driver_nl80211_data*,char*,int ,int *,int ,int *,int *,int ) ;
 int FUNC_7 (struct wpa_driver_nl80211_data*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ,int*,int) ;
 int FUNC_11 (char*,int,char*,char*) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;

int FUNC_15(struct wpa_driver_nl80211_data *VAR_14)
{
 char VAR_15[VAR_3];
 struct sockaddr_ll VAR_16;
 int VAR_17;
 socklen_t VAR_18;

 if (VAR_14->monitor_ifidx >= 0) {
  VAR_14->monitor_refcount++;
  FUNC_14(VAR_4, "nl80211: Re-use existing monitor interface: refcount=%d",
      VAR_14->monitor_refcount);
  return 0;
 }

 if (FUNC_9(VAR_14->first_bss->ifname, "p2p-", 4) == 0) {






  FUNC_11(VAR_15, VAR_3, "mon-%s", VAR_14->first_bss->ifname + 4);
 } else {
  int VAR_19;


  VAR_19 = FUNC_8(VAR_15, VAR_3, "mon.%s",
      VAR_14->first_bss->ifname);
  if (VAR_19 >= (int) sizeof(VAR_15))
   FUNC_14(VAR_4,
       "nl80211: Monitor interface name has been truncated to %s",
       VAR_15);
  else if (VAR_19 < 0)
   return VAR_19;
 }

 VAR_15[VAR_3 - 1] = '\0';

 VAR_14->monitor_ifidx =
  FUNC_6(VAR_14, VAR_15, VAR_7, ((void*)0),
         0, ((void*)0), ((void*)0), 0);

 if (VAR_14->monitor_ifidx == -VAR_1) {






  FUNC_14(VAR_4, "nl80211: Driver does not support "
      "monitor interface type - try to run without it");
  VAR_14->device_ap_sme = 1;
 }

 if (VAR_14->monitor_ifidx < 0)
  return -1;

 if (FUNC_4(VAR_14->global->ioctl_sock, VAR_15, 1))
  goto error;

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.sll_family = VAR_0;
 VAR_16.sll_ifindex = VAR_14->monitor_ifidx;
 VAR_14->monitor_sock = FUNC_12(VAR_8, VAR_9, FUNC_3(VAR_2));
 if (VAR_14->monitor_sock < 0) {
  FUNC_14(VAR_5, "nl80211: socket[PF_PACKET,SOCK_RAW] failed: %s",
      FUNC_13(VAR_12));
  goto error;
 }

 if (FUNC_0(VAR_14->monitor_sock)) {
  FUNC_14(VAR_6, "Failed to set socket filter for monitor "
      "interface; do filtering in user space");

 }

 if (FUNC_1(VAR_14->monitor_sock, (struct sockaddr *) &VAR_16, sizeof(VAR_16)) < 0) {
  FUNC_14(VAR_5, "nl80211: monitor socket bind failed: %s",
      FUNC_13(VAR_12));
  goto error;
 }

 VAR_18 = sizeof(VAR_17);
 VAR_17 = 20;
 if (FUNC_10
     (VAR_14->monitor_sock, VAR_10, VAR_11, &VAR_17, VAR_18)) {
  FUNC_14(VAR_5, "nl80211: Failed to set socket priority: %s",
      FUNC_13(VAR_12));
  goto error;
 }

 if (FUNC_2(VAR_14->monitor_sock, VAR_13,
         VAR_14, ((void*)0))) {
  FUNC_14(VAR_6, "nl80211: Could not register monitor read socket");
  goto error;
 }

 VAR_14->monitor_refcount++;
 return 0;
 error:
 FUNC_7(VAR_14);
 return -1;
}
