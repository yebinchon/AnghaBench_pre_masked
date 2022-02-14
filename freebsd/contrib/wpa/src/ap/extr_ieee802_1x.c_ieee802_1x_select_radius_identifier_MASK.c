
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {struct eapol_state_machine* eapol_sm; } ;
struct sta_id_search {scalar_t__ identifier; struct eapol_state_machine* sm; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {scalar_t__ radius_identifier; } ;



__attribute__((used)) static int FUNC_0(struct hostapd_data *VAR_0,
            struct sta_info *VAR_1,
            void *VAR_2)
{
 struct sta_id_search *VAR_3 = VAR_2;
 struct eapol_state_machine *VAR_4 = VAR_1->eapol_sm;

 if (VAR_4 && VAR_4->radius_identifier >= 0 &&
     VAR_4->radius_identifier == VAR_3->identifier) {
  VAR_3->sm = VAR_4;
  return 1;
 }
 return 0;
}
