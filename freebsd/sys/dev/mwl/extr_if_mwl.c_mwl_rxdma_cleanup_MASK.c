
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dd_desc_len; int * dd_bufptr; } ;
struct mwl_softc {scalar_t__ sc_rxmem_paddr; TYPE_1__ sc_rxdma; int * sc_rxmem; int sc_rxmap; int sc_rxdmat; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mwl_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct mwl_softc *VAR_1)
{
 if (VAR_1->sc_rxmem_paddr != 0) {
  FUNC_0(VAR_1->sc_rxdmat, VAR_1->sc_rxmap);
  VAR_1->sc_rxmem_paddr = 0;
 }
 if (VAR_1->sc_rxmem != ((void*)0)) {
  FUNC_1(VAR_1->sc_rxdmat, VAR_1->sc_rxmem, VAR_1->sc_rxmap);
  VAR_1->sc_rxmem = ((void*)0);
 }
 if (VAR_1->sc_rxdma.dd_bufptr != ((void*)0)) {
  FUNC_2(VAR_1->sc_rxdma.dd_bufptr, VAR_0);
  VAR_1->sc_rxdma.dd_bufptr = ((void*)0);
 }
 if (VAR_1->sc_rxdma.dd_desc_len != 0)
  FUNC_3(VAR_1, &VAR_1->sc_rxdma);
}
