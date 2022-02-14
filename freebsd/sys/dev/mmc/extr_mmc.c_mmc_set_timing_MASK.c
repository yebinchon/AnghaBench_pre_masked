
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct mmc_softc {int dev; } ;
struct mmc_ivars {int cmd6_time; int rca; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;






 int FUNC_0 (struct mmc_softc*,int ,int ,int,int*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int
FUNC_6(struct mmc_softc *VAR_14, struct mmc_ivars *VAR_15,
    enum mmc_bus_timing VAR_16)
{
 u_char VAR_17[64];
 uint8_t VAR_18;
 int VAR_19;

 if (FUNC_3(VAR_14->dev) == VAR_13) {
  switch (VAR_16) {
  case 128:
   VAR_18 = VAR_12;
   break;
  case 133:
   VAR_18 = VAR_10;
   break;
  default:
   return (VAR_7);
  }
  VAR_19 = FUNC_0(VAR_14, VAR_11, VAR_9,
      VAR_18, VAR_17);
  if (VAR_19 != VAR_8)
   return (VAR_19);
  if ((VAR_17[16] & 0xf) != VAR_18)
   return (VAR_6);
  FUNC_4(VAR_14->dev, VAR_16);
  FUNC_5(VAR_14->dev);
 } else {
  switch (VAR_16) {
  case 128:
   VAR_18 = VAR_2;
   break;
  case 133:
  case 132:
   VAR_18 = VAR_3;
   break;
  case 131:
   VAR_18 = VAR_4;
   break;
  case 130:
  case 129:
   VAR_18 = VAR_5;
   break;
  default:
   return (VAR_7);
  }
  VAR_19 = FUNC_1(VAR_14->dev, VAR_14->dev, VAR_15->rca,
      VAR_0, VAR_1, VAR_18,
      VAR_15->cmd6_time, 0);
  if (VAR_19 != VAR_8)
   return (VAR_19);
  FUNC_4(VAR_14->dev, VAR_16);
  FUNC_5(VAR_14->dev);
  VAR_19 = FUNC_2(VAR_14->dev, VAR_14->dev, VAR_15->rca,
      VAR_15->cmd6_time);
 }
 return (VAR_19);
}
