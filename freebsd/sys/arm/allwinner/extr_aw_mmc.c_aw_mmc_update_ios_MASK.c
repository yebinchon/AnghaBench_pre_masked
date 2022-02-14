
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_ios {int bus_width; int power_mode; scalar_t__ timing; unsigned int clock; } ;
struct TYPE_3__ {struct mmc_ios ios; } ;
struct aw_mmc_softc {unsigned int aw_clock; TYPE_2__* aw_mmc_conf; int aw_dev; int aw_clk_mmc; int aw_reg_vqmmc; int aw_reg_vmmc; TYPE_1__ aw_host; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ can_calibrate; scalar_t__ new_timing; } ;


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
 int FUNC_0 (struct aw_mmc_softc*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct aw_mmc_softc*,int ,int) ;
 int VAR_12 ;
 int FUNC_2 (struct aw_mmc_softc*) ;
 int FUNC_3 (struct aw_mmc_softc*) ;
 int FUNC_4 (struct aw_mmc_softc*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;



 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int,int ) ;
 struct aw_mmc_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;



 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_16, device_t VAR_17)
{
 int VAR_18;
 struct aw_mmc_softc *VAR_19;
 struct mmc_ios *VAR_20;
 unsigned int VAR_21;
 uint32_t VAR_22, VAR_23 = 1;

 VAR_19 = FUNC_8(VAR_16);

 VAR_20 = &VAR_19->aw_host.ios;


 switch (VAR_20->bus_width) {
 case 133:
  FUNC_1(VAR_19, VAR_0, VAR_1);
  break;
 case 132:
  FUNC_1(VAR_19, VAR_0, VAR_2);
  break;
 case 131:
  FUNC_1(VAR_19, VAR_0, VAR_3);
  break;
 }

 switch (VAR_20->power_mode) {
 case 129:
  break;
 case 130:
  if (VAR_13)
   FUNC_9(VAR_19->aw_dev, "Powering down sd/mmc\n");

  if (VAR_19->aw_reg_vmmc)
   FUNC_10(VAR_19->aw_reg_vmmc);
  if (VAR_19->aw_reg_vqmmc)
   FUNC_10(VAR_19->aw_reg_vqmmc);

  FUNC_3(VAR_19);
  break;
 case 128:
  if (VAR_13)
   FUNC_9(VAR_19->aw_dev, "Powering up sd/mmc\n");

  if (VAR_19->aw_reg_vmmc)
   FUNC_11(VAR_19->aw_reg_vmmc);
  if (VAR_19->aw_reg_vqmmc)
   FUNC_11(VAR_19->aw_reg_vqmmc);
  FUNC_2(VAR_19);
  break;
 };


 VAR_22 = FUNC_0(VAR_19, VAR_6);
 if (VAR_20->timing == VAR_15 ||
   VAR_20->timing == VAR_14)
  VAR_22 |= VAR_7;
 else
  VAR_22 &= ~VAR_7;
 FUNC_1(VAR_19, VAR_6, VAR_22);

 if (VAR_20->clock && VAR_20->clock != VAR_19->aw_clock) {
  VAR_19->aw_clock = VAR_21 = VAR_20->clock;


  VAR_18 = FUNC_4(VAR_19, 0);
  if (VAR_18 != 0)
   return (VAR_18);

  if (VAR_20->timing == VAR_14 &&
      (VAR_19->aw_mmc_conf->new_timing ||
      VAR_20->bus_width == 131)) {
   VAR_23 = 2;
   VAR_21 <<= 1;
  }


  VAR_22 = FUNC_0(VAR_19, VAR_4);
  VAR_22 &= ~VAR_5;
  VAR_22 |= VAR_23 - 1;
  FUNC_1(VAR_19, VAR_4, VAR_22);


  if (VAR_19->aw_mmc_conf->new_timing) {
   VAR_22 = FUNC_0(VAR_19, VAR_8);
   VAR_22 |= VAR_9;
   FUNC_1(VAR_19, VAR_8, VAR_22);
  }


  VAR_18 = FUNC_5(VAR_19->aw_clk_mmc);
  if (VAR_18 != 0 && VAR_13)
   FUNC_9(VAR_19->aw_dev,
     "failed to disable mmc clock: %d\n", VAR_18);
  VAR_18 = FUNC_7(VAR_19->aw_clk_mmc, VAR_21,
      VAR_12);
  if (VAR_18 != 0) {
   FUNC_9(VAR_19->aw_dev,
       "failed to set frequency to %u Hz: %d\n",
       VAR_21, VAR_18);
   return (VAR_18);
  }
  VAR_18 = FUNC_6(VAR_19->aw_clk_mmc);
  if (VAR_18 != 0 && VAR_13)
   FUNC_9(VAR_19->aw_dev,
     "failed to re-enable mmc clock: %d\n", VAR_18);

  if (VAR_19->aw_mmc_conf->can_calibrate)
   FUNC_1(VAR_19, VAR_10, VAR_11);


  VAR_18 = FUNC_4(VAR_19, 1);
  if (VAR_18 != 0)
   return (VAR_18);
 }


 return (0);
}
