
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_mem {scalar_t__ dma_tag; int dma_map; scalar_t__ virt_addr; int size; int dma_addr; int align; } ;
struct TYPE_4__ {int pqi_parent_dmat; } ;
struct TYPE_5__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,int ,int ,int *,int ) ;
 int FUNC_5 (scalar_t__,void**,int ,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int VAR_2 ;

int FUNC_8(pqisrc_softstate_t *VAR_3, struct dma_mem *VAR_4)
{
 int VAR_5 = 0;




 if ((VAR_5 = FUNC_2(
  VAR_3->os_specific.pqi_parent_dmat,
  VAR_4->align, 0,
  VAR_1,
  VAR_1,
  ((void*)0), ((void*)0),
  VAR_4->size,
  1,
  VAR_4->size,
  0,
  ((void*)0), ((void*)0),
  &VAR_4->dma_tag)) != 0 ) {
         FUNC_0("can't allocate DMA tag with error = 0x%x\n", VAR_5);
  goto err_out;
 }
 if ((VAR_5 = FUNC_5(VAR_4->dma_tag, (void **)&VAR_4->virt_addr,
  VAR_0, &VAR_4->dma_map)) != 0) {
  FUNC_0("can't allocate DMA memory for required object 				with error = 0x%x\n", VAR_5);

  goto err_mem;
 }

 if((VAR_5 = FUNC_4(VAR_4->dma_tag, VAR_4->dma_map,
  VAR_4->virt_addr, VAR_4->size,
  VAR_2, &VAR_4->dma_addr, 0)) != 0) {
  FUNC_0("can't load DMA memory for required 			object with error = 0x%x\n", VAR_5);

  goto err_load;
 }

 FUNC_7(VAR_4->virt_addr, 0, VAR_4->size);


 return VAR_5;

err_load:
 if(VAR_4->virt_addr)
  FUNC_6(VAR_4->dma_tag, VAR_4->virt_addr,
    VAR_4->dma_map);
err_mem:
 if(VAR_4->dma_tag)
  FUNC_3(VAR_4->dma_tag);
err_out:
 FUNC_1("failed OUT\n");
 return VAR_5;
}
