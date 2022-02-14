
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct hifn_softc {int sc_flags; int sc_pllconfig; scalar_t__ sc_st0; scalar_t__ sc_sh0; scalar_t__ sc_st1; scalar_t__ sc_sh1; int sc_drammodel; int sc_ramsize; scalar_t__ sc_cid; int sc_mtx; int * sc_bar0res; int * sc_bar1res; int sc_dmat; int sc_dmamap; struct hifn_dma* sc_dma; int * sc_irq; int sc_intrhand; int sc_tickto; int sc_dev; int sc_dma_physaddr; void* sc_bar1_lastreg; void* sc_bar0_lastreg; } ;
struct hifn_session {int dummy; } ;
struct hifn_dma {int dummy; } ;
typedef int device_t ;
typedef struct hifn_dma* caddr_t ;
typedef void* bus_size_t ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;


 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int,char*) ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_1 (struct hifn_softc*,int ) ;
 int FUNC_2 (struct hifn_softc*,int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_3 (struct hifn_softc*,int ,int) ;
 int FUNC_4 (struct hifn_softc*,int ,int) ;
 void* FUNC_5 (int ,int ,int*,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,struct hifn_dma*,int,int ,int *,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,void**,int ,int *) ;
 int FUNC_14 (int ,struct hifn_dma*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int,int *) ;
 scalar_t__ FUNC_17 (int ,int *,int,int *,int ,struct hifn_softc*,int *) ;
 int FUNC_18 (int ,int *,int ) ;
 int FUNC_19 (struct hifn_dma*,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int ,int ,struct hifn_softc*) ;
 scalar_t__ FUNC_22 (int ,int,int ) ;
 int FUNC_23 (scalar_t__,int ,int ,int ) ;
 int FUNC_24 (int ) ;
 struct hifn_softc* FUNC_25 (int ) ;
 int FUNC_26 (int ,char*,...) ;
 int VAR_51 ;
 int FUNC_27 (struct hifn_softc*) ;
 scalar_t__ FUNC_28 (struct hifn_softc*) ;
 int FUNC_29 (int ,int*) ;
 int FUNC_30 (struct hifn_softc*) ;
 int FUNC_31 (struct hifn_softc*) ;
 int FUNC_32 (struct hifn_softc*) ;
 int VAR_52 ;
 int FUNC_33 (struct hifn_softc*) ;
 scalar_t__ FUNC_34 (struct hifn_softc*) ;
 int FUNC_35 (struct hifn_softc*,int ) ;
 int FUNC_36 (struct hifn_softc*) ;
 int FUNC_37 (struct hifn_softc*) ;
 int FUNC_38 (struct hifn_softc*) ;
 int FUNC_39 (struct hifn_softc*) ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *,int ,char*,int ) ;
 int FUNC_42 (int ) ;
 scalar_t__ FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 scalar_t__ FUNC_45 (int ) ;
 int FUNC_46 (char*,...) ;
 void* FUNC_47 (int *) ;
 void* FUNC_48 (int *) ;

