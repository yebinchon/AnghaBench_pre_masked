
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {struct wpa_ssid* pnext; int ssid_len; int ssid; int id; int priority; } ;
struct wpa_config {int num_prio; struct wpa_ssid** pssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct wpa_config *VAR_1)
{
 int VAR_2;
 struct wpa_ssid *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_prio; VAR_2++) {
  VAR_3 = VAR_1->pssid[VAR_2];
  FUNC_0(VAR_0, "Priority group %d",
      VAR_3->priority);
  while (VAR_3) {
   FUNC_0(VAR_0, "   id=%d ssid='%s'",
       VAR_3->id,
       FUNC_1(VAR_3->ssid, VAR_3->ssid_len));
   VAR_3 = VAR_3->pnext;
  }
 }
}
