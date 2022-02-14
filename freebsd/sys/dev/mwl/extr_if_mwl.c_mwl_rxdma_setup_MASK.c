
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
struct TYPE_3__ {struct mwl_rxdesc* dd_desc; struct mwl_rxbuf* dd_bufptr; } ;
struct mwl_softc {int sc_rxmemsize; int sc_nrxfree; int sc_rxfree; scalar_t__ sc_rxmem; int sc_rxbuf; TYPE_1__ sc_rxdma; int sc_dev; int sc_rxmem_paddr; int sc_rxmap; int sc_rxdmat; int sc_dmat; } ;
struct mwl_rxdesc {int dummy; } ;
struct mwl_rxbuf {int * bf_data; int bf_daddr; struct mwl_rxdesc* bf_desc; } ;
struct mwl_jumbo {int dummy; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct mwl_rxdesc*) ;
 int VAR_5 ;
 struct mwl_jumbo* FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mwl_jumbo*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mwl_rxbuf*,int ) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ,scalar_t__,int,int ,int *,int) ;
 int FUNC_8 (int ,void**,int,int *) ;
 int FUNC_9 (int ,char*,...) ;
 struct mwl_rxbuf* FUNC_10 (int,int ,int) ;
 int FUNC_11 (struct mwl_softc*,char*,TYPE_1__*,int,int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct mwl_softc *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;
 struct mwl_rxbuf *VAR_20;
 struct mwl_jumbo *VAR_21;
 struct mwl_rxdesc *VAR_22;
 caddr_t VAR_23;

 VAR_16 = FUNC_11(VAR_15, "rx", &VAR_15->sc_rxdma,
   VAR_13, sizeof(struct mwl_rxbuf),
   1, sizeof(struct mwl_rxdesc));
 if (VAR_16 != 0)
  return VAR_16;
 if (VAR_12 < 2*VAR_13) {
  FUNC_9(VAR_15->sc_dev,
      "too few rx dma buffers (%d); increasing to %d\n",
      VAR_12, 2*VAR_13);
  VAR_12 = 2*VAR_13;
 }
 VAR_17 = FUNC_12(VAR_5, VAR_9);
 VAR_15->sc_rxmemsize = VAR_12*VAR_17;

 VAR_16 = FUNC_6(VAR_15->sc_dmat,
         VAR_9, 0,
         VAR_4,
         VAR_3,
         ((void*)0), ((void*)0),
         VAR_15->sc_rxmemsize,
         1,
         VAR_15->sc_rxmemsize,
         VAR_0,
         ((void*)0),
         ((void*)0),
         &VAR_15->sc_rxdmat);
 if (VAR_16 != 0) {
  FUNC_9(VAR_15->sc_dev, "could not create rx DMA tag\n");
  return VAR_16;
 }

 VAR_16 = FUNC_8(VAR_15->sc_rxdmat, (void**) &VAR_15->sc_rxmem,
     VAR_2 | VAR_1,
     &VAR_15->sc_rxmap);
 if (VAR_16 != 0) {
  FUNC_9(VAR_15->sc_dev, "could not alloc %ju bytes of rx DMA memory\n",
      (uintmax_t) VAR_15->sc_rxmemsize);
  return VAR_16;
 }

 VAR_16 = FUNC_7(VAR_15->sc_rxdmat, VAR_15->sc_rxmap,
    VAR_15->sc_rxmem, VAR_15->sc_rxmemsize,
    VAR_11, &VAR_15->sc_rxmem_paddr,
    VAR_2);
 if (VAR_16 != 0) {
  FUNC_9(VAR_15->sc_dev, "could not load rx DMA map\n");
  return VAR_16;
 }




 VAR_18 = VAR_13 * sizeof(struct mwl_rxbuf);
 VAR_20 = FUNC_10(VAR_18, VAR_6, VAR_7 | VAR_8);
 if (VAR_20 == ((void*)0)) {
  FUNC_9(VAR_15->sc_dev, "malloc of %u rx buffers failed\n", VAR_18);
  return VAR_16;
 }
 VAR_15->sc_rxdma.dd_bufptr = VAR_20;

 FUNC_4(&VAR_15->sc_rxbuf);
 VAR_22 = VAR_15->sc_rxdma.dd_desc;
 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++, VAR_20++, VAR_22++) {
  VAR_20->bf_desc = VAR_22;
  VAR_20->bf_daddr = FUNC_0(&VAR_15->sc_rxdma, VAR_22);

  VAR_20->bf_data = ((uint8_t *)VAR_15->sc_rxmem) + (VAR_19*VAR_17);

  FUNC_5(&VAR_15->sc_rxbuf, VAR_20, VAR_10);
 }




 FUNC_2(&VAR_15->sc_rxfree);
 for (; VAR_19 < VAR_12; VAR_19++) {
  VAR_23 = ((uint8_t *)VAR_15->sc_rxmem) + (VAR_19*VAR_17);
  VAR_21 = FUNC_1(VAR_23);
  FUNC_3(&VAR_15->sc_rxfree, VAR_21, VAR_14);
  VAR_15->sc_nrxfree++;
 }
 return 0;
}