__attribute__((used)) static int
FUNC_49(device_t VAR_55)
{
 struct hifn_softc *VAR_56 = FUNC_25(VAR_55);
 caddr_t VAR_57;
 int VAR_58, VAR_59;
 char VAR_60;
 u_int16_t VAR_61, VAR_62;

 VAR_56->sc_dev = VAR_55;

 FUNC_41(&VAR_56->sc_mtx, FUNC_24(VAR_55), "hifn driver", VAR_39);







 if (FUNC_45(VAR_55) == VAR_45 &&
     (FUNC_43(VAR_55) == VAR_41 ||
      FUNC_43(VAR_55) == VAR_42 ||
      FUNC_43(VAR_55) == VAR_43))
  VAR_56->sc_flags = VAR_27 | VAR_26;




 if (FUNC_45(VAR_55) == VAR_45 &&
     FUNC_43(VAR_55) == VAR_40)
  VAR_56->sc_flags |= VAR_28 | VAR_27;




 if (FUNC_45(VAR_55) == VAR_45 &&
     (FUNC_43(VAR_55) == VAR_42 ||
      FUNC_43(VAR_55) == VAR_43)) {
  VAR_56->sc_flags |= VAR_29 | VAR_25;





  FUNC_29(VAR_55, &VAR_56->sc_pllconfig);
 }







 FUNC_42(VAR_55);

 VAR_59 = VAR_20;
 VAR_56->sc_bar0res = FUNC_5(VAR_55, VAR_50, &VAR_59,
       VAR_47);
 if (VAR_56->sc_bar0res == ((void*)0)) {
  FUNC_26(VAR_55, "cannot map bar%d register space\n", 0);
  goto fail_pci;
 }
 VAR_56->sc_st0 = FUNC_48(VAR_56->sc_bar0res);
 VAR_56->sc_sh0 = FUNC_47(VAR_56->sc_bar0res);
 VAR_56->sc_bar0_lastreg = (bus_size_t) -1;

 VAR_59 = VAR_21;
 VAR_56->sc_bar1res = FUNC_5(VAR_55, VAR_50, &VAR_59,
      VAR_47);
 if (VAR_56->sc_bar1res == ((void*)0)) {
  FUNC_26(VAR_55, "cannot map bar%d register space\n", 1);
  goto fail_io0;
 }
 VAR_56->sc_st1 = FUNC_48(VAR_56->sc_bar1res);
 VAR_56->sc_sh1 = FUNC_47(VAR_56->sc_bar1res);
 VAR_56->sc_bar1_lastreg = (bus_size_t) -1;

 FUNC_38(VAR_56);





 if (FUNC_6(FUNC_15(VAR_55),
          1, 0,
          VAR_5,
          VAR_4,
          ((void*)0), ((void*)0),
          VAR_30,
          VAR_38,
          VAR_31,
          VAR_2,
          ((void*)0),
          ((void*)0),
          &VAR_56->sc_dmat)) {
  FUNC_26(VAR_55, "cannot allocate DMA tag\n");
  goto fail_io1;
 }
 if (FUNC_8(VAR_56->sc_dmat, VAR_3, &VAR_56->sc_dmamap)) {
  FUNC_26(VAR_55, "cannot create dma map\n");
  FUNC_7(VAR_56->sc_dmat);
  goto fail_io1;
 }
 if (FUNC_13(VAR_56->sc_dmat, (void**) &VAR_57, VAR_3, &VAR_56->sc_dmamap)) {
  FUNC_26(VAR_55, "cannot alloc dma buffer\n");
  FUNC_9(VAR_56->sc_dmat, VAR_56->sc_dmamap);
  FUNC_7(VAR_56->sc_dmat);
  goto fail_io1;
 }
 if (FUNC_10(VAR_56->sc_dmat, VAR_56->sc_dmamap, VAR_57,
        sizeof (*VAR_56->sc_dma),
        VAR_51, &VAR_56->sc_dma_physaddr,
        VAR_3)) {
  FUNC_26(VAR_55, "cannot load dma map\n");
  FUNC_14(VAR_56->sc_dmat, VAR_57, VAR_56->sc_dmamap);
  FUNC_7(VAR_56->sc_dmat);
  goto fail_io1;
 }
 VAR_56->sc_dma = (struct hifn_dma *)VAR_57;
 FUNC_19(VAR_56->sc_dma, sizeof(*VAR_56->sc_dma));

 FUNC_0(VAR_56->sc_st0 != 0, ("hifn_attach: null bar0 tag!"));
 FUNC_0(VAR_56->sc_sh0 != 0, ("hifn_attach: null bar0 handle!"));
 FUNC_0(VAR_56->sc_st1 != 0, ("hifn_attach: null bar1 tag!"));
 FUNC_0(VAR_56->sc_sh1 != 0, ("hifn_attach: null bar1 handle!"));
 FUNC_35(VAR_56, 0);

 if (FUNC_28(VAR_56) != 0) {
  FUNC_26(VAR_55, "crypto enabling failed\n");
  goto fail_mem;
 }
 FUNC_36(VAR_56);

 FUNC_30(VAR_56);
 FUNC_31(VAR_56);


 if (VAR_56->sc_flags & VAR_29)
  VAR_56->sc_drammodel = 1;
 else if (FUNC_34(VAR_56))
  goto fail_mem;

 if (VAR_56->sc_drammodel == 0)
  FUNC_39(VAR_56);
 else
  FUNC_27(VAR_56);





 if (FUNC_45(VAR_55) == VAR_46 &&
     FUNC_43(VAR_55) == VAR_44 &&
     FUNC_44(VAR_55) == 0x61)
  VAR_56->sc_ramsize >>= 1;




 VAR_59 = 0;
 VAR_56->sc_irq = FUNC_5(VAR_55, VAR_49, &VAR_59,
         VAR_48|VAR_47);
 if (VAR_56->sc_irq == ((void*)0)) {
  FUNC_26(VAR_55, "could not map interrupt\n");
  goto fail_mem;
 }




 if (FUNC_17(VAR_55, VAR_56->sc_irq, VAR_37 | VAR_36,
      ((void*)0), VAR_52, VAR_56, &VAR_56->sc_intrhand)) {
  FUNC_26(VAR_55, "could not setup interrupt\n");
  goto fail_intr2;
 }

 FUNC_37(VAR_56);





 VAR_62 = FUNC_2(VAR_56, VAR_19) & 0xffff;

 VAR_58 = VAR_56->sc_ramsize / 1024;
 VAR_60 = 'K';
 if (VAR_56->sc_ramsize >= (1024 * 1024)) {
  VAR_60 = 'M';
  VAR_58 /= 1024;
 }
 FUNC_26(VAR_56->sc_dev, "%s, rev %u, %d%cB %cram",
  FUNC_33(VAR_56), VAR_62,
  VAR_58, VAR_60, VAR_56->sc_drammodel ? 'd' : 's');
 if (VAR_56->sc_flags & VAR_29)
  FUNC_46(", pll=0x%x<%s clk, %ux mult>",
   VAR_56->sc_pllconfig,
   VAR_56->sc_pllconfig & VAR_33 ? "ext" : "pci",
   2 + 2*((VAR_56->sc_pllconfig & VAR_32) >> 11));
 FUNC_46("\n");

 VAR_56->sc_cid = FUNC_22(VAR_55, sizeof(struct hifn_session),
     VAR_6);
 if (VAR_56->sc_cid < 0) {
  FUNC_26(VAR_55, "could not get crypto driver id\n");
  goto fail_intr;
 }

 FUNC_3(VAR_56, VAR_16,
     FUNC_1(VAR_56, VAR_16) | VAR_34);
 VAR_61 = FUNC_1(VAR_56, VAR_17) & VAR_35;

 switch (VAR_61) {
 case 128:
  FUNC_23(VAR_56->sc_cid, VAR_7, 0, 0);
  FUNC_23(VAR_56->sc_cid, VAR_9, 0, 0);
  if (VAR_56->sc_flags & VAR_25)
   FUNC_23(VAR_56->sc_cid, VAR_8, 0, 0);

 case 129:
  FUNC_23(VAR_56->sc_cid, VAR_11, 0, 0);
  FUNC_23(VAR_56->sc_cid, VAR_13, 0, 0);
  FUNC_23(VAR_56->sc_cid, VAR_12, 0, 0);
  FUNC_23(VAR_56->sc_cid, VAR_14, 0, 0);
  FUNC_23(VAR_56->sc_cid, VAR_10, 0, 0);
  break;
 }

 FUNC_11(VAR_56->sc_dmat, VAR_56->sc_dmamap,
     VAR_0 | VAR_1);

 if (VAR_56->sc_flags & (VAR_26 | VAR_27))
  FUNC_32(VAR_56);

 FUNC_20(&VAR_56->sc_tickto, 1);
 FUNC_21(&VAR_56->sc_tickto, VAR_54, VAR_53, VAR_56);

 return (0);

fail_intr:
 FUNC_18(VAR_55, VAR_56->sc_irq, VAR_56->sc_intrhand);
fail_intr2:

 FUNC_16(VAR_55, VAR_49, 0, VAR_56->sc_irq);
fail_mem:
 FUNC_12(VAR_56->sc_dmat, VAR_56->sc_dmamap);
 FUNC_14(VAR_56->sc_dmat, VAR_56->sc_dma, VAR_56->sc_dmamap);
 FUNC_7(VAR_56->sc_dmat);


 FUNC_4(VAR_56, VAR_18, VAR_24 |
     VAR_22 | VAR_23);
fail_io1:
 FUNC_16(VAR_55, VAR_50, VAR_21, VAR_56->sc_bar1res);
fail_io0:
 FUNC_16(VAR_55, VAR_50, VAR_20, VAR_56->sc_bar0res);
fail_pci:
 FUNC_40(&VAR_56->sc_mtx);
 return (VAR_15);
}
