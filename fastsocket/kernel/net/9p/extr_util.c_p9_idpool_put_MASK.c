
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_idpool {int lock; int pool; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,struct p9_idpool*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(int VAR_1, struct p9_idpool *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_0, " id %d pool %p\n", VAR_1, VAR_2);

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_2->pool, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_3);
}
