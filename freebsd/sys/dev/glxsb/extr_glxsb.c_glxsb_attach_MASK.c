
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct glxsb_softc {int sc_rnghz; int * sc_sr; int sc_rid; int * sc_tq; int sc_rngco; int sc_cryptotask; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int *,int ,int ,struct glxsb_softc*) ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 struct glxsb_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (struct glxsb_softc*) ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (struct glxsb_softc*) ;
 int FUNC_11 (struct glxsb_softc*) ;
 int VAR_17 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (char*,int,int ,int **) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int **,int,int ,char*,int ) ;
 int VAR_18 ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_19)
{
 struct glxsb_softc *VAR_20 = FUNC_7(VAR_19);
 uint64_t VAR_21;

 VAR_20->sc_dev = VAR_19;
 VAR_21 = FUNC_13(VAR_7);

 if ((VAR_21 & 0xFFFF00) != 0x130400) {
  FUNC_8(VAR_19, "unknown ID 0x%x\n",
      (int)((VAR_21 & 0xFFFF00) >> 16));
  return (VAR_0);
 }

 FUNC_12(VAR_19);


 VAR_20->sc_rid = FUNC_0(0);
 VAR_20->sc_sr = FUNC_2(VAR_19, VAR_15, &VAR_20->sc_rid,
     VAR_4);
 if (VAR_20->sc_sr == ((void*)0)) {
  FUNC_8(VAR_19, "cannot map register space\n");
  return (VAR_0);
 }
 VAR_21 = FUNC_13(VAR_8);
 VAR_21 &= ~(VAR_14 | VAR_13);
 VAR_21 |= VAR_11 | VAR_12;



 FUNC_17(VAR_8, VAR_21);


 FUNC_4(VAR_20->sc_sr, VAR_5, VAR_6);


 if (FUNC_10(VAR_20) != 0)
  goto fail0;


 VAR_20->sc_tq = FUNC_14("glxsb_taskq", VAR_1 | VAR_2,
     VAR_18, &VAR_20->sc_tq);
 if (VAR_20->sc_tq == ((void*)0)) {
  FUNC_8(VAR_19, "cannot create task queue\n");
  goto fail0;
 }
 if (FUNC_16(&VAR_20->sc_tq, 1, VAR_3, "%s taskq",
     FUNC_6(VAR_19)) != 0) {
  FUNC_8(VAR_19, "cannot start task queue\n");
  goto fail1;
 }
 FUNC_1(&VAR_20->sc_cryptotask, 0, VAR_16, VAR_20);


 if (FUNC_9(VAR_20) != 0)
  goto fail1;


 if (VAR_17 > 100)
  VAR_20->sc_rnghz = VAR_17 / 100;
 else
  VAR_20->sc_rnghz = 1;
 FUNC_5(&VAR_20->sc_rngco, 1);
 FUNC_11(VAR_20);

 return (0);

fail1:
 FUNC_15(VAR_20->sc_tq);
fail0:
 FUNC_3(VAR_19, VAR_15, VAR_20->sc_rid, VAR_20->sc_sr);
 return (VAR_0);
}
