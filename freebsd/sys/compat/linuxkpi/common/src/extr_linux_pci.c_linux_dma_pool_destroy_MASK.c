
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int pool_lock; int pool_dmat; int pool_zone; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_pool*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct dma_pool *VAR_0)
{

 FUNC_3(VAR_0->pool_zone);
 FUNC_0(VAR_0->pool_dmat);
 FUNC_2(&VAR_0->pool_lock);
 FUNC_1(VAR_0);
}
