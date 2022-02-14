
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct rl_softc {int rl_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct rl_softc*,int) ;
 int FUNC_1 (struct rl_softc*,int ) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rl_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, int VAR_6, int VAR_7)
{
 struct rl_softc *VAR_8;
 u_int32_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_5);



 if (VAR_7 == VAR_0) {
  VAR_9 = FUNC_0(VAR_8, VAR_0);
  return (VAR_9);
 }

 FUNC_2(VAR_8, VAR_1, VAR_7 << 16);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_1(VAR_8, VAR_1);
  if (VAR_9 & VAR_2)
   break;
  FUNC_3(25);
 }

 if (VAR_10 == VAR_4) {
  FUNC_5(VAR_8->rl_dev, "PHY read failed\n");
  return (0);
 }




 FUNC_3(20);

 return (VAR_9 & VAR_3);
}
