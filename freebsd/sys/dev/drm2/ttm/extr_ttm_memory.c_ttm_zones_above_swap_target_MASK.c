
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct ttm_mem_zone {unsigned long long swap_limit; unsigned long long emer_mem; unsigned long long max_mem; unsigned long long used_mem; } ;
struct ttm_mem_global {unsigned int num_zones; struct ttm_mem_zone** zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ttm_mem_global *VAR_2,
     bool VAR_3, uint64_t VAR_4)
{
 unsigned int VAR_5;
 struct ttm_mem_zone *VAR_6;
 uint64_t VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_zones; ++VAR_5) {
  VAR_6 = VAR_2->zones[VAR_5];

  if (VAR_3)
   VAR_7 = VAR_6->swap_limit;
  else if (FUNC_0(VAR_1, VAR_0) == 0)
   VAR_7 = VAR_6->emer_mem;
  else
   VAR_7 = VAR_6->max_mem;

  VAR_7 = (VAR_4 > VAR_7) ? 0ULL : VAR_7;

  if (VAR_6->used_mem > VAR_7)
   return 1;
 }
 return 0;
}
