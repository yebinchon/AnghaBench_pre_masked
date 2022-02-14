
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsn_pmksa_cache_entry {int akmp; int pmk_len; int pmk; int * spa; struct rsn_pmksa_cache_entry* next; } ;
struct rsn_pmksa_cache {struct rsn_pmksa_cache_entry* pmksa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int ,int ,int const*,int const*,int *,int ) ;

struct rsn_pmksa_cache_entry * FUNC_2(
 struct rsn_pmksa_cache *VAR_2, const u8 *VAR_3, const u8 *VAR_4,
 const u8 *VAR_5)
{
 struct rsn_pmksa_cache_entry *VAR_6;
 u8 VAR_7[VAR_1];

 for (VAR_6 = VAR_2->pmksa; VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_0(VAR_6->spa, VAR_4, VAR_0) != 0)
   continue;
  FUNC_1(VAR_6->pmk, VAR_6->pmk_len, VAR_3, VAR_4, VAR_7,
     VAR_6->akmp);
  if (FUNC_0(VAR_7, VAR_5, VAR_1) == 0)
   return VAR_6;
 }
 return ((void*)0);
}
