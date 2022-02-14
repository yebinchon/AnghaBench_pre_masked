
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct linux_dma_obj {int dma_addr; int vaddr; int dmamap; } ;
struct dma_pool {int pool_entry_size; int pool_dmat; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_pool*) ;
 int FUNC_1 (struct dma_pool*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_1__*,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int
FUNC_5(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct linux_dma_obj *VAR_5 = VAR_1;
 struct dma_pool *VAR_6 = VAR_3;
 int VAR_7, VAR_8;
 bus_dma_segment_t VAR_9;

 VAR_8 = -1;
 FUNC_0(VAR_6);
 VAR_7 = FUNC_3(VAR_6->pool_dmat, VAR_5->dmamap,
     FUNC_4(VAR_5->vaddr), VAR_6->pool_entry_size, VAR_0,
     &VAR_9, &VAR_8);
 FUNC_1(VAR_6);
 if (VAR_7 != 0) {
  return (VAR_7);
 }
 FUNC_2(++VAR_8 == 1, ("More than one segment (nseg=%d)", VAR_8));
 VAR_5->dma_addr = VAR_9.ds_addr;

 return (0);
}
