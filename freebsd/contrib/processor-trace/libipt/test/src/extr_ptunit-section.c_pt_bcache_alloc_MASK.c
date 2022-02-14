
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_block_cache {scalar_t__ nentries; } ;


 scalar_t__ VAR_0 ;
 struct pt_block_cache* FUNC_0 (int) ;

struct pt_block_cache *FUNC_1(uint64_t VAR_1)
{
 struct pt_block_cache *VAR_2;

 if (!VAR_1 || (VAR_0 < VAR_1))
  return ((void*)0);






 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2)
  VAR_2->nentries = (uint32_t) VAR_1;

 return VAR_2;
}
