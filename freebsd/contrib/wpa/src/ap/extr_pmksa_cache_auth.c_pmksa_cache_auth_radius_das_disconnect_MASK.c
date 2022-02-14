
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache_entry {struct rsn_pmksa_cache_entry* next; } ;
struct rsn_pmksa_cache {struct rsn_pmksa_cache_entry* pmksa; } ;
struct radius_das_attrs {scalar_t__ acct_session_id; } ;


 scalar_t__ FUNC_0 (struct rsn_pmksa_cache_entry*,struct radius_das_attrs*) ;
 int FUNC_1 (struct rsn_pmksa_cache*,struct rsn_pmksa_cache_entry*) ;

int FUNC_2(struct rsn_pmksa_cache *VAR_0,
        struct radius_das_attrs *VAR_1)
{
 int VAR_2 = 0;
 struct rsn_pmksa_cache_entry *VAR_3, *VAR_4;

 if (VAR_1->acct_session_id)
  return -1;

 VAR_3 = VAR_0->pmksa;
 while (VAR_3) {
  if (FUNC_0(VAR_3, VAR_1)) {
   VAR_2++;
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next;
   FUNC_1(VAR_0, VAR_4);
   continue;
  }
  VAR_3 = VAR_3->next;
 }

 return VAR_2 ? 0 : -1;
}
