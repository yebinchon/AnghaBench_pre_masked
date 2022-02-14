
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mmc_softc {int dev; } ;
struct TYPE_2__ {int spec_vers; } ;
struct mmc_ivars {int bus_width; int* raw_ext_csd; int cmd6_time; int rca; TYPE_1__ csd; } ;
typedef enum mmc_bus_width { ____Placeholder_mmc_bus_width } mmc_bus_width ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_25 ;

__attribute__((used)) static int
FUNC_6(struct mmc_softc *VAR_26, struct mmc_ivars *VAR_27)
{
 device_t VAR_28;
 const uint8_t *VAR_29;
 uint32_t VAR_30;
 uint8_t VAR_31;
 enum mmc_bus_timing VAR_32;
 enum mmc_bus_width VAR_33;

 VAR_28 = VAR_26->dev;
 VAR_32 = FUNC_4(VAR_28);
 VAR_33 = VAR_27->bus_width;
 if (FUNC_3(VAR_28) != VAR_25 || VAR_27->csd.spec_vers < 4 ||
     VAR_32 == VAR_21 || VAR_33 == VAR_22)
  return (VAR_16);

 VAR_31 = 0;
 VAR_29 = VAR_27->raw_ext_csd;
 VAR_30 = FUNC_2(VAR_28);
 switch (1 << FUNC_5(VAR_28)) {
 case 128:
  if (VAR_30 <= VAR_18)
   VAR_31 = VAR_29[VAR_9];
  else if (VAR_30 <= VAR_19) {
   if (VAR_32 >= VAR_20 &&
       VAR_33 >= VAR_23)
    VAR_31 = VAR_29[VAR_12];
   else
    VAR_31 = VAR_29[VAR_11];
  } else if (VAR_30 <= VAR_17)
   VAR_31 = VAR_29[VAR_6];
  break;
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_30 <= VAR_18)
   VAR_31 = VAR_29[VAR_10];
  else if (VAR_30 <= VAR_19) {
   if (VAR_32 == VAR_20 &&
       VAR_33 >= VAR_23)
    VAR_31 = VAR_29[VAR_14];
   else
    VAR_31 = VAR_29[VAR_13];
  } else if (VAR_30 <= VAR_17) {
   if (VAR_33 == VAR_24)
    VAR_31 = VAR_29[VAR_8];
   else
    VAR_31 = VAR_29[VAR_7];
  }
  break;
 default:
  FUNC_0(VAR_28, "No power class support for VDD 0x%x\n",
   1 << FUNC_5(VAR_28));
  return (VAR_15);
 }

 if (VAR_33 == VAR_24)
  VAR_31 = (VAR_31 & VAR_4) >>
      VAR_5;
 else
  VAR_31 = (VAR_31 & VAR_2) >>
      VAR_3;

 if (VAR_31 == 0)
  return (VAR_16);

 return (FUNC_1(VAR_28, VAR_28, VAR_27->rca, VAR_0,
     VAR_1, VAR_31, VAR_27->cmd6_time, 1));
}
