
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache {void (* free_cb ) (struct rsn_pmksa_cache_entry*,void*) ;void* ctx; } ;


 struct rsn_pmksa_cache* FUNC_0 (int) ;

struct rsn_pmksa_cache *
FUNC_1(void (*VAR_0)(struct rsn_pmksa_cache_entry *VAR_1,
          void *VAR_2), void *VAR_3)
{
 struct rsn_pmksa_cache *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (VAR_4) {
  VAR_4->free_cb = VAR_0;
  VAR_4->ctx = VAR_3;
 }

 return VAR_4;
}
