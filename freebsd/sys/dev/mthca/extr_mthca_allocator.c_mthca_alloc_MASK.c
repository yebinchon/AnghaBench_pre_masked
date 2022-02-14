
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_alloc {int max; int top; int mask; int lock; int table; int last; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

u32 FUNC_5(struct mthca_alloc *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;

 FUNC_3(&VAR_0->lock, VAR_1);

 VAR_2 = FUNC_1(VAR_0->table, VAR_0->max, VAR_0->last);
 if (VAR_2 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max) & VAR_0->mask;
  VAR_2 = FUNC_0(VAR_0->table, VAR_0->max);
 }

 if (VAR_2 < VAR_0->max) {
  FUNC_2(VAR_2, VAR_0->table);
  VAR_2 |= VAR_0->top;
 } else
  VAR_2 = -1;

 FUNC_4(&VAR_0->lock, VAR_1);

 return VAR_2;
}
