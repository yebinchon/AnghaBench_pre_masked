
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_first_connection_timeout; int ifname; scalar_t__ p2p_go_do_acs; int p2p_go_acs_band; struct wpa_supplicant* p2pdev; struct wpa_supplicant* parent; scalar_t__ p2p_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 struct wpa_supplicant* FUNC_5 (struct wpa_supplicant*,int) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static struct wpa_supplicant *
FUNC_7(struct wpa_supplicant *VAR_4, int VAR_5,
    int VAR_6)
{
 struct wpa_supplicant *VAR_7;

 if (!FUNC_4(VAR_4)) {
  if (VAR_4->p2p_mgmt) {





   VAR_4->parent->p2pdev = VAR_4;
   VAR_4 = VAR_4->parent;
  }
  FUNC_0(VAR_4, VAR_0,
   "P2P: Use primary interface for group operations");
  VAR_4->p2p_first_connection_timeout = 0;
  if (VAR_4 != VAR_4->p2pdev)
   FUNC_3(VAR_4, VAR_4->p2pdev);
  return VAR_4;
 }

 if (FUNC_2(VAR_4, VAR_6 ? VAR_3 :
      VAR_2) < 0) {
  FUNC_1(VAR_4, VAR_1,
          "P2P: Failed to add group interface");
  return ((void*)0);
 }
 VAR_7 = FUNC_5(VAR_4, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_1,
          "P2P: Failed to initialize group interface");
  FUNC_6(VAR_4);
  return ((void*)0);
 }

 if (VAR_6 && VAR_4->p2p_go_do_acs) {
  VAR_7->p2p_go_do_acs = VAR_4->p2p_go_do_acs;
  VAR_7->p2p_go_acs_band = VAR_4->p2p_go_acs_band;
  VAR_4->p2p_go_do_acs = 0;
 }

 FUNC_0(VAR_4, VAR_0, "P2P: Use separate group interface %s",
  VAR_7->ifname);
 VAR_7->p2p_first_connection_timeout = 0;
 return VAR_7;
}
