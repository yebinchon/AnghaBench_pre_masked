
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pwrctl_softc {int dev; int res; } ;
typedef int bhnd_clksrc ;





 int FUNC_0 (int,int ) ;
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
 scalar_t__ FUNC_1 (struct bhnd_pwrctl_softc*,int ) ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bhnd_pwrctl_softc*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static uint32_t
FUNC_5(struct bhnd_pwrctl_softc *VAR_13, bool VAR_14)
{
 bhnd_clksrc VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;

 VAR_15 = FUNC_3(VAR_13);


 if (FUNC_1(VAR_13, VAR_11)) {
  if (VAR_15 == 129)
   VAR_16 = 64;
  else
   VAR_16 = 32;
 } else if (FUNC_1(VAR_13, VAR_12)) {
  VAR_16 = FUNC_2(VAR_13->res, VAR_4);
  VAR_16 = FUNC_0(VAR_16, VAR_5);
  VAR_16 = 4 * (VAR_16 + 1);
 } else if (FUNC_1(VAR_13, VAR_10)) {
  if (VAR_14) {
   VAR_16 = 1;
  } else {
   VAR_16 = FUNC_2(VAR_13->res, VAR_7);
   VAR_16 = FUNC_0(VAR_16, VAR_6);
   VAR_16 = 4 * (VAR_16 + 1);
  }
 } else {
  FUNC_4(VAR_13->dev, "unknown device type\n");
  return (0);
 }


 switch (VAR_15) {
 case 130:
  VAR_17 = VAR_14 ? VAR_0 : VAR_1;
  break;
 case 128:
  VAR_17 = VAR_14 ? VAR_8 : VAR_9;
  break;
 case 129:
  VAR_17 = VAR_14 ? VAR_2 : VAR_3;
  break;
 default:
  FUNC_4(VAR_13->dev, "unknown slowclk source %#x\n", VAR_15);
  return (0);
 }

 return (VAR_17 / VAR_16);
}
