
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vlan_description {int dummy; } ;
struct rsn_pmksa_cache_entry {int opportunistic; int * vlan_desc; int eap_type_authsrv; int radius_class; scalar_t__ cui; int identity_len; int const* identity; int const* spa; int akmp; int expiration; int pmk_len; int const* pmk; int const* pmkid; } ;
struct rsn_pmksa_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int ) ;
 int FUNC_1 (int const*,int const*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct rsn_pmksa_cache*,struct rsn_pmksa_cache_entry*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

struct rsn_pmksa_cache_entry *
FUNC_6(struct rsn_pmksa_cache *VAR_2,
      const struct rsn_pmksa_cache_entry *VAR_3,
      const u8 *VAR_4, const u8 *VAR_5)
{
 struct rsn_pmksa_cache_entry *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_6->pmkid, VAR_5, VAR_1);
 FUNC_1(VAR_6->pmk, VAR_3->pmk, VAR_3->pmk_len);
 VAR_6->pmk_len = VAR_3->pmk_len;
 VAR_6->expiration = VAR_3->expiration;
 VAR_6->akmp = VAR_3->akmp;
 FUNC_1(VAR_6->spa, VAR_3->spa, VAR_0);
 VAR_6->opportunistic = 1;
 if (VAR_3->identity) {
  VAR_6->identity = FUNC_0(VAR_3->identity_len);
  if (VAR_6->identity) {
   VAR_6->identity_len = VAR_3->identity_len;
   FUNC_1(VAR_6->identity, VAR_3->identity,
      VAR_3->identity_len);
  }
 }
 if (VAR_3->cui)
  VAR_6->cui = FUNC_5(VAR_3->cui);

 FUNC_4(&VAR_6->radius_class, &VAR_3->radius_class);

 VAR_6->eap_type_authsrv = VAR_3->eap_type_authsrv;
 if (VAR_3->vlan_desc) {
  VAR_6->vlan_desc = FUNC_2(sizeof(struct vlan_description));
  if (VAR_6->vlan_desc)
   *VAR_6->vlan_desc = *VAR_3->vlan_desc;
 } else {
  VAR_6->vlan_desc = ((void*)0);
 }
 VAR_6->opportunistic = 1;

 FUNC_3(VAR_2, VAR_6);

 return VAR_6;
}
