
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int ifname; struct wpa_supplicant* next; int const* own_addr; TYPE_1__* global; struct wpa_supplicant* parent; int pending_action_tx; scalar_t__ ap_iface; scalar_t__ p2p_mgmt; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int const*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct wpa_supplicant *
FUNC_4(struct wpa_supplicant *VAR_3, const u8 *VAR_4)
{
 struct wpa_supplicant *VAR_5;

 if (FUNC_0(VAR_4, VAR_3->own_addr, VAR_0) == 0) {
  return VAR_3;
 }




 VAR_5 = VAR_3->global->ifaces;
 while (VAR_5) {
  if (FUNC_0(VAR_4, VAR_5->own_addr, VAR_0) == 0)
   break;
  VAR_5 = VAR_5->next;
 }
 if (VAR_5) {
  FUNC_1(VAR_1, "P2P: Use group interface %s "
      "instead of interface %s for Action TX",
      VAR_5->ifname, VAR_3->ifname);
  return VAR_5;
 }

 return VAR_3;
}
