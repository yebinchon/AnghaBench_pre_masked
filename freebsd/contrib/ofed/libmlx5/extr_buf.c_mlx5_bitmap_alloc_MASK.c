
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_bitmap {int max; int last; int top; int avail; int table; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5_bitmap *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->table, VAR_0->max);
 if (VAR_1 < VAR_0->max) {
  FUNC_1(VAR_1, VAR_0->table);
  VAR_0->last = (VAR_1 + 1);
  if (VAR_0->last == VAR_0->max)
   VAR_0->last = 0;
  VAR_1 |= VAR_0->top;
  VAR_2 = VAR_1;
 } else
  VAR_2 = -1;

 if (VAR_2 != -1)
  --VAR_0->avail;

 return VAR_2;
}
