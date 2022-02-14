
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct mlx5_bitmap {int table; void* max; void* avail; void* mask; scalar_t__ top; scalar_t__ last; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_bitmap *VAR_1, uint32_t VAR_2,
       uint32_t VAR_3)
{
 VAR_1->last = 0;
 VAR_1->top = 0;
 VAR_1->max = VAR_2;
 VAR_1->avail = VAR_2;
 VAR_1->mask = VAR_3;
 VAR_1->avail = VAR_1->max;
 VAR_1->table = FUNC_1(FUNC_0(VAR_1->max), sizeof(uint32_t));
 if (!VAR_1->table)
  return -VAR_0;

 return 0;
}
