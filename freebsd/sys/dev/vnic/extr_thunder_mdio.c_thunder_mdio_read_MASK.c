
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_mdio_softc {scalar_t__ mode; } ;
typedef int ssize_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
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
 struct thunder_mdio_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct thunder_mdio_softc*,int ) ;
 int FUNC_3 (struct thunder_mdio_softc*,int ,int) ;
 int FUNC_4 (struct thunder_mdio_softc*,int,int) ;
 int FUNC_5 (struct thunder_mdio_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_12, int VAR_13, int VAR_14)
{
 struct thunder_mdio_softc *VAR_15;
 uint64_t VAR_16, VAR_17;
 ssize_t VAR_18;
 int VAR_19;

 VAR_15 = FUNC_1(VAR_12);


 FUNC_5(VAR_15, VAR_0);




 VAR_16 = 0;

 if (VAR_15->mode == VAR_0)
  VAR_16 |= VAR_4;
 else {
  VAR_16 |= VAR_5;
  VAR_19 = FUNC_4(VAR_15, VAR_13, VAR_14);
  if (VAR_19 != 0)
   return (VAR_19);

  VAR_14 = (VAR_14 >> 16) & 0x1F;
 }


 VAR_16 |= ((VAR_13 << VAR_3) & VAR_2);

 VAR_16 |= ((VAR_14 << VAR_7) &
     VAR_6);

 FUNC_3(VAR_15, VAR_1, VAR_16);
 for (VAR_18 = 1000; VAR_18 > 0; VAR_18--) {
  VAR_17 = FUNC_2(VAR_15, VAR_8);
  if (VAR_17 & VAR_10)
   FUNC_0(1000);
  else
   break;
 }

 if (VAR_17 & VAR_11)
  return (VAR_17 & VAR_9);
 else {

  return (0);
 }
}
