
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_ies {int* data; int len; int* wpa_ie; int* wme_ie; int* ath_ie; int* tdma_ie; int* rsn_ie; int* htcap_ie; int* htinfo_ie; int* meshid_ie; int* vhtcap_ie; int* vhtopmode_ie; int* vhtpwrenv_ie; int* bssload_ie; int* apchanrep_ie; } ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;

void
FUNC_4(struct ieee80211_ies *VAR_0)
{
 uint8_t *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->data;
 VAR_2 = VAR_0->len;
 while (VAR_2 > 0) {
  switch (VAR_1[0]) {
  case 131:
   if (FUNC_3(VAR_1))
    VAR_0->wpa_ie = VAR_1;
   else if (FUNC_2(VAR_1))
    VAR_0->wme_ie = VAR_1;
   break;
  case 132:
   VAR_0->rsn_ie = VAR_1;
   break;
  case 135:
   VAR_0->htcap_ie = VAR_1;
   break;
  case 134:
   VAR_0->htinfo_ie = VAR_1;
   break;





  case 130:
   VAR_0->vhtcap_ie = VAR_1;
   break;
  case 129:
   VAR_0->vhtopmode_ie = VAR_1;
   break;
  case 128:
   VAR_0->vhtpwrenv_ie = VAR_1;
   break;
  case 136:
   VAR_0->bssload_ie = VAR_1;
   break;
  case 137:
   VAR_0->apchanrep_ie = VAR_1;
   break;
  }
  VAR_2 -= 2 + VAR_1[1];
  VAR_1 += 2 + VAR_1[1];
 }
}
