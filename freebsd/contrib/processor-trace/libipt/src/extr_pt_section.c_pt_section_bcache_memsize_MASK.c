
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {struct pt_block_cache* bcache; } ;
struct pt_block_cache {int nentries; } ;
struct pt_bcache_entry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct pt_section *VAR_1,
         uint64_t *VAR_2)
{
 struct pt_block_cache *VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = VAR_1->bcache;
 if (!VAR_3) {
  *VAR_2 = 0ull;
  return 0;
 }

 *VAR_2 = sizeof(*VAR_3) +
  (VAR_3->nentries * sizeof(struct pt_bcache_entry));

 return 0;
}
