
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {scalar_t__ pending_attach; int attached; int attaching; int lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct utrace *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->attaching, &VAR_0->attached);
 VAR_0->pending_attach = 0;
}
