
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {int count; long max_hpages; scalar_t__ used_hpages; int lock; } ;


 int VAR_0 ;
 struct hugepage_subpool* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

struct hugepage_subpool *FUNC_2(long VAR_1)
{
 struct hugepage_subpool *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->lock);
 VAR_2->count = 1;
 VAR_2->max_hpages = VAR_1;
 VAR_2->used_hpages = 0;

 return VAR_2;
}
