
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lsi64854_softc {int sc_parent_dmat; struct le_dma_softc* sc_client; } ;
struct lance_softc {int sc_addr; int sc_conf3; int sc_mem; int sc_nocarrier; int sc_hwintr; int sc_hwreset; int sc_wrcsr; int sc_rdcsr; int sc_zerobuf; void* sc_copyfrombuf; void* sc_copytobuf; void* sc_copyfromdesc; void* sc_copytodesc; int sc_enaddr; int sc_defaultmedia; int sc_nsupmedia; int * sc_supmedia; int sc_mediastatus; int sc_mediachange; scalar_t__ sc_flags; int sc_memsize; } ;
struct TYPE_3__ {struct lance_softc lsc; } ;
struct le_dma_softc {int sc_laddr; int * sc_rres; int * sc_ires; int sc_dmat; int sc_dmam; TYPE_1__ sc_am7990; int sc_ih; struct lsi64854_softc* sc_dma; } ;
typedef int device_t ;


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
 int FUNC_0 (struct lance_softc*) ;
 int FUNC_1 (struct lance_softc*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_17 ;
 void* FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,struct le_dma_softc*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,void**,int,int *) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int *) ;
 int FUNC_13 (int ,int *,int,int *,int ,struct lance_softc*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct le_dma_softc* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_20 (struct lsi64854_softc*) ;
 int FUNC_21 (struct lsi64854_softc*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_30)
{
 struct le_dma_softc *VAR_31;
 struct lsi64854_softc *VAR_32;
 struct lance_softc *VAR_33;
 int VAR_34, VAR_35;

 VAR_31 = FUNC_17(VAR_30);
 VAR_33 = &VAR_31->sc_am7990.lsc;

 FUNC_1(VAR_33, FUNC_15(VAR_30));





 VAR_32 = (struct lsi64854_softc *)FUNC_17(FUNC_16(VAR_30));
 VAR_31->sc_dma = VAR_32;
 VAR_31->sc_dma->sc_client = VAR_31;

 VAR_35 = 0;
 VAR_31->sc_rres = FUNC_5(VAR_30, VAR_16,
     &VAR_35, VAR_13);
 if (VAR_31->sc_rres == ((void*)0)) {
  FUNC_19(VAR_30, "cannot allocate registers\n");
  VAR_34 = VAR_4;
  goto fail_mtx;
 }

 VAR_35 = 0;
 if ((VAR_31->sc_ires = FUNC_5(VAR_30, VAR_15,
     &VAR_35, VAR_14 | VAR_13)) == ((void*)0)) {
  FUNC_19(VAR_30, "cannot allocate interrupt\n");
  VAR_34 = VAR_4;
  goto fail_rres;
 }


 VAR_34 = FUNC_20(VAR_32);
 if (VAR_34 != 0) {
  FUNC_19(VAR_30, "lsi64854_attach failed\n");
  goto fail_ires;
 }

 VAR_33->sc_memsize = VAR_9;
 VAR_34 = FUNC_6(
     VAR_32->sc_parent_dmat,
     VAR_7,
     VAR_8,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_33->sc_memsize,
     1,
     VAR_33->sc_memsize,
     0,
     ((void*)0), ((void*)0),
     &VAR_31->sc_dmat);
 if (VAR_34 != 0) {
  FUNC_19(VAR_30, "cannot allocate buffer DMA tag\n");
  goto fail_lsi;
 }

 VAR_34 = FUNC_10(VAR_31->sc_dmat, (void **)&VAR_33->sc_mem,
     VAR_1 | VAR_0, &VAR_31->sc_dmam);
 if (VAR_34 != 0) {
  FUNC_19(VAR_30, "cannot allocate DMA buffer memory\n");
  goto fail_dtag;
 }

 VAR_31->sc_laddr = 0;
 VAR_34 = FUNC_8(VAR_31->sc_dmat, VAR_31->sc_dmam, VAR_33->sc_mem,
     VAR_33->sc_memsize, VAR_21, VAR_31, 0);
 if (VAR_34 != 0 || VAR_31->sc_laddr == 0) {
  FUNC_19(VAR_30, "cannot load DMA buffer map\n");
  goto fail_dmem;
 }

 VAR_33->sc_addr = VAR_31->sc_laddr & 0xffffff;
 VAR_33->sc_flags = 0;
 VAR_33->sc_conf3 = VAR_12 | VAR_10 | VAR_11;

 VAR_33->sc_mediachange = VAR_27;
 VAR_33->sc_mediastatus = VAR_28;
 VAR_33->sc_supmedia = VAR_26;
 VAR_33->sc_nsupmedia = FUNC_22(VAR_26);
 VAR_33->sc_defaultmedia = VAR_26[0];

 FUNC_2(VAR_30, VAR_33->sc_enaddr);

 VAR_33->sc_copytodesc = VAR_19;
 VAR_33->sc_copyfromdesc = VAR_18;
 VAR_33->sc_copytobuf = VAR_19;
 VAR_33->sc_copyfrombuf = VAR_18;
 VAR_33->sc_zerobuf = VAR_20;

 VAR_33->sc_rdcsr = VAR_25;
 VAR_33->sc_wrcsr = VAR_29;
 VAR_33->sc_hwreset = VAR_23;
 VAR_33->sc_hwintr = VAR_22;
 VAR_33->sc_nocarrier = VAR_24;

 VAR_34 = FUNC_3(&VAR_31->sc_am7990, FUNC_14(VAR_30),
     FUNC_18(VAR_30));
 if (VAR_34 != 0) {
  FUNC_19(VAR_30, "cannot attach Am7990\n");
  goto fail_dmap;
 }

 VAR_34 = FUNC_13(VAR_30, VAR_31->sc_ires, VAR_6 | VAR_5,
     ((void*)0), VAR_17, VAR_33, &VAR_31->sc_ih);
 if (VAR_34 != 0) {
  FUNC_19(VAR_30, "cannot set up interrupt\n");
  goto fail_am7990;
 }

 return (0);

 fail_am7990:
 FUNC_4(&VAR_31->sc_am7990);
 fail_dmap:
 FUNC_9(VAR_31->sc_dmat, VAR_31->sc_dmam);
 fail_dmem:
 FUNC_11(VAR_31->sc_dmat, VAR_33->sc_mem, VAR_31->sc_dmam);
 fail_dtag:
 FUNC_7(VAR_31->sc_dmat);
 fail_lsi:
 FUNC_21(VAR_32);
 fail_ires:
 FUNC_12(VAR_30, VAR_15, FUNC_23(VAR_31->sc_ires),
     VAR_31->sc_ires);
 fail_rres:
 FUNC_12(VAR_30, VAR_16, FUNC_23(VAR_31->sc_rres),
     VAR_31->sc_rres);
 fail_mtx:
 FUNC_0(VAR_33);
 return (VAR_34);
}
