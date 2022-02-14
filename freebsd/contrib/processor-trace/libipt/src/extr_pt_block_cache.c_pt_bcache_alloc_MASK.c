
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_block_cache {scalar_t__ nentries; } ;
struct pt_bcache_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt_block_cache* FUNC_0 (size_t) ;
 int FUNC_1 (struct pt_block_cache*,int ,size_t) ;

struct pt_block_cache *FUNC_2(uint64_t VAR_2)
{
 struct pt_block_cache *VAR_3;
 uint64_t VAR_4;

 if (!VAR_2 || (VAR_1 < VAR_2))
  return ((void*)0);

 VAR_4 = sizeof(*VAR_3) + (VAR_2 * sizeof(struct pt_bcache_entry));
 if (VAR_0 < VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_0((size_t) VAR_4);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, 0, (size_t) VAR_4);
 VAR_3->nentries = (uint32_t) VAR_2;

 return VAR_3;
}
