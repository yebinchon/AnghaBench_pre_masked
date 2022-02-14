
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_cache {int table; } ;
struct config_file {int rrset_cache_slabs; int rrset_cache_size; } ;
struct alloc_cache {int dummy; } ;


 struct rrset_cache* FUNC_0 (struct config_file*,struct alloc_cache*) ;
 int FUNC_1 (struct rrset_cache*) ;
 int FUNC_2 (int *,int ,int ) ;

struct rrset_cache* FUNC_3(struct rrset_cache *VAR_0,
 struct config_file* VAR_1, struct alloc_cache* VAR_2)
{
 if(!VAR_0 || !VAR_1 || !FUNC_2(&VAR_0->table, VAR_1->rrset_cache_size,
  VAR_1->rrset_cache_slabs))
 {
  FUNC_1(VAR_0);
  VAR_0 = FUNC_0(VAR_1, VAR_2);
 }
 return VAR_0;
}
