
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct pt_block_cache {scalar_t__ nentries; struct pt_bcache_entry* entry; } ;
struct pt_bcache_entry {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct pt_bcache_entry *VAR_1,
       const struct pt_block_cache *VAR_2, uint64_t VAR_3)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 if (VAR_2->nentries <= VAR_3)
  return -VAR_0;





 *VAR_1 = VAR_2->entry[(uint32_t) VAR_3];

 return 0;
}
