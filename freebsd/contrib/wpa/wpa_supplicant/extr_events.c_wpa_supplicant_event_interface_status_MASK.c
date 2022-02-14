
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ievent; int ifname; } ;
union wpa_event_data {TYPE_1__ interface_status; } ;
struct wpa_supplicant {int interface_removed; int drv_flags; TYPE_4__* global; int matched; struct wpa_supplicant* parent; int * l2; TYPE_2__* conf; int ifname; } ;
struct TYPE_7__ {int conf_p2p_dev; } ;
struct TYPE_8__ {int ifaces; struct wpa_supplicant* p2p_init_wpa_s; int p2p; TYPE_3__ params; int p2p_disabled; } ;
struct TYPE_6__ {int p2p_disabled; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 int FUNC_9 (TYPE_4__*,struct wpa_supplicant*,int ) ;
 int FUNC_10 (struct wpa_supplicant*,int ) ;
 int FUNC_11 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void
FUNC_12(struct wpa_supplicant *VAR_4,
          union wpa_event_data *VAR_5)
{
 if (FUNC_3(VAR_4->ifname, VAR_5->interface_status.ifname) != 0)
  return;

 switch (VAR_5->interface_status.ievent) {
 case 129:
  if (!VAR_4->interface_removed)
   break;
  VAR_4->interface_removed = 0;
  FUNC_4(VAR_4, VAR_0, "Configured interface was added");
  if (FUNC_7(VAR_4) < 0) {
   FUNC_5(VAR_4, VAR_1, "Failed to initialize the "
    "driver after interface was added");
  }
  break;
 case 128:
  FUNC_4(VAR_4, VAR_0, "Configured interface was removed");
  VAR_4->interface_removed = 1;
  FUNC_8(VAR_4);
  FUNC_10(VAR_4, VAR_3);
  FUNC_2(VAR_4->l2);
  VAR_4->l2 = ((void*)0);
  break;
 }
}
