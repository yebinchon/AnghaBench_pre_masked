
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_description {scalar_t__ notempty; } ;
struct sta_info {struct vlan_description* vlan_desc; } ;
struct rsn_pmksa_cache_entry {int acct_multi_session_id; struct vlan_description* vlan_desc; int eap_type_authsrv; int radius_class; int cui; scalar_t__ identity; int identity_len; } ;
struct eapol_state_machine {int acct_multi_session_id; scalar_t__ sta; int eap_type_authsrv; int radius_class; scalar_t__ radius_cui; int identity_len; scalar_t__ identity; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 struct vlan_description* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct rsn_pmksa_cache_entry *VAR_0,
     struct eapol_state_machine *VAR_1)
{
 struct vlan_description *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->identity) {
  VAR_0->identity = FUNC_0(VAR_1->identity_len);
  if (VAR_0->identity) {
   VAR_0->identity_len = VAR_1->identity_len;
   FUNC_1(VAR_0->identity, VAR_1->identity,
      VAR_1->identity_len);
  }
 }

 if (VAR_1->radius_cui)
  VAR_0->cui = FUNC_4(VAR_1->radius_cui);


 FUNC_3(&VAR_0->radius_class, &VAR_1->radius_class);


 VAR_0->eap_type_authsrv = VAR_1->eap_type_authsrv;

 VAR_2 = ((struct sta_info *) VAR_1->sta)->vlan_desc;
 if (VAR_2 && VAR_2->notempty) {
  VAR_0->vlan_desc = FUNC_2(sizeof(struct vlan_description));
  if (VAR_0->vlan_desc)
   *VAR_0->vlan_desc = *VAR_2;
 } else {
  VAR_0->vlan_desc = ((void*)0);
 }

 VAR_0->acct_multi_session_id = VAR_1->acct_multi_session_id;
}
