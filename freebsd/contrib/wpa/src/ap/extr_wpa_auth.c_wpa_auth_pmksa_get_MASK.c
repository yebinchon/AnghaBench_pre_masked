
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_authenticator {int pmksa; } ;
struct rsn_pmksa_cache_entry {int dummy; } ;


 struct rsn_pmksa_cache_entry* FUNC_0 (int ,int const*,int const*) ;

struct rsn_pmksa_cache_entry *
FUNC_1(struct wpa_authenticator *VAR_0, const u8 *VAR_1,
     const u8 *VAR_2)
{
 if (!VAR_0 || !VAR_0->pmksa)
  return ((void*)0);
 return FUNC_0(VAR_0->pmksa, VAR_1, VAR_2);
}
