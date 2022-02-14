
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ifindex; scalar_t__ ievent; int ifname; } ;
union wpa_event_data {TYPE_2__ interface_status; } ;
struct wpa_supplicant {int matched; int drv_priv; TYPE_1__* driver; } ;
struct wpa_interface {int dummy; } ;
typedef enum wpa_event_type { ____Placeholder_wpa_event_type } wpa_event_type ;
struct TYPE_3__ {unsigned int (* get_ifindex ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_interface*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,unsigned int,unsigned int) ;
 struct wpa_supplicant* FUNC_3 (void*,struct wpa_interface*,int *) ;
 int FUNC_4 (struct wpa_supplicant*,int,union wpa_event_data*) ;
 struct wpa_supplicant* FUNC_5 (void*,int ) ;
 struct wpa_interface* FUNC_6 (void*,int ) ;

void FUNC_7(void *VAR_3, enum wpa_event_type VAR_4,
     union wpa_event_data *VAR_5)
{
 struct wpa_supplicant *VAR_6;

 if (VAR_4 != VAR_1)
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_5->interface_status.ifname);
 if (VAR_6 && VAR_6->driver->get_ifindex) {
  unsigned int VAR_7;

  VAR_7 = VAR_6->driver->get_ifindex(VAR_6->drv_priv);
  if (VAR_7 != VAR_5->interface_status.ifindex) {
   FUNC_2(VAR_6, VAR_2,
    "interface status ifindex %d mismatch (%d)",
    VAR_7, VAR_5->interface_status.ifindex);
   return;
  }
 }
 if (VAR_6)
  FUNC_4(VAR_6, VAR_4, VAR_5);
}
