
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int disconnected; struct wpa_supplicant* ssids_from_scan_req; int * conf; int * ifmsh; int * ctrl_iface; scalar_t__ drv_priv; int * received_mb_ies; int * fst; struct wpa_supplicant* next; int ifname; struct wpa_supplicant* parent; struct wpa_supplicant* p2pdev; struct wpa_global* global; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*,int ) ;
 int FUNC_7 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (struct wpa_supplicant*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct wpa_supplicant*,int ) ;
 int FUNC_12 (struct wpa_supplicant*,int *) ;
 int FUNC_13 (struct wpa_global*,struct wpa_supplicant*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct wpa_supplicant*) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 int FUNC_17 (struct wpa_supplicant*) ;
 int FUNC_18 (struct wpa_supplicant*,char*) ;

__attribute__((used)) static void FUNC_19(struct wpa_supplicant *VAR_4,
     int VAR_5, int VAR_6)
{
 struct wpa_global *VAR_7 = VAR_4->global;
 struct wpa_supplicant *VAR_8, *VAR_9;

 if (VAR_4 == VAR_4->parent)
  FUNC_18(VAR_4, "*");

 VAR_8 = VAR_7->ifaces;
 while (VAR_8) {
  if (VAR_8->p2pdev == VAR_4)
   VAR_8->p2pdev = VAR_8->parent;
  if (VAR_8 == VAR_4 || VAR_8->parent != VAR_4) {
   VAR_8 = VAR_8->next;
   continue;
  }
  FUNC_8(VAR_0,
      "Remove remaining child interface %s from parent %s",
      VAR_8->ifname, VAR_4->ifname);
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->next;
  FUNC_13(VAR_7, VAR_9, VAR_6);
 }

 VAR_4->disconnected = 1;
 if (VAR_4->drv_priv) {
  FUNC_11(VAR_4,
           VAR_2);

  FUNC_6(VAR_4, 0);
  FUNC_3(VAR_4, ((void*)0));
 }

 FUNC_9(VAR_4);
 FUNC_17(VAR_4);

 FUNC_15(VAR_4);
 FUNC_2(VAR_4);
 if (VAR_4->drv_priv)
  FUNC_5(VAR_4);

 if (VAR_5)
  FUNC_16(VAR_4);

 if (VAR_6)
  FUNC_7(VAR_4, VAR_1, VAR_3);

 if (VAR_4->ctrl_iface) {
  FUNC_10(VAR_4->ctrl_iface);
  VAR_4->ctrl_iface = ((void*)0);
 }
 if (VAR_4->conf != ((void*)0)) {
  FUNC_4(VAR_4->conf);
  VAR_4->conf = ((void*)0);
 }

 FUNC_1(VAR_4->ssids_from_scan_req);

 FUNC_1(VAR_4);
}
