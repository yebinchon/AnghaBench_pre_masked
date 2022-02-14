
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {scalar_t__ chnum; void* dev; struct aic_softc* sc; } ;
struct aic_softc {void* dev; int internal_codec; int ih; int * xchan; int * res; scalar_t__ aic_fifo_paddr; int bsh; int bst; int * lock; int * xdma_tx; scalar_t__ pos; } ;
typedef void* device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct sc_pcminfo*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aic_softc*) ;
 int FUNC_3 (struct aic_softc*) ;
 int FUNC_4 (struct aic_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (void*,int ,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,char*) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (void*,int *,struct sc_pcminfo*) ;
 char* FUNC_12 (void*) ;
 int FUNC_13 (void*,int ,int *,struct sc_pcminfo*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*,struct sc_pcminfo*,int,int ) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (void*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int * FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int,char*,char*) ;
 int VAR_15 ;
 int * FUNC_23 (int *,int ) ;
 int * FUNC_24 (void*,char*) ;
 int FUNC_25 (int *,int ,struct sc_pcminfo*,int *) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_16)
{
 char VAR_17[VAR_10];
 struct sc_pcminfo *VAR_18;
 struct aic_softc *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_10(sizeof(*VAR_19), VAR_4, VAR_5 | VAR_6);
 VAR_19->dev = VAR_16;
 VAR_19->pos = 0;
 VAR_19->internal_codec = 1;


 VAR_19->xdma_tx = FUNC_24(VAR_19->dev, "tx");
 if (VAR_19->xdma_tx == ((void*)0)) {
  FUNC_9(VAR_16, "Can't find DMA controller.\n");
  return (VAR_3);
 }


 VAR_19->xchan = FUNC_23(VAR_19->xdma_tx, 0);
 if (VAR_19->xchan == ((void*)0)) {
  FUNC_9(VAR_16, "Can't alloc virtual DMA channel.\n");
  return (VAR_3);
 }


 VAR_19->lock = FUNC_21(FUNC_6(VAR_16), "aic softc");
 if (VAR_19->lock == ((void*)0)) {
  FUNC_9(VAR_16, "Can't create mtx.\n");
  return (VAR_3);
 }

 if (FUNC_5(VAR_16, VAR_12, VAR_19->res)) {
  FUNC_9(VAR_16,
      "could not allocate resources for device\n");
  return (VAR_3);
 }


 VAR_19->bst = FUNC_19(VAR_19->res[0]);
 VAR_19->bsh = FUNC_18(VAR_19->res[0]);
 VAR_19->aic_fifo_paddr = FUNC_20(VAR_19->res[0]) + VAR_0;


 VAR_18 = FUNC_10(sizeof(struct sc_pcminfo), VAR_4, VAR_5 | VAR_6);
 VAR_18->sc = VAR_19;
 VAR_18->dev = VAR_16;


 VAR_20 = FUNC_4(VAR_19);
 if (VAR_20 != 0) {
  FUNC_9(VAR_16, "Can't setup sound buffer.\n");
  return (VAR_3);
 }


 VAR_20 = FUNC_3(VAR_19);
 if (VAR_20 != 0) {
  FUNC_9(VAR_16, "Can't configure clocks.\n");
  return (VAR_3);
 }

 VAR_20 = FUNC_2(VAR_19);
 if (VAR_20 != 0) {
  FUNC_9(VAR_16, "Can't configure AIC.\n");
  return (VAR_3);
 }

 FUNC_16(VAR_16, FUNC_14(VAR_16) | VAR_9);


 VAR_20 = FUNC_25(VAR_19->xchan, VAR_11, VAR_18, &VAR_19->ih);
 if (VAR_20) {
  FUNC_9(VAR_19->dev,
      "Can't setup xDMA interrupt handler.\n");
  return (VAR_3);
 }

 VAR_20 = FUNC_15(VAR_16, VAR_18, 1, 0);
 if (VAR_20) {
  FUNC_9(VAR_16, "Can't register pcm.\n");
  return (VAR_3);
 }

 VAR_18->chnum = 0;
 FUNC_13(VAR_16, VAR_8, &VAR_13, VAR_18);
 VAR_18->chnum++;

 FUNC_22(VAR_17, VAR_10, "at %s", FUNC_12(VAR_16));
 FUNC_17(VAR_16, VAR_17);

 FUNC_11(VAR_16, &VAR_14, VAR_18);


 FUNC_0(FUNC_7(VAR_16),
     FUNC_1(FUNC_8(VAR_16)),
     VAR_7, "internal_codec", VAR_2 | VAR_1,
     VAR_18, 0, VAR_15, "I",
     "use internal audio codec");

 return (0);
}
