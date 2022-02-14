
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_bitmap {int last; int max; int top; int reserved_top; int mask; int avail; int lock; int table; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_bitmap*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u32 FUNC_6(struct mlx4_bitmap *VAR_0, int VAR_1,
       int VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_2(VAR_1 == 1 && VAR_2 == 1 && !VAR_3))
  return FUNC_3(VAR_0);

 FUNC_4(&VAR_0->lock);

 VAR_4 = FUNC_1(VAR_0->table, VAR_0->last,
     VAR_0->max, VAR_1, VAR_2, VAR_3);
 if (VAR_4 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
    & VAR_0->mask;
  VAR_4 = FUNC_1(VAR_0->table, 0, VAR_0->max,
      VAR_1, VAR_2, VAR_3);
 }

 if (VAR_4 < VAR_0->max) {
  FUNC_0(VAR_0->table, VAR_4, VAR_1);
  if (VAR_4 == VAR_0->last) {
   VAR_0->last = (VAR_4 + VAR_1);
   if (VAR_0->last >= VAR_0->max)
    VAR_0->last = 0;
  }
  VAR_4 |= VAR_0->top;
 } else
  VAR_4 = -1;

 if (VAR_4 != -1)
  VAR_0->avail -= VAR_1;

 FUNC_5(&VAR_0->lock);

 return VAR_4;
}
