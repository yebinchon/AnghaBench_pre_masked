
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_pool {int type; char* name; int pools; int dev_name; scalar_t__ nrefills; int size; int gfp_flags; scalar_t__ nfrees; scalar_t__ npages_in_use; scalar_t__ npages_free; struct device* dev; int lock; int inuse_list; int free_list; struct dma_pool* pool; } ;
struct device_pools {int type; char* name; int pools; int dev_name; scalar_t__ nrefills; int size; int gfp_flags; scalar_t__ nfrees; scalar_t__ npages_in_use; scalar_t__ npages_free; struct device* dev; int lock; int inuse_list; int free_list; struct device_pools* pool; } ;
struct device {int dma_pools; } ;
typedef int gfp_t ;
typedef enum pool_type { ____Placeholder_pool_type } pool_type ;
struct TYPE_2__ {int lock; int npools; int pools; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_pool* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 char* FUNC_2 (struct device*) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct dma_pool**) ;
 struct dma_pool** FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct dma_pool**) ;
 int FUNC_8 (struct dma_pool*) ;
 struct dma_pool* FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int,char*,char*,...) ;
 int FUNC_14 (int *) ;
 int VAR_10 ;

__attribute__((used)) static struct dma_pool *FUNC_15(struct device *VAR_11, gfp_t VAR_12,
       enum pool_type VAR_13)
{
 char *VAR_14[] = {"wc", "uc", "cached", " dma32", "unknown",};
 enum pool_type VAR_15[] = {VAR_7, VAR_5, VAR_3, VAR_4, VAR_6};
 struct device_pools *VAR_16 = ((void*)0);
 struct dma_pool *VAR_17 = ((void*)0), **VAR_18;
 unsigned VAR_19;
 int VAR_20 = -VAR_0;
 char *VAR_21;

 if (!VAR_11)
  return ((void*)0);

 VAR_18 = FUNC_6(VAR_10, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return ((void*)0);

 VAR_20 = -VAR_1;

 VAR_17 = FUNC_9(sizeof(struct dma_pool), VAR_2,
       FUNC_4(VAR_11));
 if (!VAR_17)
  goto err_mem;

 VAR_16 = FUNC_9(sizeof(struct device_pools), VAR_2,
    FUNC_4(VAR_11));
 if (!VAR_16)
  goto err_mem;

 FUNC_1(&VAR_16->pools);
 VAR_16->dev = VAR_11;
 VAR_16->pool = VAR_17;

 FUNC_1(&VAR_17->free_list);
 FUNC_1(&VAR_17->inuse_list);
 FUNC_1(&VAR_17->pools);
 FUNC_14(&VAR_17->lock);
 VAR_17->dev = VAR_11;
 VAR_17->npages_free = VAR_17->npages_in_use = 0;
 VAR_17->nfrees = 0;
 VAR_17->gfp_flags = VAR_12;
 VAR_17->size = VAR_8;
 VAR_17->type = VAR_13;
 VAR_17->nrefills = 0;
 VAR_21 = VAR_17->name;
 for (VAR_19 = 0; VAR_19 < 5; VAR_19++) {
  if (VAR_13 & VAR_15[VAR_19]) {
   VAR_21 += FUNC_13(VAR_21, sizeof(VAR_17->name) - (VAR_21 - VAR_17->name),
          "%s", VAR_14[VAR_19]);
  }
 }
 *VAR_21 = 0;


 FUNC_13(VAR_17->dev_name, sizeof(VAR_17->dev_name), "%s %s",
   FUNC_2(VAR_11), FUNC_3(VAR_11));
 FUNC_11(&VAR_9->lock);

 FUNC_10(&VAR_16->pools, &VAR_9->pools);
 VAR_9->npools++;

 FUNC_10(&VAR_17->pools, &VAR_11->dma_pools);
 FUNC_12(&VAR_9->lock);

 *VAR_18 = VAR_17;
 FUNC_5(VAR_11, VAR_18);

 return VAR_17;
err_mem:
 FUNC_7(VAR_18);
 FUNC_8(VAR_16);
 FUNC_8(VAR_17);
 return FUNC_0(VAR_20);
}
