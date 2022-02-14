
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_ios {int bus_width; int power_mode; int vdd; int clock; } ;
struct TYPE_4__ {int pin; int * dev; } ;
struct TYPE_3__ {struct mmc_ios ios; } ;
struct aml8726_mmc_softc {int* voltages; TYPE_2__ vselect; TYPE_1__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aml8726_mmc_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct aml8726_mmc_softc*,int ) ;
 int FUNC_3 (struct aml8726_mmc_softc*) ;
 int FUNC_4 (struct aml8726_mmc_softc*) ;


 struct aml8726_mmc_softc* FUNC_5 (int ) ;




__attribute__((used)) static int
FUNC_6(device_t VAR_9, device_t VAR_10)
{
 struct aml8726_mmc_softc *VAR_11 = FUNC_5(VAR_9);
 struct mmc_ios *VAR_12 = &VAR_11->host.ios;
 int VAR_13;
 int VAR_14;
 uint32_t VAR_15;

 VAR_15 = (2 << VAR_6) |
     (2 << VAR_7) |
     VAR_4 |
     (39 << VAR_2);

 switch (VAR_12->bus_width) {
 case 131:
  VAR_15 |= VAR_1;
  break;
 case 132:
  VAR_15 |= VAR_0;
  break;
 default:
  return (VAR_8);
 }

 VAR_15 |= FUNC_2(VAR_11, VAR_12->clock) <<
     VAR_3;

 FUNC_0(VAR_11, VAR_5, VAR_15);

 VAR_13 = 0;

 switch (VAR_12->power_mode) {
 case 128:




  if (VAR_11->vselect.dev != ((void*)0)) {
   for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
    if ((VAR_11->voltages[VAR_14] & (1 << VAR_12->vdd)) != 0)
     break;
   if (VAR_14 >= 2)
    return (VAR_8);
   VAR_13 = FUNC_1(VAR_11->vselect.dev,
       VAR_11->vselect.pin, VAR_14);
  }
  break;
 case 129:
  VAR_13 = FUNC_4(VAR_11);
  break;
 case 130:
  VAR_13 = FUNC_3(VAR_11);
  break;
 default:
  return (VAR_8);
 }

 return (VAR_13);
}
