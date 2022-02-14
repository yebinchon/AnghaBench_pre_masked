
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_dma_obj {void* vaddr; int dma_addr; } ;
struct dma_pool {int pool_zone; int pool_ptree; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct dma_pool*) ;
 int FUNC_1 (struct dma_pool*) ;
 scalar_t__ FUNC_2 (int *,struct linux_dma_obj*) ;
 struct linux_dma_obj* FUNC_3 (int ,struct dma_pool*,int ) ;
 int FUNC_4 (int ,struct linux_dma_obj*,struct dma_pool*) ;

void *
FUNC_5(struct dma_pool *VAR_0, gfp_t VAR_1,
    dma_addr_t *VAR_2)
{
 struct linux_dma_obj *VAR_3;

 VAR_3 = FUNC_3(VAR_0->pool_zone, VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_0);
 if (FUNC_2(&VAR_0->pool_ptree, VAR_3) != 0) {
  FUNC_1(VAR_0);
  FUNC_4(VAR_0->pool_zone, VAR_3, VAR_0);
  return (((void*)0));
 }
 FUNC_1(VAR_0);

 *VAR_2 = VAR_3->dma_addr;
 return (VAR_3->vaddr);
}
