
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fb_cmsize; int fb_depth; int fb_cmap; int fb_name; } ;
struct ipu3sc_softc {int dev; void* dc_ioh; int iot; void* dmfc_ioh; void* di0_ioh; void* di1_ioh; void* dp_ioh; void* idmac_ioh; void* cpmem_ioh; int * sc_fbd; TYPE_1__ sc_info; int * ih; void* dctmpl_ioh; void* cm_ioh; } ;
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
 scalar_t__ VAR_13 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,uintptr_t,int ,int ,void**) ;
 int FUNC_12 (int ,void*,int ) ;
 int * FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ) ;
 struct ipu3sc_softc* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,...) ;
 int VAR_14 ;
 int FUNC_18 (int ) ;
 int * FUNC_19 (int,int ,int ,struct ipu3sc_softc*) ;
 int FUNC_20 (struct ipu3sc_softc*) ;
 int FUNC_21 (int ,int ) ;
 struct ipu3sc_softc* VAR_15 ;
 int VAR_16 ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_17)
{
 struct ipu3sc_softc *VAR_18 = FUNC_15(VAR_17);
 bus_space_tag_t VAR_19;
 bus_space_handle_t VAR_20;
 phandle_t VAR_21;
 pcell_t VAR_22;
  int VAR_23;
 uintptr_t VAR_24;

 VAR_15 = VAR_18;

 if (VAR_13)
  FUNC_17(VAR_17, "clock gate status is %d\n",
      FUNC_18(VAR_1));

 VAR_18->dev = VAR_17;

 VAR_18 = FUNC_15(VAR_17);
 VAR_18->iot = VAR_19 = VAR_14;
 VAR_21 = FUNC_22(VAR_17);
 if ((FUNC_9(VAR_21, "reg", &VAR_22, sizeof(VAR_22))) <= 0)
  VAR_24 = 0;
 else
  VAR_24 = VAR_22 - FUNC_0(0);

 VAR_23 = FUNC_11(VAR_19, FUNC_0(VAR_24), VAR_4, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_cm;
 VAR_18->cm_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_6(VAR_24), VAR_10, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_dmfc;
 VAR_18->dmfc_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_4(VAR_24), VAR_8, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_di0;
 VAR_18->di0_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_5(VAR_24), VAR_8, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_di1;
 VAR_18->di1_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_7(VAR_24), VAR_11, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_dp;
 VAR_18->dp_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_3(VAR_24), VAR_7, 0, &VAR_20);
 if (VAR_23)
  goto fail_retarn_dc;
 VAR_18->dc_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_8(VAR_24), VAR_12, 0,
     &VAR_20);
 if (VAR_23)
  goto fail_retarn_idmac;
 VAR_18->idmac_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_1(VAR_24), VAR_5, 0,
     &VAR_20);
 if (VAR_23)
  goto fail_retarn_cpmem;
 VAR_18->cpmem_ioh = VAR_20;


 VAR_23 = FUNC_11(VAR_19, FUNC_2(VAR_24), VAR_6, 0,
     &VAR_20);
 if (VAR_23)
  goto fail_retarn_dctmpl;
 VAR_18->dctmpl_ioh = VAR_20;
 FUNC_20(VAR_18);

 VAR_18->sc_info.fb_name = FUNC_14(VAR_17);

 FUNC_21(VAR_18->sc_info.fb_cmap, VAR_18->sc_info.fb_depth);
 VAR_18->sc_info.fb_cmsize = 16;


 VAR_18->sc_fbd = FUNC_13(VAR_17, "fbd", FUNC_16(VAR_17));
 if (VAR_18->sc_fbd == ((void*)0))
  FUNC_17(VAR_17, "Can't attach fbd device\n");

 return (FUNC_10(VAR_17));

fail_retarn_dctmpl:
 FUNC_12(VAR_18->iot, VAR_18->cpmem_ioh, VAR_5);
fail_retarn_cpmem:
 FUNC_12(VAR_18->iot, VAR_18->idmac_ioh, VAR_12);
fail_retarn_idmac:
 FUNC_12(VAR_18->iot, VAR_18->dc_ioh, VAR_7);
fail_retarn_dp:
 FUNC_12(VAR_18->iot, VAR_18->dp_ioh, VAR_11);
fail_retarn_dc:
 FUNC_12(VAR_18->iot, VAR_18->di1_ioh, VAR_9);
fail_retarn_di1:
 FUNC_12(VAR_18->iot, VAR_18->di0_ioh, VAR_8);
fail_retarn_di0:
 FUNC_12(VAR_18->iot, VAR_18->dmfc_ioh, VAR_10);
fail_retarn_dmfc:
 FUNC_12(VAR_18->iot, VAR_18->dc_ioh, VAR_4);
fail_retarn_cm:
 FUNC_17(VAR_18->dev,
     "failed to map registers (errno=%d)\n", VAR_23);
 return (VAR_23);
}
