
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache_entry {struct rsn_pmksa_cache_entry* next; } ;
struct rsn_pmksa_cache {int ** pmkid; struct rsn_pmksa_cache_entry* pmksa; scalar_t__ pmksa_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsn_pmksa_cache_entry*) ;
 int FUNC_1 (int ,struct rsn_pmksa_cache*,int *) ;
 int FUNC_2 (struct rsn_pmksa_cache*) ;
 int VAR_1 ;

void FUNC_3(struct rsn_pmksa_cache *VAR_2)
{
 struct rsn_pmksa_cache_entry *VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->pmksa;
 while (VAR_3) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_0(VAR_4);
 }
 FUNC_1(VAR_1, VAR_2, ((void*)0));
 VAR_2->pmksa_count = 0;
 VAR_2->pmksa = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2->pmkid[VAR_5] = ((void*)0);
 FUNC_2(VAR_2);
}
