
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ooo_info {int cid_base; int max_num_archipelagos; struct ecore_ooo_archipelago* p_archipelagos_mem; } ;
struct ecore_ooo_archipelago {int isles_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct ecore_ooo_archipelago* VAR_0 ;

__attribute__((used)) static struct ecore_ooo_archipelago *
FUNC_1(struct ecore_ooo_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 & 0xffff) - VAR_1->cid_base;
 struct ecore_ooo_archipelago *VAR_4;

 if (VAR_3 >= VAR_1->max_num_archipelagos)
  return VAR_0;

 VAR_4 = &VAR_1->p_archipelagos_mem[VAR_3];

 if (FUNC_0(&VAR_4->isles_list))
  return VAR_0;

 return VAR_4;
}
