
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct et_softc {int ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int FUNC_2 (int) ;
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
 struct et_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 struct et_softc *VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 VAR_16 = FUNC_3(VAR_12);

 FUNC_1(VAR_16, VAR_5, 0);

 VAR_17 = (VAR_13 << VAR_2) & VAR_1;
 VAR_17 |= (VAR_14 << VAR_4) & VAR_3;
 FUNC_1(VAR_16, VAR_0, VAR_17);


 FUNC_1(VAR_16, VAR_6,
     (VAR_15 << VAR_8) & VAR_7);



 for (VAR_18 = 0; VAR_18 < 100; ++VAR_18) {
  VAR_17 = FUNC_0(VAR_16, VAR_9);
  if ((VAR_17 & VAR_10) == 0)
   break;
  FUNC_2(50);
 }
 if (VAR_18 == 100) {
  FUNC_5(VAR_16->ifp,
     "write phy %d, reg %d timed out\n", VAR_13, VAR_14);
  FUNC_4(VAR_12, VAR_13, VAR_14);
 }




 FUNC_1(VAR_16, VAR_5, 0);
 return (0);
}
