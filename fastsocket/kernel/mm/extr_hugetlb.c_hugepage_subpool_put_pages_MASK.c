
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {long used_hpages; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hugepage_subpool*) ;

__attribute__((used)) static void FUNC_2(struct hugepage_subpool *VAR_0,
           long VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->lock);
 VAR_0->used_hpages -= VAR_1;


 FUNC_1(VAR_0);
}
