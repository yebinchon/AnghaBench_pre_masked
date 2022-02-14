
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_bitmap {int max; int reserved_top; int top; int mask; int avail; int lock; int table; int last; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_bitmap *VAR_0, u32 VAR_1, int VAR_2,
       int VAR_3)
{
 VAR_1 &= VAR_0->max + VAR_0->reserved_top - 1;

 FUNC_2(&VAR_0->lock);
 if (!VAR_3) {
  VAR_0->last = FUNC_1(VAR_0->last, VAR_1);
  VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
    & VAR_0->mask;
 }
 FUNC_0(VAR_0->table, VAR_1, VAR_2);
 VAR_0->avail += VAR_2;
 FUNC_3(&VAR_0->lock);
}
