
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vlan_description {int dummy; } ;
struct os_reltime {int dummy; } ;
struct hostapd_sta_wpa_psk_short {int dummy; } ;
struct hostapd_data {struct hostapd_cached_radius_acl* acl_cache; } ;
struct hostapd_cached_radius_acl {scalar_t__ accepted; scalar_t__ radius_cui; scalar_t__ identity; int psk; struct vlan_description vlan_id; int acct_interim_interval; int session_timeout; int timestamp; int addr; struct hostapd_cached_radius_acl* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_sta_wpa_psk_short**,int ) ;
 int FUNC_1 (struct os_reltime*) ;
 scalar_t__ FUNC_2 (int ,int const*,int ) ;
 scalar_t__ FUNC_3 (struct os_reltime*,int *,int ) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_3, const u8 *VAR_4,
     u32 *VAR_5,
     u32 *VAR_6,
     struct vlan_description *VAR_7,
     struct hostapd_sta_wpa_psk_short **VAR_8,
     char **VAR_9, char **VAR_10)
{
 struct hostapd_cached_radius_acl *VAR_11;
 struct os_reltime VAR_12;

 FUNC_1(&VAR_12);

 for (VAR_11 = VAR_3->acl_cache; VAR_11; VAR_11 = VAR_11->next) {
  if (FUNC_2(VAR_11->addr, VAR_4, VAR_0) != 0)
   continue;

  if (FUNC_3(&VAR_12, &VAR_11->timestamp,
           VAR_2))
   return -1;
  if (VAR_11->accepted == VAR_1)
   if (VAR_5)
    *VAR_5 = VAR_11->session_timeout;
  if (VAR_6)
   *VAR_6 =
    VAR_11->acct_interim_interval;
  if (VAR_7)
   *VAR_7 = VAR_11->vlan_id;
  FUNC_0(VAR_8, VAR_11->psk);
  if (VAR_9) {
   if (VAR_11->identity)
    *VAR_9 = FUNC_4(VAR_11->identity);
   else
    *VAR_9 = ((void*)0);
  }
  if (VAR_10) {
   if (VAR_11->radius_cui)
    *VAR_10 = FUNC_4(VAR_11->radius_cui);
   else
    *VAR_10 = ((void*)0);
  }
  return VAR_11->accepted;
 }

 return -1;
}
