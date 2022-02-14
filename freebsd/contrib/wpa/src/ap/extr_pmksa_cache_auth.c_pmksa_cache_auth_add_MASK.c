
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsn_pmksa_cache_entry {int dummy; } ;
struct rsn_pmksa_cache {int dummy; } ;
struct eapol_state_machine {int dummy; } ;


 scalar_t__ FUNC_0 (struct rsn_pmksa_cache*,struct rsn_pmksa_cache_entry*) ;
 struct rsn_pmksa_cache_entry* FUNC_1 (int const*,size_t,int const*,int const*,size_t,int const*,int const*,int,struct eapol_state_machine*,int) ;

struct rsn_pmksa_cache_entry *
FUNC_2(struct rsn_pmksa_cache *VAR_0,
       const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
       const u8 *VAR_4, size_t VAR_5,
       const u8 *VAR_6, const u8 *VAR_7, int VAR_8,
       struct eapol_state_machine *VAR_9, int VAR_10)
{
 struct rsn_pmksa_cache_entry *VAR_11;

 VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8, VAR_9,
           VAR_10);

 if (FUNC_0(VAR_0, VAR_11) < 0)
  return ((void*)0);

 return VAR_11;
}
