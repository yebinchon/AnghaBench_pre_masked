
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct rl_softc {scalar_t__ rl_type; int rl_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*,int ,int) ;







 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rl_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct rl_softc *VAR_13;
 u_int16_t VAR_14 = 0;
 int VAR_15 = 0;

 VAR_13 = FUNC_1(VAR_9);

 if (VAR_13->rl_type == VAR_3) {
  VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);
  return (VAR_15);
 }

 switch (VAR_11) {
 case 131:
  VAR_14 = VAR_6;
  if (VAR_13->rl_type == VAR_2) {

   VAR_12 &= ~(VAR_1 | VAR_0);
  }
  break;
 case 130:
  VAR_14 = VAR_7;
  break;
 case 134:
  VAR_14 = VAR_4;
  break;
 case 133:
  VAR_14 = VAR_5;
  break;
 case 132:
  VAR_14 = VAR_8;
  break;
 case 129:
 case 128:
  return (0);
  break;
 default:
  FUNC_2(VAR_13->rl_dev, "bad phy register\n");
  return (0);
 }
 FUNC_0(VAR_13, VAR_14, VAR_12);
 return (0);
}
