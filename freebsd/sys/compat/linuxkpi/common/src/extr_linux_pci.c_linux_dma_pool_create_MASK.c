
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_dma_priv {int dma_mask; } ;
struct dma_pool {size_t pool_entry_size; int pool_ptree; int pool_lock; int pool_zone; int pool_dmat; struct device* pool_device; } ;
struct device {int bsddev; struct linux_dma_priv* dma_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t,size_t,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dma_pool*) ;
 struct dma_pool* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ,int ,int *,int *,int ,int ,struct dma_pool*,int ) ;

struct dma_pool *
FUNC_7(char *VAR_7, struct device *VAR_8, size_t VAR_9,
    size_t VAR_10, size_t VAR_11)
{
 struct linux_dma_priv *VAR_12;
 struct dma_pool *VAR_13;

 VAR_12 = VAR_8->dma_priv;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_1);
 VAR_13->pool_device = VAR_8;
 VAR_13->pool_entry_size = VAR_9;

 if (FUNC_0(FUNC_1(VAR_8->bsddev),
     VAR_10, VAR_11,
     VAR_12->dma_mask,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_9,
     1,
     VAR_9,
     0,
     ((void*)0), ((void*)0),
     &VAR_13->pool_dmat)) {
  FUNC_2(VAR_13);
  return (((void*)0));
 }

 VAR_13->pool_zone = FUNC_6(VAR_7, -1, VAR_3,
     VAR_4, ((void*)0), ((void*)0), VAR_5,
     VAR_6, VAR_13, 0);

 FUNC_4(&VAR_13->pool_lock, "lkpi-dma-pool", ((void*)0), VAR_2);
 FUNC_5(&VAR_13->pool_ptree);

 return (VAR_13);
}
