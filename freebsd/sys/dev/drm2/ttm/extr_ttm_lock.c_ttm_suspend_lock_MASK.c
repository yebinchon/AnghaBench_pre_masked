
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int lock; } ;


 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (struct ttm_lock*,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ttm_lock *VAR_0)
{
 FUNC_2(&VAR_0->lock);
 while (!FUNC_0(VAR_0))
  FUNC_1(VAR_0, &VAR_0->lock, 0, "ttms", 0);
 FUNC_3(&VAR_0->lock);
}
