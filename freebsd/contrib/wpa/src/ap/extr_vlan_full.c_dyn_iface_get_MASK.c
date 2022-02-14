
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* iface; } ;
struct hapd_interfaces {struct dynamic_iface* vlan_priv; } ;
struct dynamic_iface {int usage; int clean; struct dynamic_iface* next; int ifname; } ;
struct TYPE_2__ {struct hapd_interfaces* interfaces; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char const*,int) ;
 struct dynamic_iface* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_0, const char *VAR_1,
     int VAR_2)
{
 struct dynamic_iface *VAR_3, **VAR_4;
 struct hapd_interfaces *VAR_5;

 VAR_5 = VAR_0->iface->interfaces;
 VAR_4 = &VAR_5->vlan_priv;

 for (VAR_3 = *VAR_4; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_1, VAR_3->ifname) == 0)
   break;
 }

 if (VAR_3) {
  VAR_3->usage++;
  VAR_3->clean |= VAR_2;
  return;
 }

 if (!VAR_2)
  return;

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3)
  return;
 FUNC_1(VAR_3->ifname, VAR_1, sizeof(VAR_3->ifname));
 VAR_3->usage = 1;
 VAR_3->clean = VAR_2;
 VAR_3->next = *VAR_4;
 *VAR_4 = VAR_3;
}
