
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_mgmt; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,int,int) ;
 int VAR_1 ;

void FUNC_3(struct wpa_supplicant *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2->p2p_mgmt) {
  FUNC_2(VAR_2, VAR_0,
   "Ignore scan request (%d.%06d sec) on p2p_mgmt interface",
   VAR_3, VAR_4);
  return;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2,
        ((void*)0));
 if (VAR_5 == 1) {
  FUNC_2(VAR_2, VAR_0, "Rescheduling scan request: %d.%06d sec",
   VAR_3, VAR_4);
 } else if (VAR_5 == 0) {
  FUNC_2(VAR_2, VAR_0, "Ignore new scan request for %d.%06d sec since an earlier request is scheduled to trigger sooner",
   VAR_3, VAR_4);
 } else {
  FUNC_2(VAR_2, VAR_0, "Setting scan request: %d.%06d sec",
   VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2, ((void*)0));
 }
}
