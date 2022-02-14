
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsn_pmksa_cache_entry {int spa; struct rsn_pmksa_cache_entry* next; int pmkid; struct rsn_pmksa_cache_entry* hnext; } ;
struct rsn_pmksa_cache {struct rsn_pmksa_cache_entry* pmksa; struct rsn_pmksa_cache_entry** pmkid; } ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;

struct rsn_pmksa_cache_entry *
FUNC_2(struct rsn_pmksa_cache *VAR_2,
       const u8 *VAR_3, const u8 *VAR_4)
{
 struct rsn_pmksa_cache_entry *VAR_5;

 if (VAR_4) {
  for (VAR_5 = VAR_2->pmkid[FUNC_0(VAR_4)]; VAR_5;
       VAR_5 = VAR_5->hnext) {
   if ((VAR_3 == ((void*)0) ||
        FUNC_1(VAR_5->spa, VAR_3, VAR_0) == 0) &&
       FUNC_1(VAR_5->pmkid, VAR_4, VAR_1) == 0)
    return VAR_5;
  }
 } else {
  for (VAR_5 = VAR_2->pmksa; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_3 == ((void*)0) ||
       FUNC_1(VAR_5->spa, VAR_3, VAR_0) == 0)
    return VAR_5;
  }
 }

 return ((void*)0);
}
