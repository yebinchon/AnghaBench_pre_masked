
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct hme_softc {int sc_burst; int sc_lock; scalar_t__ sc_flags; int sc_dev; int sc_enaddr; void* sc_mifh; void* sc_mift; void* sc_mach; void* sc_mact; void* sc_erxh; void* sc_erxt; void* sc_etxh; void* sc_etxt; void* sc_sebh; void* sc_sebt; } ;
struct hme_sbus_softc {int * hsc_seb_res; int * hsc_etx_res; int * hsc_erx_res; int * hsc_mac_res; int * hsc_mif_res; int * hsc_ires; int hsc_ih; struct hme_softc hsc_hme; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int,int*,int*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct hme_softc*,int *) ;
 int FUNC_5 (void*,void*,int,int,void**) ;
 int FUNC_6 (int ) ;
 struct hme_sbus_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct hme_softc*) ;
 int FUNC_10 (struct hme_softc*) ;
 int VAR_12 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 void* FUNC_13 (int *) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_13)
{
 struct hme_sbus_softc *VAR_14;
 struct hme_softc *VAR_15;
 u_long VAR_16, VAR_17;
 uint32_t VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_14 = FUNC_7(VAR_13);
 VAR_15 = &VAR_14->hsc_hme;
 FUNC_12(&VAR_15->sc_lock, FUNC_6(VAR_13), VAR_4,
     VAR_3);
 VAR_19 = 0;
 VAR_14->hsc_seb_res = FUNC_1(VAR_13, VAR_11,
     &VAR_19, VAR_5);
 if (VAR_14->hsc_seb_res == ((void*)0)) {
  FUNC_8(VAR_13, "cannot map SEB registers\n");
  VAR_20 = VAR_0;
  goto fail_mtx_res;
 }
 VAR_15->sc_sebt = FUNC_14(VAR_14->hsc_seb_res);
 VAR_15->sc_sebh = FUNC_13(VAR_14->hsc_seb_res);

 VAR_19 = 1;
 VAR_14->hsc_etx_res = FUNC_1(VAR_13, VAR_11,
     &VAR_19, VAR_5);
 if (VAR_14->hsc_etx_res == ((void*)0)) {
  FUNC_8(VAR_13, "cannot map ETX registers\n");
  VAR_20 = VAR_0;
  goto fail_seb_res;
 }
 VAR_15->sc_etxt = FUNC_14(VAR_14->hsc_etx_res);
 VAR_15->sc_etxh = FUNC_13(VAR_14->hsc_etx_res);

 VAR_19 = 2;
 VAR_14->hsc_erx_res = FUNC_1(VAR_13, VAR_11,
     &VAR_19, VAR_5);
 if (VAR_14->hsc_erx_res == ((void*)0)) {
  FUNC_8(VAR_13, "cannot map ERX registers\n");
  VAR_20 = VAR_0;
  goto fail_etx_res;
 }
 VAR_15->sc_erxt = FUNC_14(VAR_14->hsc_erx_res);
 VAR_15->sc_erxh = FUNC_13(VAR_14->hsc_erx_res);

 VAR_19 = 3;
 VAR_14->hsc_mac_res = FUNC_1(VAR_13, VAR_11,
     &VAR_19, VAR_5);
 if (VAR_14->hsc_mac_res == ((void*)0)) {
  FUNC_8(VAR_13, "cannot map MAC registers\n");
  VAR_20 = VAR_0;
  goto fail_erx_res;
 }
 VAR_15->sc_mact = FUNC_14(VAR_14->hsc_mac_res);
 VAR_15->sc_mach = FUNC_13(VAR_14->hsc_mac_res);





 VAR_19 = 4;
 VAR_14->hsc_mif_res = FUNC_1(VAR_13, VAR_11,
     &VAR_19, VAR_5);
 if (VAR_14->hsc_mif_res == ((void*)0)) {
  if (FUNC_2(VAR_13, VAR_11, VAR_19,
      &VAR_16, &VAR_17) != 0) {
   FUNC_8(VAR_13, "cannot get MIF registers\n");
   VAR_20 = VAR_0;
   goto fail_mac_res;
  }
  if (VAR_16 < FUNC_17(VAR_14->hsc_mac_res) ||
      VAR_16 + VAR_17 - 1 > FUNC_15(VAR_14->hsc_mac_res)) {
   FUNC_8(VAR_13, "cannot move MIF registers to MAC "
       "bank\n");
   VAR_20 = VAR_0;
   goto fail_mac_res;
  }
  VAR_15->sc_mift = VAR_15->sc_mact;
  FUNC_5(VAR_15->sc_mact, VAR_15->sc_mach,
      VAR_16 - FUNC_17(VAR_14->hsc_mac_res), VAR_17,
      &VAR_15->sc_mifh);
 } else {
  VAR_15->sc_mift = FUNC_14(VAR_14->hsc_mif_res);
  VAR_15->sc_mifh = FUNC_13(VAR_14->hsc_mif_res);
 }

 VAR_19 = 0;
 VAR_14->hsc_ires = FUNC_1(VAR_13, VAR_10,
     &VAR_19, VAR_6 | VAR_5);
 if (VAR_14->hsc_ires == ((void*)0)) {
  FUNC_8(VAR_13, "could not allocate interrupt\n");
  VAR_20 = VAR_0;
  goto fail_mif_res;
 }

 FUNC_0(VAR_13, VAR_15->sc_enaddr);

 VAR_18 = FUNC_18(VAR_13);

 if ((VAR_18 & VAR_9))
  VAR_15->sc_burst = 64;
 else if ((VAR_18 & VAR_8))
  VAR_15->sc_burst = 32;
 else if ((VAR_18 & VAR_7))
  VAR_15->sc_burst = 16;
 else
   VAR_15->sc_burst = 0;

 VAR_15->sc_dev = VAR_13;
 VAR_15->sc_flags = 0;

 if ((VAR_20 = FUNC_9(VAR_15)) != 0) {
  FUNC_8(VAR_13, "could not be configured\n");
  goto fail_ires;
 }

 if ((VAR_20 = FUNC_4(VAR_13, VAR_14->hsc_ires, VAR_2 |
     VAR_1, ((void*)0), VAR_12, VAR_15, &VAR_14->hsc_ih)) != 0) {
  FUNC_8(VAR_13, "couldn't establish interrupt\n");
  FUNC_10(VAR_15);
  goto fail_ires;
 }
 return (0);

fail_ires:
 FUNC_3(VAR_13, VAR_10,
     FUNC_16(VAR_14->hsc_ires), VAR_14->hsc_ires);
fail_mif_res:
 if (VAR_14->hsc_mif_res != ((void*)0)) {
  FUNC_3(VAR_13, VAR_11,
      FUNC_16(VAR_14->hsc_mif_res), VAR_14->hsc_mif_res);
 }
fail_mac_res:
 FUNC_3(VAR_13, VAR_11,
     FUNC_16(VAR_14->hsc_mac_res), VAR_14->hsc_mac_res);
fail_erx_res:
 FUNC_3(VAR_13, VAR_11,
     FUNC_16(VAR_14->hsc_erx_res), VAR_14->hsc_erx_res);
fail_etx_res:
 FUNC_3(VAR_13, VAR_11,
     FUNC_16(VAR_14->hsc_etx_res), VAR_14->hsc_etx_res);
fail_seb_res:
 FUNC_3(VAR_13, VAR_11,
     FUNC_16(VAR_14->hsc_seb_res), VAR_14->hsc_seb_res);
fail_mtx_res:
 FUNC_11(&VAR_15->sc_lock);
 return (VAR_20);
}
