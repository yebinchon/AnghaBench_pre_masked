
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {char* pending_interface_name; TYPE_1__* global; int pending_interface_addr; int pending_interface_type; } ;
struct TYPE_2__ {scalar_t__ pending_group_iface_for_p2ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(
 struct wpa_supplicant *VAR_2)
{
 if (!VAR_2->pending_interface_name[0] ||
     FUNC_0(VAR_2->pending_interface_addr))
  return;

 FUNC_3(VAR_1, "P2P: Removing pending group interface %s",
     VAR_2->pending_interface_name);
 FUNC_2(VAR_2, VAR_2->pending_interface_type,
     VAR_2->pending_interface_name);
 FUNC_1(VAR_2->pending_interface_addr, 0, VAR_0);
 VAR_2->pending_interface_name[0] = '\0';
 VAR_2->global->pending_group_iface_for_p2ps = 0;
}
