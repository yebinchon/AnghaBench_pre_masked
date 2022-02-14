
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__ priority; struct wpa_ssid* pnext; } ;
struct wpa_config {int num_prio; struct wpa_ssid** pssid; } ;


 int FUNC_0 (struct wpa_ssid**,struct wpa_ssid**,int) ;
 struct wpa_ssid** FUNC_1 (struct wpa_ssid**,int,int) ;

int FUNC_2(struct wpa_config *VAR_0,
    struct wpa_ssid *VAR_1)
{
 int VAR_2;
 struct wpa_ssid *VAR_3, **VAR_4;





 for (VAR_2 = 0; VAR_2 < VAR_0->num_prio; VAR_2++) {
  VAR_3 = VAR_0->pssid[VAR_2];
  if (VAR_3->priority == VAR_1->priority) {
   while (VAR_3->pnext)
    VAR_3 = VAR_3->pnext;
   VAR_3->pnext = VAR_1;
   return 0;
  }
 }


 VAR_4 = FUNC_1(VAR_0->pssid, VAR_0->num_prio + 1,
     sizeof(struct wpa_ssid *));
 if (VAR_4 == ((void*)0))
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_prio; VAR_2++) {
  if (VAR_4[VAR_2]->priority < VAR_1->priority) {
   FUNC_0(&VAR_4[VAR_2 + 1], &VAR_4[VAR_2],
       (VAR_0->num_prio - VAR_2) *
       sizeof(struct wpa_ssid *));
   break;
  }
 }

 VAR_4[VAR_2] = VAR_1;
 VAR_0->num_prio++;
 VAR_0->pssid = VAR_4;

 return 0;
}
