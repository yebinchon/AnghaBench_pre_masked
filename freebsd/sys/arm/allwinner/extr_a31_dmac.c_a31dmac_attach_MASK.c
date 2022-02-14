
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct a31dmac_softc {int nchans; int * res; int * ih; TYPE_2__* chans; int dmat; int mtx; } ;
struct a31dmac_config {int nchans; } ;
typedef int * hwreset_t ;
typedef int device_t ;
typedef int * clk_t ;
struct TYPE_6__ {size_t index; int dmamap; int * desc; int * callbackarg; int * callback; struct a31dmac_softc* sc; } ;
struct TYPE_5__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct a31dmac_softc*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int *,int,int ,TYPE_2__*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,void**,int,int *) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int ,int,int *,int ,struct a31dmac_softc*,int **) ;
 int FUNC_13 (int ,int ,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int ,int ,int **) ;
 int FUNC_16 (int *) ;
 int VAR_20 ;
 struct a31dmac_softc* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int ,int ,int **) ;
 int FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (int,int ,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,char*,int *,int ) ;
 int FUNC_26 (int ) ;
 TYPE_1__* FUNC_27 (int ,int ) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_21)
{
 struct a31dmac_softc *VAR_22;
 struct a31dmac_config *VAR_23;
 u_int VAR_24;
 hwreset_t VAR_25;
 clk_t VAR_26;
 int VAR_27;

 VAR_22 = FUNC_17(VAR_21);
 VAR_23 = (void *)FUNC_27(VAR_21, VAR_20)->ocd_data;
 VAR_26 = ((void*)0);
 VAR_25 = ((void*)0);

 if (FUNC_4(VAR_21, VAR_19, VAR_22->res)) {
  FUNC_18(VAR_21, "cannot allocate resources for device\n");
  return (VAR_10);
 }

 FUNC_25(&VAR_22->mtx, "a31 dmac", ((void*)0), VAR_13);


 if (FUNC_15(VAR_21, 0, 0, &VAR_26) != 0) {
  FUNC_18(VAR_21, "cannot get clock\n");
  goto fail;
 }
 if (FUNC_14(VAR_26) != 0) {
  FUNC_18(VAR_21, "cannot enable clock\n");
  goto fail;
 }
 if (FUNC_21(VAR_21, 0, 0, &VAR_25) != 0) {
  FUNC_18(VAR_21, "cannot get hwreset\n");
  goto fail;
 }
 if (FUNC_20(VAR_25) != 0) {
  FUNC_18(VAR_21, "cannot de-assert reset\n");
  goto fail;
 }


 VAR_27 = FUNC_5(
  FUNC_10(VAR_21),
  VAR_4, 0,
  VAR_3,
  VAR_2,
  ((void*)0), ((void*)0),
  VAR_5, 1,
  VAR_5,
  0,
  ((void*)0), ((void*)0),
  &VAR_22->dmat);
 if (VAR_27 != 0) {
  FUNC_18(VAR_21, "cannot create dma tag\n");
  goto fail;
 }


 FUNC_1(VAR_22, VAR_6, 0);
 FUNC_1(VAR_22, VAR_7, 0);
 FUNC_1(VAR_22, VAR_8, ~0);
 FUNC_1(VAR_22, VAR_9, ~0);


 VAR_22->nchans = VAR_23->nchans;
 VAR_22->chans = FUNC_23(sizeof(*VAR_22->chans) * VAR_22->nchans, VAR_14,
     VAR_15 | VAR_16);

 for (VAR_24 = 0; VAR_24 < VAR_22->nchans; VAR_24++) {
  VAR_22->chans[VAR_24].sc = VAR_22;
  VAR_22->chans[VAR_24].index = VAR_24;
  VAR_22->chans[VAR_24].callback = ((void*)0);
  VAR_22->chans[VAR_24].callbackarg = ((void*)0);

  VAR_27 = FUNC_8(VAR_22->dmat,
      (void **)&VAR_22->chans[VAR_24].desc,
      VAR_1 | VAR_0,
      &VAR_22->chans[VAR_24].dmamap);
  if (VAR_27 != 0) {
   FUNC_18(VAR_21, "cannot allocate dma mem\n");
   goto fail;
  }
  VAR_27 = FUNC_6(VAR_22->dmat, VAR_22->chans[VAR_24].dmamap,
      VAR_22->chans[VAR_24].desc, sizeof(*VAR_22->chans[VAR_24].desc),
      VAR_17, &VAR_22->chans[VAR_24], VAR_1);
  if (VAR_27 != 0) {
   FUNC_18(VAR_21, "cannot load dma map\n");
   goto fail;
  }

  FUNC_1(VAR_22, FUNC_0(VAR_24), 0);
 }

 VAR_27 = FUNC_12(VAR_21, VAR_22->res[1], VAR_11 | VAR_12,
     ((void*)0), VAR_18, VAR_22, &VAR_22->ih);
 if (VAR_27 != 0) {
  FUNC_18(VAR_21, "could not setup interrupt handler\n");
  FUNC_11(VAR_21, VAR_19, VAR_22->res);
  FUNC_24(&VAR_22->mtx);
  return (VAR_10);
 }

 FUNC_2(FUNC_3(FUNC_26(VAR_21)), VAR_21);
 return (0);

fail:
 for (VAR_24 = 0; VAR_24 < VAR_22->nchans; VAR_24++)
  if (VAR_22->chans[VAR_24].desc != ((void*)0)) {
   FUNC_7(VAR_22->dmat, VAR_22->chans[VAR_24].dmamap);
   FUNC_9(VAR_22->dmat, VAR_22->chans[VAR_24].desc,
       VAR_22->chans[VAR_24].dmamap);
  }
 if (VAR_22->chans != ((void*)0))
  FUNC_19(VAR_22->chans, VAR_14);
 if (VAR_22->ih != ((void*)0))
  FUNC_13(VAR_21, VAR_22->res[1], VAR_22->ih);
 if (VAR_25 != ((void*)0))
  FUNC_22(VAR_25);
 if (VAR_26 != ((void*)0))
  FUNC_16(VAR_26);
 FUNC_11(VAR_21, VAR_19, VAR_22->res);

 return (VAR_10);
}
