
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int pmksa; } ;
struct rsn_pmksa_cache_entry {int dummy; } ;


 struct rsn_pmksa_cache_entry* FUNC_0 (int ,struct rsn_pmksa_cache_entry*) ;

struct rsn_pmksa_cache_entry *
FUNC_1(struct wpa_sm *VAR_0,
        struct rsn_pmksa_cache_entry * VAR_1)
{
 return FUNC_0(VAR_0->pmksa, VAR_1);
}
