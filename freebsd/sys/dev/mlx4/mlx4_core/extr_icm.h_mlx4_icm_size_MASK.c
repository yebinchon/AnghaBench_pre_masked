
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_icm_iter {size_t page_idx; TYPE_1__* chunk; } ;
struct TYPE_2__ {int * mem; } ;


 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct mlx4_icm_iter *VAR_0)
{
 return FUNC_0(&VAR_0->chunk->mem[VAR_0->page_idx]);
}
