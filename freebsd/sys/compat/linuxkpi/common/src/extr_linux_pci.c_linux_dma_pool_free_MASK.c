
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_dma_obj {int dummy; } ;
struct dma_pool {int pool_zone; int pool_ptree; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct dma_pool*) ;
 int FUNC_1 (struct dma_pool*) ;
 struct linux_dma_obj* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct linux_dma_obj*,struct dma_pool*) ;

void
FUNC_5(struct dma_pool *VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 struct linux_dma_obj *VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(&VAR_0->pool_ptree, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_0);
  return;
 }
 FUNC_3(&VAR_0->pool_ptree, VAR_2);
 FUNC_1(VAR_0);

 FUNC_4(VAR_0->pool_zone, VAR_3, VAR_0);
}
