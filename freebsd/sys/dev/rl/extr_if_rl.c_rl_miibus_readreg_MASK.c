
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rl_softc {scalar_t__ rl_type; int rl_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct rl_softc*,int const) ;
 int FUNC_1 (struct rl_softc*,int ) ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 struct rl_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,int,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct rl_softc *VAR_10;
 uint16_t VAR_11;

 VAR_10 = FUNC_2(VAR_7);

 if (VAR_10->rl_type == VAR_0) {
  switch (VAR_9) {
  case 132:
   VAR_11 = VAR_3;
   break;
  case 131:
   VAR_11 = VAR_4;
   break;
  case 135:
   VAR_11 = VAR_1;
   break;
  case 134:
   VAR_11 = VAR_2;
   break;
  case 133:
   VAR_11 = VAR_5;
   break;
  case 130:
  case 129:
   return (0);






  case 128:
   return (FUNC_0(VAR_10, 128));
  default:
   FUNC_3(VAR_10->rl_dev, "bad phy register\n");
   return (0);
  }
  return (FUNC_1(VAR_10, VAR_11));
 }

 return (FUNC_4(VAR_7, &VAR_6, VAR_8, VAR_9));
}
