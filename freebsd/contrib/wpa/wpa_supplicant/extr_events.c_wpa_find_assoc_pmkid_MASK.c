
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int eapol; int wpa; } ;
struct wpa_ie_data {size_t num_pmkid; int * pmkid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int ,int *,int ) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,char*) ;
 scalar_t__ FUNC_3 (int ,struct wpa_ie_data*) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2)
{
 struct wpa_ie_data VAR_3;
 int VAR_4 = -1;
 size_t VAR_5;

 if (FUNC_3(VAR_2->wpa, &VAR_3) < 0 ||
     VAR_3.pmkid == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3.num_pmkid; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2->wpa,
          VAR_3.pmkid + VAR_5 * VAR_1,
          ((void*)0), ((void*)0), 0, ((void*)0), 0);
  if (VAR_4 == 0) {
   FUNC_0(VAR_2->eapol);
   break;
  }
 }

 FUNC_2(VAR_2, VAR_0, "RSN: PMKID from assoc IE %sfound from "
  "PMKSA cache", VAR_4 == 0 ? "" : "not ");
}
