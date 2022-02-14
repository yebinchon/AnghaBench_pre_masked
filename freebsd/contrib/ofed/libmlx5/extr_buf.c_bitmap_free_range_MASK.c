
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_bitmap {int max; int top; int mask; int avail; int last; int table; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_bitmap *VAR_0, uint32_t VAR_1,
         int VAR_2)
{
 int VAR_3;

 VAR_1 &= VAR_0->max - 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_1 + VAR_3, VAR_0->table);
 VAR_0->last = FUNC_0(VAR_0->last, VAR_1);
 VAR_0->top = (VAR_0->top + VAR_0->max) & VAR_0->mask;
 VAR_0->avail += VAR_2;
}
