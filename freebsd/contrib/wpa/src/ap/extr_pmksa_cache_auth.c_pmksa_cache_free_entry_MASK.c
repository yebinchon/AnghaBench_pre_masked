
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache_entry {struct rsn_pmksa_cache_entry* next; struct rsn_pmksa_cache_entry* hnext; int pmkid; } ;
struct rsn_pmksa_cache {struct rsn_pmksa_cache_entry* pmksa; struct rsn_pmksa_cache_entry** pmkid; int ctx; int (* free_cb ) (struct rsn_pmksa_cache_entry*,int ) ;int pmksa_count; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct rsn_pmksa_cache_entry*) ;
 int FUNC_2 (struct rsn_pmksa_cache_entry*,int ) ;

void FUNC_3(struct rsn_pmksa_cache *VAR_0,
       struct rsn_pmksa_cache_entry *VAR_1)
{
 struct rsn_pmksa_cache_entry *VAR_2, *VAR_3;
 unsigned int VAR_4;

 VAR_0->pmksa_count--;
 VAR_0->free_cb(VAR_1, VAR_0->ctx);


 VAR_4 = FUNC_0(VAR_1->pmkid);
 VAR_2 = VAR_0->pmkid[VAR_4];
 VAR_3 = ((void*)0);
 while (VAR_2) {
  if (VAR_2 == VAR_1) {
   if (VAR_3 != ((void*)0))
    VAR_3->hnext = VAR_1->hnext;
   else
    VAR_0->pmkid[VAR_4] = VAR_1->hnext;
   break;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->hnext;
 }


 VAR_2 = VAR_0->pmksa;
 VAR_3 = ((void*)0);
 while (VAR_2) {
  if (VAR_2 == VAR_1) {
   if (VAR_3 != ((void*)0))
    VAR_3->next = VAR_1->next;
   else
    VAR_0->pmksa = VAR_1->next;
   break;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }

 FUNC_1(VAR_1);
}
