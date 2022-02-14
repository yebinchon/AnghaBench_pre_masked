
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_bitmap {int max; int last; int top; int mask; int avail; int table; } ;


 int FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (struct mlx5_bitmap*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_bitmap *VAR_0, int VAR_1,
         int VAR_2)
{
 uint32_t VAR_3;
 int VAR_4, VAR_5;

 if (VAR_1 == 1 && VAR_2 == 1)
  return FUNC_1(VAR_0);

 if (VAR_1 > VAR_0->max)
  return -1;

 VAR_3 = FUNC_0(VAR_0->table, VAR_0->last,
     VAR_0->max, VAR_1, VAR_2);
 if (VAR_3 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max) & VAR_0->mask;
  VAR_3 = FUNC_0(VAR_0->table, 0, VAR_0->max,
      VAR_1, VAR_2);
 }

 if (VAR_3 < VAR_0->max) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_2(VAR_3 + VAR_5, VAR_0->table);
  if (VAR_3 == VAR_0->last) {
   VAR_0->last = (VAR_3 + VAR_1);
   if (VAR_0->last >= VAR_0->max)
    VAR_0->last = 0;
  }
  VAR_3 |= VAR_0->top;
  VAR_4 = VAR_3;
 } else
  VAR_4 = -1;

 if (VAR_4 != -1)
  VAR_0->avail -= VAR_1;

 return VAR_3;
}
