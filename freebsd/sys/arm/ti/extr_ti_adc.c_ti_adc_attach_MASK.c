
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int sc_tsc_wires; int sc_coord_readouts; int sc_adc_nchannels; int* sc_adc_channels; int sc_x; int sc_y; scalar_t__ sc_pen_down; int sc_evdev; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_dev; void* sc_charge_delay; void* sc_x_plate_resistance; } ;
typedef scalar_t__ phandle_t ;
typedef void* pcell_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ti_adc_softc*,int ) ;
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
 int FUNC_1 (struct ti_adc_softc*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_2 (scalar_t__,char*,void**,int) ;
 void* FUNC_3 (scalar_t__,char*,int,void**) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (int*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_6 (struct ti_adc_softc*) ;
 int FUNC_7 (struct ti_adc_softc*) ;
 int VAR_33 ;
 int FUNC_8 (struct ti_adc_softc*) ;
 int VAR_34 ;
 void* FUNC_9 (int ,int ,int*,int ) ;
 int FUNC_10 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_11 (int ,void*,int,int *,int ,struct ti_adc_softc*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct ti_adc_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (scalar_t__,char*) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (struct ti_adc_softc*,int*,int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct ti_adc_softc*) ;
 int FUNC_30 (struct ti_adc_softc*) ;
 int VAR_35 ;
 int FUNC_31 (struct ti_adc_softc*) ;
 int FUNC_32 (struct ti_adc_softc*) ;
 int FUNC_33 (struct ti_adc_softc*) ;
 int FUNC_34 (int ) ;

__attribute__((used)) static int
FUNC_35(device_t VAR_36)
{
 int VAR_37, VAR_38, VAR_39;
 struct ti_adc_softc *VAR_40;
 uint32_t VAR_41, VAR_42;
 phandle_t VAR_43, VAR_44;
 pcell_t VAR_45;
 int *VAR_46;
 int VAR_47;
 int *VAR_48;

 VAR_40 = FUNC_14(VAR_36);
 VAR_40->sc_dev = VAR_36;

 VAR_43 = FUNC_26(VAR_36);

 VAR_40->sc_tsc_wires = 0;
 VAR_40->sc_coord_readouts = 1;
 VAR_40->sc_x_plate_resistance = 0;
 VAR_40->sc_charge_delay = VAR_21;

 VAR_44 = FUNC_25(VAR_43, "tsc");
 if (VAR_44 != 0 && FUNC_4(VAR_44, "ti,wires")) {
  if ((FUNC_2(VAR_44, "ti,wires", &VAR_45, sizeof(VAR_45))) > 0)
   VAR_40->sc_tsc_wires = VAR_45;
  if ((FUNC_2(VAR_44, "ti,coordinate-readouts", &VAR_45,
      sizeof(VAR_45))) > 0)
   VAR_40->sc_coord_readouts = VAR_45;
  if ((FUNC_2(VAR_44, "ti,x-plate-resistance", &VAR_45,
      sizeof(VAR_45))) > 0)
   VAR_40->sc_x_plate_resistance = VAR_45;
  if ((FUNC_2(VAR_44, "ti,charge-delay", &VAR_45,
      sizeof(VAR_45))) > 0)
   VAR_40->sc_charge_delay = VAR_45;
  VAR_47 = FUNC_3(VAR_44,
      "ti,wire-config", sizeof(*VAR_48),
      (void **)&VAR_48);
  if (VAR_47 != VAR_40->sc_tsc_wires) {
   FUNC_15(VAR_40->sc_dev,
       "invalid number of ti,wire-config: %d (should be %d)\n",
       VAR_47, VAR_40->sc_tsc_wires);
   FUNC_5(VAR_48);
   return (VAR_22);
  }
  VAR_37 = FUNC_27(VAR_40, VAR_48, VAR_47);
  FUNC_5(VAR_48);
  if (VAR_37)
   return (VAR_22);
 }


 VAR_44 = FUNC_25(VAR_43, "adc");
 if (VAR_44 != 0) {
  VAR_40->sc_adc_nchannels = FUNC_3(VAR_44,
      "ti,adc-channels", sizeof(*VAR_46), (void **)&VAR_46);
  if (VAR_40->sc_adc_nchannels > 0) {
   for (VAR_39 = 0; VAR_39 < VAR_40->sc_adc_nchannels; VAR_39++)
    VAR_40->sc_adc_channels[VAR_39] = VAR_46[VAR_39];
   FUNC_5(VAR_46);
  }
 }


 if (VAR_40->sc_tsc_wires + VAR_40->sc_adc_nchannels > VAR_33) {
  FUNC_15(VAR_36, "total number of chanels (%d) is larger than %d\n",
      VAR_40->sc_tsc_wires + VAR_40->sc_adc_nchannels, VAR_33);
  return (VAR_23);
 }

 VAR_38 = 0;
 VAR_40->sc_mem_res = FUNC_9(VAR_36, VAR_32, &VAR_38,
     VAR_30);
 if (!VAR_40->sc_mem_res) {
  FUNC_15(VAR_36, "cannot allocate memory window\n");
  return (VAR_23);
 }


 VAR_37 = FUNC_34(VAR_34);
 if (VAR_37)
  return (VAR_37);

 VAR_38 = 0;
 VAR_40->sc_irq_res = FUNC_9(VAR_36, VAR_31, &VAR_38,
     VAR_30);
 if (!VAR_40->sc_irq_res) {
  FUNC_10(VAR_36, VAR_32, 0, VAR_40->sc_mem_res);
  FUNC_15(VAR_36, "cannot allocate interrupt\n");
  return (VAR_23);
 }

 if (FUNC_11(VAR_36, VAR_40->sc_irq_res, VAR_29 | VAR_28,
     ((void*)0), VAR_35, VAR_40, &VAR_40->sc_intrhand) != 0) {
  FUNC_10(VAR_36, VAR_31, 0, VAR_40->sc_irq_res);
  FUNC_10(VAR_36, VAR_32, 0, VAR_40->sc_mem_res);
  FUNC_15(VAR_36, "Unable to setup the irq handler.\n");
  return (VAR_23);
 }


 VAR_41 = FUNC_0(VAR_40, VAR_7);
 FUNC_15(VAR_36,
     "scheme: %#x func: %#x rtl: %d rev: %d.%d custom rev: %d\n",
     (VAR_41 & VAR_17) >> VAR_18,
     (VAR_41 & VAR_10) >> VAR_11,
     (VAR_41 & VAR_15) >> VAR_16,
     (VAR_41 & VAR_12) >> VAR_13,
     VAR_41 & VAR_14,
     (VAR_41 & VAR_8) >> VAR_9);

 VAR_42 = FUNC_0(VAR_40, VAR_3);
 FUNC_1(VAR_40, VAR_3, VAR_42 | VAR_5 | VAR_4);






 if (VAR_40->sc_tsc_wires)
  FUNC_1(VAR_40, VAR_2, 24 - 1);
 else
  FUNC_1(VAR_40, VAR_2, 2400 - 1);

 FUNC_7(VAR_40);

 FUNC_29(VAR_40);
 FUNC_30(VAR_40);
 FUNC_32(VAR_40);
 FUNC_33(VAR_40);

 FUNC_6(VAR_40);
 FUNC_31(VAR_40);
 FUNC_8(VAR_40);
 return (0);
}
