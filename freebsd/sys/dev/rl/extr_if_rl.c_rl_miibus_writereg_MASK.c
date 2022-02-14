
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rl_softc {scalar_t__ rl_type; int rl_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct rl_softc*,int ,int) ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rl_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct rl_softc *VAR_11;
 uint16_t VAR_12;

 VAR_11 = FUNC_1(VAR_7);

 if (VAR_11->rl_type == VAR_0) {
  switch (VAR_9) {
  case 131:
   VAR_12 = VAR_3;
   break;
  case 130:
   VAR_12 = VAR_4;
   break;
  case 134:
   VAR_12 = VAR_1;
   break;
  case 133:
   VAR_12 = VAR_2;
   break;
  case 132:
   VAR_12 = VAR_5;
   break;
  case 129:
  case 128:
   return (0);
   break;
  default:
   FUNC_2(VAR_11->rl_dev, "bad phy register\n");
   return (0);
  }
  FUNC_0(VAR_11, VAR_12, VAR_10);
  return (0);
 }

 FUNC_3(VAR_7, &VAR_6, VAR_8, VAR_9, VAR_10);

 return (0);
}
