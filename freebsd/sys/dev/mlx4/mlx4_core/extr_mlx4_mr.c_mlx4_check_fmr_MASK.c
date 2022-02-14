
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_fmr {int max_pages; int page_shift; scalar_t__ maps; scalar_t__ max_maps; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mlx4_fmr *VAR_1, u64 *VAR_2,
      int VAR_3, u64 VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 > VAR_1->max_pages)
  return -VAR_0;

 VAR_6 = (1 << VAR_1->page_shift) - 1;


 if (VAR_4 & VAR_6)
  return -VAR_0;


 if (0)
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
   if (VAR_2[VAR_5] & ~VAR_6)
    return -VAR_0;
  }

 if (VAR_1->maps >= VAR_1->max_maps)
  return -VAR_0;

 return 0;
}
