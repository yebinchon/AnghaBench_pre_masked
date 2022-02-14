
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu3sc_softc {int dev; void* dc_ioh; int iot; void* dmfc_ioh; void* di0_ioh; void* di1_ioh; void* dp_ioh; void* idmac_ioh; void* cpmem_ioh; int * ih; void* dctmpl_ioh; void* cm_ioh; } ;
typedef int reg ;
typedef int phandle_t ;
typedef uintptr_t pcell_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef void* bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 uintptr_t FUNC_0 (uintptr_t) ;
 int VAR_4 ;
 uintptr_t FUNC_1 (uintptr_t) ;
 int VAR_5 ;
 uintptr_t FUNC_2 (uintptr_t) ;
 int VAR_6 ;
 uintptr_t FUNC_3 (uintptr_t) ;
 int VAR_7 ;
 uintptr_t FUNC_4 (uintptr_t) ;
 int VAR_8 ;
 uintptr_t FUNC_5 (uintptr_t) ;
 int VAR_9 ;
 uintptr_t FUNC_6 (uintptr_t) ;
 int VAR_10 ;
 uintptr_t FUNC_7 (uintptr_t) ;
 int VAR_11 ;
 uintptr_t FUNC_8 (uintptr_t) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int ,char*,uintptr_t*,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int ,uintptr_t,int ,int ,void**) ;
 int FUNC_11 (int ,void*,int ) ;
 int FUNC_12 (int ) ;
 struct ipu3sc_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int VAR_15 ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (int,int ,int ,struct ipu3sc_softc*) ;
 int FUNC_18 (struct ipu3sc_softc*) ;
 struct ipu3sc_softc* VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_18)
{
 struct ipu3sc_softc *VAR_19 = FUNC_13(VAR_18);
 bus_space_tag_t VAR_20;
 bus_space_handle_t VAR_21;
 phandle_t VAR_22;
 pcell_t VAR_23;
 int VAR_24;
 uintptr_t VAR_25;

 if (VAR_16)
  return (VAR_0);

 VAR_16 = VAR_19;

 if (VAR_14)
  FUNC_15(VAR_18, "clock gate status is %d\n",
      FUNC_16(VAR_1));

 VAR_19->dev = VAR_18;

 VAR_24 = (FUNC_20(FUNC_14(VAR_18),
     FUNC_12(VAR_18) | VAR_13));

 if (VAR_24) {
  FUNC_15(VAR_18, "failed to attach syscons\n");
  goto fail;
 }

 VAR_19 = FUNC_13(VAR_18);
 VAR_19->iot = VAR_20 = VAR_15;
 VAR_22 = FUNC_19(VAR_18);
 if ((FUNC_9(VAR_22, "reg", &VAR_23, sizeof(VAR_23))) <= 0)
  VAR_25 = 0;
 else
  VAR_25 = VAR_23 - FUNC_0(0);

 VAR_24 = FUNC_10(VAR_20, FUNC_0(VAR_25), VAR_4, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_cm;
 VAR_19->cm_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_6(VAR_25), VAR_10, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_dmfc;
 VAR_19->dmfc_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_4(VAR_25), VAR_8, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_di0;
 VAR_19->di0_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_5(VAR_25), VAR_8, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_di1;
 VAR_19->di1_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_7(VAR_25), VAR_11, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_dp;
 VAR_19->dp_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_3(VAR_25), VAR_7, 0, &VAR_21);
 if (VAR_24)
  goto fail_retarn_dc;
 VAR_19->dc_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_8(VAR_25), VAR_12, 0,
     &VAR_21);
 if (VAR_24)
  goto fail_retarn_idmac;
 VAR_19->idmac_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_1(VAR_25), VAR_5, 0,
     &VAR_21);
 if (VAR_24)
  goto fail_retarn_cpmem;
 VAR_19->cpmem_ioh = VAR_21;


 VAR_24 = FUNC_10(VAR_20, FUNC_2(VAR_25), VAR_6, 0,
     &VAR_21);
 if (VAR_24)
  goto fail_retarn_dctmpl;
 VAR_19->dctmpl_ioh = VAR_21;
 FUNC_18(VAR_19);

 return (0);

fail:
 return (VAR_0);
fail_retarn_dctmpl:
 FUNC_11(VAR_19->iot, VAR_19->cpmem_ioh, VAR_5);
fail_retarn_cpmem:
 FUNC_11(VAR_19->iot, VAR_19->idmac_ioh, VAR_12);
fail_retarn_idmac:
 FUNC_11(VAR_19->iot, VAR_19->dc_ioh, VAR_7);
fail_retarn_dp:
 FUNC_11(VAR_19->iot, VAR_19->dp_ioh, VAR_11);
fail_retarn_dc:
 FUNC_11(VAR_19->iot, VAR_19->di1_ioh, VAR_9);
fail_retarn_di1:
 FUNC_11(VAR_19->iot, VAR_19->di0_ioh, VAR_8);
fail_retarn_di0:
 FUNC_11(VAR_19->iot, VAR_19->dmfc_ioh, VAR_10);
fail_retarn_dmfc:
 FUNC_11(VAR_19->iot, VAR_19->dc_ioh, VAR_4);
fail_retarn_cm:
 FUNC_15(VAR_19->dev,
     "failed to map registers (errno=%d)\n", VAR_24);
 return (VAR_24);
}
