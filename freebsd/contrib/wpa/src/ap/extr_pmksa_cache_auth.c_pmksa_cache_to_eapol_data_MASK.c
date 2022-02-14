
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rsn_pmksa_cache_entry {int acct_multi_session_id; int vlan_desc; int eap_type_authsrv; int radius_class; scalar_t__ cui; int identity_len; scalar_t__ identity; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ attr; } ;
struct eapol_state_machine {int acct_multi_session_id; int sta; int eap_type_authsrv; TYPE_1__ radius_class; int radius_cui; int identity_len; scalar_t__ identity; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,scalar_t__,int ) ;
 int FUNC_7 (int ,char*,unsigned long) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct hostapd_data *VAR_1,
          struct rsn_pmksa_cache_entry *VAR_2,
          struct eapol_state_machine *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return;

 if (VAR_2->identity) {
  FUNC_1(VAR_3->identity);
  VAR_3->identity = FUNC_2(VAR_2->identity_len);
  if (VAR_3->identity) {
   VAR_3->identity_len = VAR_2->identity_len;
   FUNC_3(VAR_3->identity, VAR_2->identity,
      VAR_2->identity_len);
  }
  FUNC_6(VAR_0, "STA identity from PMKSA",
      VAR_3->identity, VAR_3->identity_len);
 }

 if (VAR_2->cui) {
  FUNC_9(VAR_3->radius_cui);
  VAR_3->radius_cui = FUNC_8(VAR_2->cui);
 }


 FUNC_5(&VAR_3->radius_class);
 FUNC_4(&VAR_3->radius_class, &VAR_2->radius_class);

 if (VAR_3->radius_class.attr) {
  FUNC_7(VAR_0, "Copied %lu Class attribute(s) from "
      "PMKSA", (unsigned long) VAR_3->radius_class.count);
 }

 VAR_3->eap_type_authsrv = VAR_2->eap_type_authsrv;

 FUNC_0(VAR_1, VAR_3->sta, VAR_2->vlan_desc);


 VAR_3->acct_multi_session_id = VAR_2->acct_multi_session_id;
}
