
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_ios {int bus_width; int clock; int vdd; int power_mode; } ;
struct TYPE_7__ {int pol; int pin; int * dev; } ;
struct TYPE_6__ {int pin; int * dev; } ;
struct TYPE_5__ {struct mmc_ios ios; } ;
struct aml8726_sdxc_softc {int ref_freq; int* voltages; int dev; TYPE_3__ card_rst; TYPE_2__ vselect; TYPE_1__ host; } ;
typedef int device_t ;
struct TYPE_8__ {int voltage; int freq; int rx_phase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_1 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_2 (struct aml8726_sdxc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_4__* VAR_25 ;
 int FUNC_8 (struct aml8726_sdxc_softc*) ;
 int FUNC_9 (struct aml8726_sdxc_softc*) ;



 struct aml8726_sdxc_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;




__attribute__((used)) static int
FUNC_12(device_t VAR_26, device_t VAR_27)
{
 struct aml8726_sdxc_softc *VAR_28 = FUNC_10(VAR_26);
 struct mmc_ios *VAR_29 = &VAR_28->host.ios;
 unsigned int VAR_30;
 int VAR_31;
 int VAR_32;
 uint32_t VAR_33;
 uint32_t VAR_34;
 uint32_t VAR_35;
 uint32_t VAR_36;

 VAR_35 = (7 << VAR_21) |
     (7 << VAR_18) |
     (0xf << VAR_19) |
     (0x7f << VAR_20);

 switch (VAR_29->bus_width) {
 case 131:
  VAR_35 |= VAR_16;
  break;
 case 132:
  VAR_35 |= VAR_15;
  break;
 case 133:
  VAR_35 |= VAR_14;
  break;
 default:
  return (VAR_22);
 }

 FUNC_2(VAR_28, VAR_17, VAR_35);




 VAR_33 = FUNC_1(VAR_28, VAR_10);
 VAR_33 &= ~(VAR_13 | VAR_11 |
     VAR_12);
 FUNC_2(VAR_28, VAR_10, VAR_33);
 FUNC_0(VAR_28, VAR_10);
 VAR_33 &= ~VAR_5;
 FUNC_2(VAR_28, VAR_10, VAR_33);
 FUNC_0(VAR_28, VAR_10);






 VAR_33 &= ~VAR_6;
 VAR_33 |= (1 << VAR_7);

 VAR_30 = VAR_28->ref_freq / VAR_29->clock - 1;
 if (VAR_30 == 0 || VAR_30 == -1)
  VAR_30 = 1;
 if ((VAR_28->ref_freq / (VAR_30 + 1)) > VAR_29->clock)
  VAR_30 += 1;
 if (VAR_30 > (VAR_3 >>
     VAR_4))
  VAR_30 = VAR_3 >>
      VAR_4;

 VAR_33 &= ~VAR_3;
 VAR_33 |= VAR_30 << VAR_4;

 VAR_33 &= ~VAR_8;
 VAR_33 |= VAR_9;

 FUNC_2(VAR_28, VAR_10, VAR_33);
 FUNC_0(VAR_28, VAR_10);




 VAR_33 |= VAR_5;
 FUNC_2(VAR_28, VAR_10, VAR_33);
 FUNC_0(VAR_28, VAR_10);
 VAR_33 |= VAR_13 | VAR_11 |
     VAR_12;
 FUNC_2(VAR_28, VAR_10, VAR_33);
 FUNC_0(VAR_28, VAR_10);

 VAR_36 = VAR_28->ref_freq / VAR_30;

 for (VAR_32 = 0; VAR_25[VAR_32].voltage; VAR_32++) {
  if ((VAR_25[VAR_32].voltage &
      (1 << VAR_29->vdd)) != 0 &&
      VAR_36 > VAR_25[VAR_32].freq)
   break;
  if (VAR_25[VAR_32].freq == 0)
   break;
 }

 VAR_34 = (1 << VAR_2) |
     (VAR_25[VAR_32].rx_phase <<
     VAR_1);
 FUNC_2(VAR_28, VAR_0, VAR_34);
 FUNC_0(VAR_28, VAR_0);

 VAR_31 = 0;

 switch (VAR_29->power_mode) {
 case 128:




  if (VAR_28->vselect.dev != ((void*)0)) {
   for (VAR_32 = 0; VAR_32 < 2; VAR_32++)
    if ((VAR_28->voltages[VAR_32] & (1 << VAR_29->vdd)) != 0)
     break;
   if (VAR_32 >= 2)
    return (VAR_22);
   VAR_31 = FUNC_4(VAR_28->vselect.dev,
       VAR_28->vselect.pin, VAR_32);
  }
  break;
 case 129:
  VAR_31 = FUNC_9(VAR_28);
  if (VAR_31)
   break;

  if (VAR_28->card_rst.dev != ((void*)0)) {
   if (FUNC_4(VAR_28->card_rst.dev, VAR_28->card_rst.pin,
       FUNC_7(VAR_28->card_rst.pol)) != 0 ||
       FUNC_5(VAR_28->card_rst.dev,
       VAR_28->card_rst.pin,
       VAR_24) != 0)
    VAR_31 = VAR_23;

   FUNC_3(5);

   if (FUNC_4(VAR_28->card_rst.dev, VAR_28->card_rst.pin,
       FUNC_6(VAR_28->card_rst.pol)) != 0)
    VAR_31 = VAR_23;

   FUNC_3(5);

   if (VAR_31) {
    FUNC_11(VAR_28->dev,
        "could not use gpio to reset card\n");
    break;
   }
  }
  break;
 case 130:
  VAR_31 = FUNC_8(VAR_28);
  break;
 default:
  return (VAR_22);
 }

 return (VAR_31);
}
