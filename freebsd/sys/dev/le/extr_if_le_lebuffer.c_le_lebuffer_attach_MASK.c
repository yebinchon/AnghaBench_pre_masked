
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lance_softc {int sc_conf3; int sc_defaultmedia; int sc_nsupmedia; int * sc_supmedia; int * sc_mediastatus; int * sc_mediachange; int * sc_nocarrier; int * sc_hwintr; int * sc_hwinit; int * sc_hwreset; int sc_wrcsr; int sc_rdcsr; int sc_zerobuf; int sc_copyfrombuf; int sc_copytobuf; int sc_copyfromdesc; int sc_copytodesc; int sc_enaddr; scalar_t__ sc_flags; int sc_memsize; scalar_t__ sc_addr; } ;
struct TYPE_3__ {struct lance_softc lsc; } ;
struct le_lebuffer_softc {int * sc_bres; int * sc_rres; int * sc_ires; TYPE_1__ sc_am7990; int sc_ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lance_softc*) ;
 int FUNC_1 (struct lance_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_11 ;
 void* FUNC_6 (int ,int ,int*,int) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,int *,int,int *,int ,struct lance_softc*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct le_lebuffer_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_20)
{
 struct le_lebuffer_softc *VAR_21;
 struct lance_softc *VAR_22;
 int VAR_23, VAR_24;

 VAR_21 = FUNC_12(VAR_20);
 VAR_22 = &VAR_21->sc_am7990.lsc;

 FUNC_1(VAR_22, FUNC_10(VAR_20));





 VAR_24 = 0;
 VAR_21->sc_bres = FUNC_6(FUNC_11(VAR_20),
     VAR_10, &VAR_24, VAR_7);
 if (VAR_21->sc_bres == ((void*)0)) {
  FUNC_14(VAR_20, "cannot allocate LANCE buffer\n");
  VAR_23 = VAR_0;
  goto fail_mtx;
 }


 VAR_24 = 0;
 VAR_21->sc_rres = FUNC_6(VAR_20, VAR_10,
     &VAR_24, VAR_7);
 if (VAR_21->sc_rres == ((void*)0)) {
  FUNC_14(VAR_20, "cannot allocate LANCE registers\n");
  VAR_23 = VAR_0;
  goto fail_bres;
 }


 VAR_24 = 0;
 if ((VAR_21->sc_ires = FUNC_6(VAR_20, VAR_9,
     &VAR_24, VAR_8 | VAR_7)) == ((void*)0)) {
  FUNC_14(VAR_20, "cannot allocate interrupt\n");
  VAR_23 = VAR_0;
  goto fail_rres;
 }





 VAR_22->sc_addr = 0;
 VAR_22->sc_memsize = FUNC_17(VAR_21->sc_bres);
 VAR_22->sc_flags = 0;


 if (FUNC_3(FUNC_15(VAR_20), "busmaster-regval",
     &VAR_22->sc_conf3, sizeof(VAR_22->sc_conf3)) == -1)
  VAR_22->sc_conf3 = VAR_3 | VAR_4;





 VAR_22->sc_conf3 &= ~VAR_5;

 FUNC_2(VAR_20, VAR_22->sc_enaddr);

 VAR_22->sc_copytodesc = VAR_15;
 VAR_22->sc_copyfromdesc = VAR_13;
 VAR_22->sc_copytobuf = VAR_14;
 VAR_22->sc_copyfrombuf = VAR_12;
 VAR_22->sc_zerobuf = VAR_19;

 VAR_22->sc_rdcsr = VAR_17;
 VAR_22->sc_wrcsr = VAR_18;
 VAR_22->sc_hwreset = ((void*)0);
 VAR_22->sc_hwinit = ((void*)0);
 VAR_22->sc_hwintr = ((void*)0);
 VAR_22->sc_nocarrier = ((void*)0);
 VAR_22->sc_mediachange = ((void*)0);
 VAR_22->sc_mediastatus = ((void*)0);
 VAR_22->sc_supmedia = VAR_16;
 VAR_22->sc_nsupmedia = VAR_6;
 VAR_22->sc_defaultmedia = VAR_16[0];

 VAR_23 = FUNC_4(&VAR_21->sc_am7990, FUNC_9(VAR_20),
     FUNC_13(VAR_20));
 if (VAR_23 != 0) {
  FUNC_14(VAR_20, "cannot attach Am7990\n");
  goto fail_ires;
 }

 VAR_23 = FUNC_8(VAR_20, VAR_21->sc_ires, VAR_2 | VAR_1,
     ((void*)0), VAR_11, VAR_22, &VAR_21->sc_ih);
 if (VAR_23 != 0) {
  FUNC_14(VAR_20, "cannot set up interrupt\n");
  goto fail_am7990;
 }

 return (0);

 fail_am7990:
 FUNC_5(&VAR_21->sc_am7990);
 fail_ires:
 FUNC_7(VAR_20, VAR_9,
     FUNC_16(VAR_21->sc_ires), VAR_21->sc_ires);
 fail_rres:
 FUNC_7(VAR_20, VAR_10,
     FUNC_16(VAR_21->sc_rres), VAR_21->sc_rres);
 fail_bres:
 FUNC_7(FUNC_11(VAR_20), VAR_10,
     FUNC_16(VAR_21->sc_bres), VAR_21->sc_bres);
 fail_mtx:
 FUNC_0(VAR_22);
 return (VAR_23);
}
