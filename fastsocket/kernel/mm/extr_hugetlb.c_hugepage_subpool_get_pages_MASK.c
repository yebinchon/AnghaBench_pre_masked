
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {scalar_t__ used_hpages; scalar_t__ max_hpages; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hugepage_subpool *VAR_1,
          long VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1)
  return 0;

 FUNC_0(&VAR_1->lock);
 if ((VAR_1->used_hpages + VAR_2) <= VAR_1->max_hpages) {
  VAR_1->used_hpages += VAR_2;
 } else {
  VAR_3 = -VAR_0;
 }
 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
