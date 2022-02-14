
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_idpool {int lock; int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,struct p9_idpool*) ;
 int FUNC_1 (int *,struct p9_idpool*,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct p9_idpool *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 unsigned long VAR_6;

retry:
 if (FUNC_2(&VAR_3->pool, VAR_1) == 0)
  return 0;

 FUNC_3(&VAR_3->lock, VAR_6);


 VAR_5 = FUNC_1(&VAR_3->pool, VAR_3, &VAR_4);
 FUNC_4(&VAR_3->lock, VAR_6);

 if (VAR_5 == -VAR_0)
  goto retry;
 else if (VAR_5)
  return -1;

 FUNC_0(VAR_2, " id %d pool %p\n", VAR_4, VAR_3);
 return VAR_4;
}
