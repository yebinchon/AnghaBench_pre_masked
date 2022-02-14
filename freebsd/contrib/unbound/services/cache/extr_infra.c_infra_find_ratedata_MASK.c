
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int hash; } ;
struct rate_key {size_t namelen; TYPE_1__ entry; int * name; } ;
struct lruhash_entry {int dummy; } ;
struct infra_cache {int domain_rates; } ;
typedef int key ;
typedef int hashvalue_type ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct rate_key*,int ,int) ;
 struct lruhash_entry* FUNC_2 (int ,int ,struct rate_key*,int) ;

__attribute__((used)) static struct lruhash_entry* FUNC_3(struct infra_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, int VAR_3)
{
 struct rate_key VAR_4;
 hashvalue_type VAR_5 = FUNC_0(VAR_1, 0xab);
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.name = VAR_1;
 VAR_4.namelen = VAR_2;
 VAR_4.entry.hash = VAR_5;
 return FUNC_2(VAR_0->domain_rates, VAR_5, &VAR_4, VAR_3);
}
