
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_alloc {int max; int top; int mask; int lock; int last; int table; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mthca_alloc *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;

 VAR_1 &= VAR_0->max - 1;

 FUNC_2(&VAR_0->lock, VAR_2);

 FUNC_0(VAR_1, VAR_0->table);
 VAR_0->last = FUNC_1(VAR_0->last, VAR_1);
 VAR_0->top = (VAR_0->top + VAR_0->max) & VAR_0->mask;

 FUNC_3(&VAR_0->lock, VAR_2);
}
