
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_mw {size_t buff_size; int dma_addr; int dma_tag; int dma_map; int virt_addr; int addr_limit; int xlat_align; int xlat_align_size; } ;
struct ntb_transport_ctx {int dev; struct ntb_transport_mw* mw_vec; } ;
struct ntb_load_cb_args {int addr; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,size_t,int ,struct ntb_load_cb_args*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ntb_transport_ctx*,int) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,size_t) ;
 size_t FUNC_8 (size_t,int ) ;

__attribute__((used)) static int
FUNC_9(struct ntb_transport_ctx *VAR_7, int VAR_8, size_t VAR_9)
{
 struct ntb_transport_mw *VAR_10 = &VAR_7->mw_vec[VAR_8];
 struct ntb_load_cb_args VAR_11;
 size_t VAR_12;

 if (VAR_9 == 0)
  return (VAR_4);

 VAR_12 = FUNC_8(VAR_9, VAR_10->xlat_align_size);


 if (VAR_10->buff_size == VAR_12)
  return (0);

 if (VAR_10->buff_size != 0)
  FUNC_6(VAR_7, VAR_8);


 VAR_10->buff_size = VAR_12;

 if (FUNC_0(FUNC_5(VAR_7->dev), VAR_10->xlat_align, 0,
     VAR_10->addr_limit, VAR_3,
     ((void*)0), ((void*)0), VAR_10->buff_size, 1, VAR_10->buff_size,
     0, ((void*)0), ((void*)0), &VAR_10->dma_tag)) {
  FUNC_7(0, "Unable to create MW tag of size %zu\n",
      VAR_10->buff_size);
  VAR_10->buff_size = 0;
  return (VAR_5);
 }
 if (FUNC_3(VAR_10->dma_tag, (void **)&VAR_10->virt_addr,
     VAR_1 | VAR_2, &VAR_10->dma_map)) {
  FUNC_1(VAR_10->dma_tag);
  FUNC_7(0, "Unable to allocate MW buffer of size %zu\n",
      VAR_10->buff_size);
  VAR_10->buff_size = 0;
  return (VAR_5);
 }
 if (FUNC_2(VAR_10->dma_tag, VAR_10->dma_map, VAR_10->virt_addr,
     VAR_10->buff_size, VAR_6, &VAR_11, VAR_0) || VAR_11.error) {
  FUNC_4(VAR_10->dma_tag, VAR_10->virt_addr, VAR_10->dma_map);
  FUNC_1(VAR_10->dma_tag);
  FUNC_7(0, "Unable to load MW buffer of size %zu\n",
      VAR_10->buff_size);
  VAR_10->buff_size = 0;
  return (VAR_5);
 }
 VAR_10->dma_addr = VAR_11.addr;

 return (0);
}
