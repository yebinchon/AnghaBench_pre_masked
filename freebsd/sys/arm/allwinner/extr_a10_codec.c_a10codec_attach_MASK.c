
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct gpiobus_pin {int dummy; } ;
struct a10codec_info {int dmasize; int lock; int res; TYPE_1__* cfg; int dmat; int dev; } ;
typedef int phandle_t ;
typedef int hwreset_t ;
typedef int device_t ;
typedef int clk_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;
struct TYPE_3__ {int mixer_class; } ;


 int FUNC_0 (struct a10codec_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct a10codec_info*,int ) ;
 int FUNC_2 (struct a10codec_info*,int ,int ) ;
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
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int *) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_14 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct a10codec_info*,int ) ;
 scalar_t__ FUNC_13 (int ,int ,char*,struct gpiobus_pin**) ;
 int FUNC_14 (struct gpiobus_pin*,int) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ,int ,int *) ;
 struct a10codec_info* FUNC_17 (int,int ,int) ;
 scalar_t__ FUNC_18 (int ,int ,struct a10codec_info*) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 TYPE_2__* FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,int *,struct a10codec_info*) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,struct a10codec_info*,int,int) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,char*) ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_15)
{
 struct a10codec_info *VAR_16;
 char VAR_17[VAR_11];
 struct gpiobus_pin *VAR_18;
 phandle_t VAR_19;
 clk_t VAR_20, VAR_21;
 hwreset_t VAR_22;
 uint32_t VAR_23;
 int VAR_24;

 VAR_19 = FUNC_20(VAR_15);

 VAR_16 = FUNC_17(sizeof(*VAR_16), VAR_5, VAR_6 | VAR_7);
 VAR_16->cfg = (void *)FUNC_21(VAR_15, VAR_14)->ocd_data;
 VAR_16->dev = VAR_15;
 VAR_16->lock = FUNC_27(FUNC_10(VAR_15), "a10codec softc");

 if (FUNC_3(VAR_15, VAR_13, VAR_16->res)) {
  FUNC_11(VAR_15, "cannot allocate resources for device\n");
  VAR_24 = VAR_4;
  goto fail;
 }

 VAR_16->dmasize = 131072;
 VAR_24 = FUNC_4(
     FUNC_5(VAR_15),
     4, VAR_16->dmasize,
     VAR_1,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_16->dmasize, 1,
     VAR_16->dmasize, 0,
     ((void*)0), ((void*)0),
     &VAR_16->dmat);
 if (VAR_24 != 0) {
  FUNC_11(VAR_15, "cannot create DMA tag\n");
  goto fail;
 }


 if (FUNC_8(VAR_15, 0, "apb", &VAR_20) != 0 &&
     FUNC_8(VAR_15, 0, "ahb", &VAR_20) != 0) {
  FUNC_11(VAR_15, "cannot find bus clock\n");
  goto fail;
 }
 if (FUNC_8(VAR_15, 0, "codec", &VAR_21) != 0) {
  FUNC_11(VAR_15, "cannot find codec clock\n");
  goto fail;
 }


 if (FUNC_7(VAR_20) != 0) {
  FUNC_11(VAR_15, "cannot enable bus clock\n");
  goto fail;
 }
 VAR_24 = FUNC_9(VAR_21, 24576000, VAR_2);
 if (VAR_24 != 0) {
  FUNC_11(VAR_15, "cannot set codec clock frequency\n");
  goto fail;
 }

 VAR_24 = FUNC_7(VAR_21);
 if (VAR_24 != 0) {
  FUNC_11(VAR_15, "cannot enable codec clock\n");
  goto fail;
 }


 if (FUNC_16(VAR_15, 0, 0, &VAR_22) == 0) {
  VAR_24 = FUNC_15(VAR_22);
  if (VAR_24 != 0) {
   FUNC_11(VAR_15, "cannot de-assert reset\n");
   goto fail;
  }
 }


 VAR_23 = FUNC_1(VAR_16, FUNC_0(VAR_16));
 VAR_23 |= VAR_3;
 FUNC_2(VAR_16, FUNC_0(VAR_16), VAR_23);

 if (FUNC_18(VAR_15, VAR_16->cfg->mixer_class, VAR_16)) {
  FUNC_11(VAR_15, "mixer_init failed\n");
  goto fail;
 }


 if (FUNC_13(VAR_15, VAR_19, "allwinner,pa-gpios",
     &VAR_18) == 0) {
  VAR_24 = FUNC_14(VAR_18, 1);
  if (VAR_24 != 0)
   FUNC_11(VAR_15, "failed to unmute PA\n");
 }

 FUNC_25(VAR_15, FUNC_23(VAR_15) | VAR_10);

 if (FUNC_24(VAR_15, VAR_16, 1, 1)) {
  FUNC_11(VAR_15, "pcm_register failed\n");
  goto fail;
 }

 FUNC_22(VAR_15, VAR_8, &VAR_12, VAR_16);
 FUNC_22(VAR_15, VAR_9, &VAR_12, VAR_16);

 FUNC_29(VAR_17, VAR_11, "at %s", FUNC_19(VAR_15));
 FUNC_26(VAR_15, VAR_17);

 return (0);

fail:
 FUNC_6(VAR_15, VAR_13, VAR_16->res);
 FUNC_28(VAR_16->lock);
 FUNC_12(VAR_16, VAR_5);

 return (VAR_4);
}
