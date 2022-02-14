
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_mw {size_t phys_size; scalar_t__ dma_map; scalar_t__ dma_tag; scalar_t__ dma_base; scalar_t__ virt_addr; void* size; int addr_limit; int xlat_align; int xlat_align_size; } ;
struct tool_ctx {int dev; TYPE_1__* peers; } ;
struct ntb_tool_load_cb_args {scalar_t__ addr; scalar_t__ error; } ;
struct TYPE_2__ {struct tool_mw* inmws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int *,void*,int,void*,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,void*,int ,struct ntb_tool_load_cb_args*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,void**,int,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,size_t,size_t,...) ;
 int FUNC_8 (int ,unsigned int,scalar_t__,void*) ;
 int VAR_5 ;
 void* FUNC_9 (size_t,int ) ;

__attribute__((used)) static int
FUNC_10(struct tool_ctx *VAR_6, unsigned int VAR_7, unsigned int VAR_8,
    size_t VAR_9)
{
 struct tool_mw *VAR_10 = &VAR_6->peers[VAR_7].inmws[VAR_8];
 struct ntb_tool_load_cb_args VAR_11;
 int VAR_12;

 if (VAR_9 == 0)
  VAR_10->size = FUNC_9(VAR_10->phys_size, VAR_10->xlat_align_size);
 else
  VAR_10->size = FUNC_9(VAR_9, VAR_10->xlat_align_size);

 FUNC_7(VAR_6->dev, "mw_size %zi req_size %zi buff %zi\n",
     VAR_10->phys_size, VAR_9, VAR_10->size);

 if (FUNC_0(FUNC_6(VAR_6->dev), VAR_10->xlat_align, 0,
     VAR_10->addr_limit, VAR_3, ((void*)0), ((void*)0), VAR_10->size, 1,
     VAR_10->size, 0, ((void*)0), ((void*)0), &VAR_10->dma_tag)) {
  FUNC_7(VAR_6->dev, "Unable to create MW tag of size "
      "%zu/%zu\n", VAR_10->phys_size, VAR_10->size);
  VAR_12 = VAR_4;
  goto err_free_dma_var;
 }

 if (FUNC_4(VAR_10->dma_tag, (void **)&VAR_10->virt_addr,
     VAR_1 | VAR_2, &VAR_10->dma_map)) {
  FUNC_7(VAR_6->dev, "Unable to allocate MW buffer of size "
      "%zu/%zu\n", VAR_10->phys_size, VAR_10->size);
  VAR_12 = VAR_4;
  goto err_free_tag_rem;
 }

 if (FUNC_2(VAR_10->dma_tag, VAR_10->dma_map, VAR_10->virt_addr,
     VAR_10->size, VAR_5, &VAR_11, VAR_0) || VAR_11.error) {
  FUNC_7(VAR_6->dev, "Unable to load MW buffer of size "
      "%zu/%zu\n", VAR_10->phys_size, VAR_10->size);
  VAR_12 = VAR_4;
  goto err_free_dma;
 }
 VAR_10->dma_base = VAR_11.addr;

 VAR_12 = FUNC_8(VAR_6->dev, VAR_8, VAR_10->dma_base, VAR_10->size);
 if (VAR_12)
  goto err_free_mw;

 return (0);

err_free_mw:
 FUNC_3(VAR_10->dma_tag, VAR_10->dma_map);

err_free_dma:
 FUNC_5(VAR_10->dma_tag, VAR_10->virt_addr, VAR_10->dma_map);

err_free_tag_rem:
 FUNC_1(VAR_10->dma_tag);

err_free_dma_var:
 VAR_10->size = 0;
 VAR_10->virt_addr = 0;
 VAR_10->dma_base = 0;
 VAR_10->dma_tag = 0;
 VAR_10->dma_map = 0;

 return (VAR_12);
}
