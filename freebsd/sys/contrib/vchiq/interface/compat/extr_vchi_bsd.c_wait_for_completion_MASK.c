
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int lock; int done; int cv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct completion *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 if (!VAR_0->done)
  FUNC_0(&VAR_0->cv, &VAR_0->lock);
 VAR_0->done--;
 FUNC_2(&VAR_0->lock);
}
