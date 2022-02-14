
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_state_machine {struct rsn_pmksa_cache_entry* pmksa; } ;
struct wpa_authenticator {int * dot11RSNAPMKIDUsed; } ;
struct rsn_pmksa_cache_entry {int pmkid; int pmk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct rsn_pmksa_cache_entry *VAR_2,
         struct wpa_state_machine *VAR_3,
         struct wpa_authenticator *VAR_4,
         u8 *VAR_5, u8 *VAR_6)
{
 if (!VAR_3)
  return;

 VAR_3->pmksa = VAR_2;
 FUNC_0(VAR_6, VAR_2->pmk, VAR_1);
 FUNC_0(VAR_5, VAR_2->pmkid, VAR_0);
 FUNC_0(VAR_4->dot11RSNAPMKIDUsed, VAR_2->pmkid, VAR_0);
}
