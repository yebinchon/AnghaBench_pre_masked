
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ifindex; int ifname; } ;
union wpa_event_data {TYPE_2__ interface_status; } ;
struct wpa_priv_interface {int ifname; int drv_priv; TYPE_1__* driver; struct wpa_priv_interface* next; } ;
struct wpa_priv_global {struct wpa_priv_interface* interfaces; } ;
typedef enum wpa_event_type { ____Placeholder_wpa_event_type } wpa_event_type ;
struct TYPE_3__ {unsigned int (* get_ifindex ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct wpa_priv_interface*,int,union wpa_event_data*) ;

void FUNC_4(void *VAR_2, enum wpa_event_type VAR_3,
     union wpa_event_data *VAR_4)
{
 struct wpa_priv_global *VAR_5 = VAR_2;
 struct wpa_priv_interface *VAR_6;

 if (VAR_3 != VAR_0)
  return;

 for (VAR_6 = VAR_5->interfaces; VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_0(VAR_6->ifname, VAR_4->interface_status.ifname) ==
      0)
   break;
 }
 if (VAR_6 && VAR_6->driver->get_ifindex) {
  unsigned int VAR_7;

  VAR_7 = VAR_6->driver->get_ifindex(VAR_6->drv_priv);
  if (VAR_7 != VAR_4->interface_status.ifindex) {
   FUNC_2(VAR_1,
       "%s: interface status ifindex %d mismatch (%d)",
       VAR_6->ifname, VAR_7,
       VAR_4->interface_status.ifindex);
   return;
  }
 }
 if (VAR_6)
  FUNC_3(VAR_6, VAR_3, VAR_4);
}
