
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_min; int host_ocr; int caps; int f_max; } ;
struct dwmmc_softc {int use_auto_stop; scalar_t__ desc_count; int fifo_depth; int desc_ring_paddr; TYPE_1__ host; int max_hz; int use_pio; scalar_t__ pwren_inverted; int intr_cookie; int * res; int dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwmmc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dwmmc_softc*,int ) ;
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
 int FUNC_2 (struct dwmmc_softc*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int *,int ,struct dwmmc_softc*,int *) ;
 int FUNC_6 (int ,char*,int) ;
 struct dwmmc_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (struct dwmmc_softc*) ;
 int FUNC_10 (struct dwmmc_softc*) ;
 scalar_t__ FUNC_11 (struct dwmmc_softc*,int) ;
 int VAR_34 ;
 int FUNC_12 (struct dwmmc_softc*,int) ;
 int VAR_35 ;
 int FUNC_13 (struct dwmmc_softc*) ;

int
FUNC_14(device_t VAR_36)
{
 struct dwmmc_softc *VAR_37;
 int VAR_38;
 int VAR_39;

 VAR_37 = FUNC_7(VAR_36);

 VAR_37->dev = VAR_36;


 VAR_37->use_auto_stop = 1;

 VAR_38 = FUNC_13(VAR_37);
 if (VAR_38 != 0) {
  FUNC_8(VAR_36, "Can't get FDT property.\n");
  return (VAR_2);
 }

 FUNC_0(VAR_37);

 if (FUNC_3(VAR_36, VAR_35, VAR_37->res)) {
  FUNC_8(VAR_36, "could not allocate resources\n");
  return (VAR_2);
 }


 VAR_38 = FUNC_5(VAR_36, VAR_37->res[1], VAR_4 | VAR_3,
     ((void*)0), VAR_34, VAR_37, &VAR_37->intr_cookie);
 if (VAR_38 != 0) {
  FUNC_8(VAR_36, "could not setup interrupt handler.\n");
  return (VAR_2);
 }

 FUNC_8(VAR_36, "Hardware version ID is %04x\n",
  FUNC_1(VAR_37, VAR_33) & 0xffff);

 if (VAR_37->desc_count == 0)
  VAR_37->desc_count = VAR_0;


 VAR_39 = 0;
 if (VAR_37->pwren_inverted) {
  FUNC_2(VAR_37, VAR_30, (0 << VAR_39));
 } else {
  FUNC_2(VAR_37, VAR_30, (1 << VAR_39));
 }


 if (FUNC_11(VAR_37, (VAR_13 |
      VAR_11 |
      VAR_10)))
  return (VAR_2);

 FUNC_12(VAR_37, VAR_37->host.f_min);

 if (VAR_37->fifo_depth == 0) {
  VAR_37->fifo_depth = 1 +
      ((FUNC_1(VAR_37, VAR_15) >> VAR_16) & 0xfff);
  FUNC_8(VAR_36, "No fifo-depth, using FIFOTH %x\n",
      VAR_37->fifo_depth);
 }

 if (!VAR_37->use_pio) {
  FUNC_10(VAR_37);
  if (FUNC_9(VAR_37))
   return (VAR_2);


  FUNC_2(VAR_37, VAR_14, VAR_37->desc_ring_paddr);


  FUNC_2(VAR_37, VAR_22, VAR_18);
  FUNC_2(VAR_37, VAR_17, (VAR_19 |
        VAR_20 |
        VAR_21));
 }


 FUNC_2(VAR_37, VAR_31, 0xffffffff);
 FUNC_2(VAR_37, VAR_23, 0);


 FUNC_2(VAR_37, VAR_32, 0xffffffff);


 FUNC_2(VAR_37, VAR_31, 0xffffffff);
 FUNC_2(VAR_37, VAR_23, (VAR_26 |
       VAR_27 |
       VAR_24 |
       VAR_29 |
       VAR_28 |
       VAR_1 |
       VAR_25));
 FUNC_2(VAR_37, VAR_9, VAR_12);

 VAR_37->host.f_min = 400000;
 VAR_37->host.f_max = VAR_37->max_hz;
 VAR_37->host.host_ocr = VAR_7 | VAR_8;
 VAR_37->host.caps |= VAR_5;
 VAR_37->host.caps |= VAR_6;

 FUNC_6(VAR_36, "mmc", -1);
 return (FUNC_4(VAR_36));
}
