
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdma_seg {int * v_addr; int bus_addr; int dma_map; } ;
struct fwdma_alloc_multi {int ssize; int esize; int nseg; int dma_tag; struct fwdma_seg* seg; } ;
struct firewire_comm {int dmat; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct firewire_comm*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_2 (struct fwdma_alloc_multi*,int ) ;
 int FUNC_3 (struct fwdma_alloc_multi*) ;
 int * FUNC_4 (int ,int *,int,int *,int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;

struct fwdma_alloc_multi *
FUNC_10(struct firewire_comm *VAR_8, int VAR_9,
  int VAR_10, int VAR_11, int VAR_12)
{
 struct fwdma_alloc_multi *VAR_13;
 struct fwdma_seg *VAR_14;
 bus_size_t VAR_15;
 int VAR_16;

 if (VAR_10 > VAR_6) {

  VAR_10 = VAR_15 = FUNC_9(VAR_10, VAR_6);
  VAR_16 = VAR_11;
 } else {

  VAR_15 = FUNC_8(VAR_6, VAR_10);
  VAR_16 = FUNC_5(VAR_11, VAR_15 / VAR_10);
 }
 VAR_13 = (struct fwdma_alloc_multi *)FUNC_6(sizeof(struct fwdma_alloc_multi)
   + sizeof(struct fwdma_seg)*VAR_16, VAR_4, VAR_5);
 VAR_13->ssize = VAR_15;
 VAR_13->esize = VAR_10;
 VAR_13->nseg = 0;
 if (FUNC_1(
              VAR_8->dmat,
                 VAR_9,
                0,
               VAR_2,
                VAR_1,
             ((void*)0), ((void*)0),
               VAR_15,
                 1,
                VAR_3,
             VAR_0,
               VAR_7,
              FUNC_0(VAR_8),
   &VAR_13->dma_tag)) {
  FUNC_7("fwdma_malloc_multiseg: tag_create failed\n");
  FUNC_2(VAR_13, VAR_4);
  return (((void*)0));
 }

 for (VAR_14 = &VAR_13->seg[0]; VAR_16--; VAR_14++) {
  VAR_14->v_addr = FUNC_4(VAR_13->dma_tag, &VAR_14->dma_map,
   VAR_15, &VAR_14->bus_addr, VAR_12);
  if (VAR_14->v_addr == ((void*)0)) {
   FUNC_7("fwdma_malloc_multi: malloc_size failed %d\n",
    VAR_13->nseg);
   FUNC_3(VAR_13);
   return (((void*)0));
  }
  VAR_13->nseg++;
 }
 return (VAR_13);
}
