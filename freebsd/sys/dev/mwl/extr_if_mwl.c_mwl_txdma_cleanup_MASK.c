
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dd_desc_len; struct mwl_txbuf* dd_bufptr; } ;
struct mwl_txq {TYPE_1__ dma; scalar_t__ nfree; int free; } ;
struct mwl_txbuf {int * bf_dmamap; int * bf_node; int * bf_m; } ;
struct mwl_softc {int sc_dmat; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mwl_txbuf*,int ) ;
 int FUNC_4 (struct mwl_softc*,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct mwl_softc *VAR_2, struct mwl_txq *VAR_3)
{
 struct mwl_txbuf *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->dma.dd_bufptr;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
  FUNC_0(VAR_4->bf_m == ((void*)0), ("mbuf on free list"));
  FUNC_0(VAR_4->bf_node == ((void*)0), ("node on free list"));
  if (VAR_4->bf_dmamap != ((void*)0))
   FUNC_2(VAR_2->sc_dmat, VAR_4->bf_dmamap);
 }
 FUNC_1(&VAR_3->free);
 VAR_3->nfree = 0;
 if (VAR_3->dma.dd_bufptr != ((void*)0)) {
  FUNC_3(VAR_3->dma.dd_bufptr, VAR_0);
  VAR_3->dma.dd_bufptr = ((void*)0);
 }
 if (VAR_3->dma.dd_desc_len != 0)
  FUNC_4(VAR_2, &VAR_3->dma);
}
