
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_iface {TYPE_3__* interfaces; TYPE_2__** bss; TYPE_1__* conf; scalar_t__ wait_channel_update; } ;
struct TYPE_6__ {scalar_t__ terminate_on_error; } ;
struct TYPE_5__ {int msg_ctx; } ;
struct TYPE_4__ {scalar_t__ ieee80211h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hostapd_iface*) ;
 scalar_t__ FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (struct hostapd_iface*) ;
 int FUNC_4 (struct hostapd_iface*,int ) ;
 int FUNC_5 (struct hostapd_iface*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct hostapd_iface *VAR_5)
{
 VAR_5->wait_channel_update = 0;

 if (FUNC_2(VAR_5)) {


 } else {
  int VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 < 0) {
   FUNC_7(VAR_3, "Could not select hw_mode and "
       "channel. (%d)", VAR_6);
   goto fail;
  }
  if (VAR_6 == 1) {
   FUNC_7(VAR_2, "Interface initialization will be completed in a callback (ACS)");
   return 0;
  }
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0)
   goto fail;
  if (VAR_6 == 1) {
   FUNC_7(VAR_2, "Interface initialization will "
       "be completed in a callback");
   return 0;
  }

  if (VAR_5->conf->ieee80211h)
   FUNC_7(VAR_2, "DFS support is enabled");
 }
 return FUNC_5(VAR_5, 0);

fail:
 FUNC_4(VAR_5, VAR_1);
 FUNC_6(VAR_5->bss[0]->msg_ctx, VAR_4, VAR_0);
 if (VAR_5->interfaces && VAR_5->interfaces->terminate_on_error)
  FUNC_0();
 return -1;
}
