
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lance_softc {scalar_t__ sc_addr; int sc_mem; int * sc_supmedia; int * sc_mediastatus; int * sc_mediachange; int * sc_nocarrier; int * sc_hwintr; int * sc_hwinit; int * sc_hwreset; int sc_wrcsr; int sc_rdcsr; int sc_zerobuf; void* sc_copyfrombuf; void* sc_copytobuf; void* sc_copyfromdesc; void* sc_copytodesc; int * sc_enaddr; scalar_t__ sc_conf3; scalar_t__ sc_flags; int sc_memsize; } ;
struct TYPE_7__ {struct lance_softc lsc; } ;
struct le_isa_softc {int * sc_rres; int * sc_dres; int * sc_ires; int sc_pdmat; int sc_dmat; int sc_dmam; TYPE_4__ sc_am7990; int sc_ih; void* sc_rdp; void* sc_rap; } ;
typedef int device_t ;
typedef void* bus_size_t ;
struct TYPE_6__ {int macstride; void* macstart; void* rdp; void* rap; int iosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct lance_softc*) ;
 int FUNC_2 (struct lance_softc*,int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_15 ;
 void* FUNC_5 (int ,int ,int*,int) ;
 int * FUNC_6 (int ,int ,int*,int ,int) ;
 int FUNC_7 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ,struct lance_softc*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,void**,int,int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,void*) ;
 int FUNC_15 (int ,int ,int ,int *) ;
 int FUNC_16 (int ,int *,int,int *,int ,struct lance_softc*,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct le_isa_softc* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int ) ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__* VAR_21 ;
 int FUNC_24 (int ,TYPE_1__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_24)
{
 struct le_isa_softc *VAR_25;
 struct lance_softc *VAR_26;
 bus_size_t VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33;

 VAR_25 = FUNC_20(VAR_24);
 VAR_26 = &VAR_25->sc_am7990.lsc;

 FUNC_2(VAR_26, FUNC_18(VAR_24));

 VAR_32 = 0;
 switch (FUNC_0(FUNC_19(VAR_24), VAR_24, VAR_20)) {
 case 0:
  VAR_25->sc_rres = FUNC_5(VAR_24, VAR_13,
      &VAR_32, VAR_10);
  VAR_28 = VAR_8;
  VAR_29 = VAR_9;
  VAR_27 = 0;
  VAR_33 = 1;
  break;
 case 129:
  for (VAR_31 = 0; VAR_31 < FUNC_25(VAR_21); VAR_31++) {
   if (FUNC_24(VAR_24, &VAR_21[VAR_31]) == 0) {
    VAR_25->sc_rres = FUNC_6(VAR_24,
        VAR_13, &VAR_32,
        VAR_21[VAR_31].iosize, VAR_10);
    VAR_28 = VAR_21[VAR_31].rap;
    VAR_29 = VAR_21[VAR_31].rdp;
    VAR_27 = VAR_21[VAR_31].macstart;
    VAR_33 = VAR_21[VAR_31].macstride;
    goto found;
   }
  }

 case 128:
 default:
  FUNC_22(VAR_24, "cannot determine chip\n");
  VAR_30 = 128;
  goto fail_mtx;
 }

 found:
 if (VAR_25->sc_rres == ((void*)0)) {
  FUNC_22(VAR_24, "cannot allocate registers\n");
  VAR_30 = 128;
  goto fail_mtx;
 }
 VAR_25->sc_rap = VAR_28;
 VAR_25->sc_rdp = VAR_29;

 VAR_31 = 0;
 if ((VAR_25->sc_dres = FUNC_5(VAR_24, VAR_12,
     &VAR_31, VAR_10)) == ((void*)0)) {
  FUNC_22(VAR_24, "cannot allocate DMA channel\n");
  VAR_30 = 128;
  goto fail_rres;
 }

 VAR_31 = 0;
 if ((VAR_25->sc_ires = FUNC_5(VAR_24, VAR_14,
     &VAR_31, VAR_11 | VAR_10)) == ((void*)0)) {
  FUNC_22(VAR_24, "cannot allocate interrupt\n");
  VAR_30 = 128;
  goto fail_dres;
 }

 VAR_30 = FUNC_7(
     FUNC_13(VAR_24),
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_4,
     0,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_25->sc_pdmat);
 if (VAR_30 != 0) {
  FUNC_22(VAR_24, "cannot allocate parent DMA tag\n");
  goto fail_ires;
 }

 VAR_26->sc_memsize = VAR_7;




 VAR_30 = FUNC_7(
     VAR_25->sc_pdmat,
     8, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_26->sc_memsize,
     1,
     VAR_26->sc_memsize,
     0,
     ((void*)0), ((void*)0),
     &VAR_25->sc_dmat);
 if (VAR_30 != 0) {
  FUNC_22(VAR_24, "cannot allocate buffer DMA tag\n");
  goto fail_pdtag;
 }

 VAR_30 = FUNC_11(VAR_25->sc_dmat, (void **)&VAR_26->sc_mem,
     VAR_1 | VAR_0, &VAR_25->sc_dmam);
 if (VAR_30 != 0) {
  FUNC_22(VAR_24, "cannot allocate DMA buffer memory\n");
  goto fail_dtag;
 }

 VAR_26->sc_addr = 0;
 VAR_30 = FUNC_9(VAR_25->sc_dmat, VAR_25->sc_dmam, VAR_26->sc_mem,
     VAR_26->sc_memsize, VAR_19, VAR_26, 0);
 if (VAR_30 != 0 || VAR_26->sc_addr == 0) {
  FUNC_22(VAR_24, "cannot load DMA buffer map\n");
  goto fail_dmem;
 }

 FUNC_23(FUNC_27(VAR_25->sc_dres));

 VAR_26->sc_flags = 0;
 VAR_26->sc_conf3 = 0;




 for (VAR_31 = 0; VAR_31 < sizeof(VAR_26->sc_enaddr); VAR_31++)
  VAR_26->sc_enaddr[VAR_31] = FUNC_14(VAR_25->sc_rres,
      VAR_27 + VAR_31 * VAR_33);

 VAR_26->sc_copytodesc = VAR_17;
 VAR_26->sc_copyfromdesc = VAR_16;
 VAR_26->sc_copytobuf = VAR_17;
 VAR_26->sc_copyfrombuf = VAR_16;
 VAR_26->sc_zerobuf = VAR_18;

 VAR_26->sc_rdcsr = VAR_22;
 VAR_26->sc_wrcsr = VAR_23;
 VAR_26->sc_hwreset = ((void*)0);
 VAR_26->sc_hwinit = ((void*)0);
 VAR_26->sc_hwintr = ((void*)0);
 VAR_26->sc_nocarrier = ((void*)0);
 VAR_26->sc_mediachange = ((void*)0);
 VAR_26->sc_mediastatus = ((void*)0);
 VAR_26->sc_supmedia = ((void*)0);

 VAR_30 = FUNC_3(&VAR_25->sc_am7990, FUNC_17(VAR_24),
     FUNC_21(VAR_24));
 if (VAR_30 != 0) {
  FUNC_22(VAR_24, "cannot attach Am7990\n");
  goto fail_dmap;
 }

 VAR_30 = FUNC_16(VAR_24, VAR_25->sc_ires, VAR_6 | VAR_5,
     ((void*)0), VAR_15, VAR_26, &VAR_25->sc_ih);
 if (VAR_30 != 0) {
  FUNC_22(VAR_24, "cannot set up interrupt\n");
  goto fail_am7990;
 }

 return (0);

 fail_am7990:
 FUNC_4(&VAR_25->sc_am7990);
 fail_dmap:
 FUNC_10(VAR_25->sc_dmat, VAR_25->sc_dmam);
 fail_dmem:
 FUNC_12(VAR_25->sc_dmat, VAR_26->sc_mem, VAR_25->sc_dmam);
 fail_dtag:
 FUNC_8(VAR_25->sc_dmat);
 fail_pdtag:
 FUNC_8(VAR_25->sc_pdmat);
 fail_ires:
 FUNC_15(VAR_24, VAR_14,
     FUNC_26(VAR_25->sc_ires), VAR_25->sc_ires);
 fail_dres:
 FUNC_15(VAR_24, VAR_12,
     FUNC_26(VAR_25->sc_dres), VAR_25->sc_dres);
 fail_rres:
 FUNC_15(VAR_24, VAR_13,
     FUNC_26(VAR_25->sc_rres), VAR_25->sc_rres);
 fail_mtx:
 FUNC_1(VAR_26);
 return (VAR_30);
}
