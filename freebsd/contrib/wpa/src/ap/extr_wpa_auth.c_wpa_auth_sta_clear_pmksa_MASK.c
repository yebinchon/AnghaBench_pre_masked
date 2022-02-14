
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {struct rsn_pmksa_cache_entry* pmksa; } ;
struct rsn_pmksa_cache_entry {int dummy; } ;



int FUNC_0(struct wpa_state_machine *VAR_0,
        struct rsn_pmksa_cache_entry *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->pmksa != VAR_1)
  return -1;
 VAR_0->pmksa = ((void*)0);
 return 0;
}
