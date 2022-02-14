
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mge_softc {int ifp; int dev; int mge_desc_dtag; } ;
struct mge_desc_wrapper {TYPE_1__* mge_desc; struct mbuf* buffer; int buffer_dmap; void* mge_desc_paddr; int desc_dmap; } ;
struct mge_desc {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int bus_dma_tag_t ;
typedef void* bus_addr_t ;
struct TYPE_3__ {void* buffer; void* next_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int,int ,void**,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct mge_softc *VAR_8, struct mge_desc_wrapper* VAR_9,
    uint32_t VAR_10, bus_dma_tag_t *VAR_11)
{
 struct mge_desc_wrapper *VAR_12;
 bus_addr_t VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = 0;
 for (VAR_14 = VAR_10 - 1; VAR_14 >= 0; VAR_14--) {
  VAR_12 = &(VAR_9[VAR_14]);
  VAR_15 = FUNC_3(VAR_8->mge_desc_dtag,
      (void**)&(VAR_12->mge_desc),
      VAR_1 | VAR_2 | VAR_0,
      &(VAR_12->desc_dmap));

  if (VAR_15) {
   FUNC_6(VAR_8->ifp, "failed to allocate DMA memory\n");
   VAR_12->mge_desc = ((void*)0);
   return (VAR_5);
  }

  VAR_15 = FUNC_2(VAR_8->mge_desc_dtag, VAR_12->desc_dmap,
      VAR_12->mge_desc, sizeof(struct mge_desc), VAR_7,
      &(VAR_12->mge_desc_paddr), VAR_1);

  if (VAR_15) {
   FUNC_6(VAR_8->ifp, "can't load descriptor\n");
   FUNC_4(VAR_8->mge_desc_dtag, VAR_12->mge_desc,
       VAR_12->desc_dmap);
   VAR_12->mge_desc = ((void*)0);
   return (VAR_5);
  }


  VAR_12->mge_desc->next_desc = VAR_13;
  VAR_13 = VAR_12->mge_desc_paddr;
 }
 VAR_9[VAR_10 - 1].mge_desc->next_desc = VAR_13;


 VAR_15 = FUNC_0(FUNC_5(VAR_8->dev),
     1, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_6, 1,
     VAR_6, 0,
     ((void*)0), ((void*)0),
     VAR_11);
 if (VAR_15) {
  FUNC_6(VAR_8->ifp, "failed to create busdma tag for mbufs\n");
  return (VAR_5);
 }


 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_12 = &(VAR_9[VAR_14]);
  VAR_15 = FUNC_1(*VAR_11, 0, &VAR_12->buffer_dmap);
  if (VAR_15) {
   FUNC_6(VAR_8->ifp, "failed to create map for mbuf\n");
   return (VAR_5);
  }

  VAR_12->buffer = (struct mbuf*)((void*)0);
  VAR_12->mge_desc->buffer = (bus_addr_t)((void*)0);
 }

 return (0);
}
