
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {scalar_t__ count; scalar_t__ used_hpages; int lock; } ;


 int FUNC_0 (struct hugepage_subpool*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct hugepage_subpool *VAR_0)
{
 bool VAR_1 = (VAR_0->count == 0) && (VAR_0->used_hpages == 0);

 FUNC_1(&VAR_0->lock);



 if (VAR_1)
  FUNC_0(VAR_0);
}
