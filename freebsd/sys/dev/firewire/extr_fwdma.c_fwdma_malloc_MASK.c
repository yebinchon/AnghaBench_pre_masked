
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdma_alloc {void* v_addr; int bus_addr; int dma_map; int dma_tag; } ;
struct firewire_comm {int dmat; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct firewire_comm*) ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,void*,int ,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;

void *
FUNC_5(struct firewire_comm *VAR_6, int VAR_7, bus_size_t VAR_8,
 struct fwdma_alloc *VAR_9, int VAR_10)
{
 int VAR_11;

 VAR_9->v_addr = ((void*)0);
 VAR_11 = FUNC_1(
             VAR_6->dmat,
                VAR_7,
               0,
              VAR_2,
               VAR_1,
            ((void*)0), ((void*)0),
              VAR_8,
                1,
               VAR_3,
            VAR_0,
              VAR_4,
             FUNC_0(VAR_6),
  &VAR_9->dma_tag);
 if (VAR_11) {
  FUNC_4("fwdma_malloc: failed(1)\n");
  return (((void*)0));
 }

 VAR_11 = FUNC_3(VAR_9->dma_tag, &VAR_9->v_addr,
  VAR_10, &VAR_9->dma_map);
 if (VAR_11) {
  FUNC_4("fwdma_malloc: failed(2)\n");

  return (((void*)0));
 }

 FUNC_2(VAR_9->dma_tag, VAR_9->dma_map, VAR_9->v_addr,
  VAR_8, VAR_5, &VAR_9->bus_addr, 0);

 return (VAR_9->v_addr);
}
