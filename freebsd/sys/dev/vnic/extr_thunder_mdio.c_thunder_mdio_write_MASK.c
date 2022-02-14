
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_mdio_softc {scalar_t__ mode; } ;
typedef int ssize_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_4 (struct thunder_mdio_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 struct thunder_mdio_softc *VAR_16;
 uint64_t VAR_17, VAR_18;
 ssize_t VAR_19;

 VAR_16 = FUNC_1(VAR_12);


 FUNC_4(VAR_16, VAR_1);


 FUNC_3(VAR_16, VAR_9, VAR_15 & VAR_10);



 VAR_17 = 0;

 if (VAR_16->mode == VAR_1)
  VAR_17 |= VAR_5;
 else
  VAR_17 |= VAR_6;


 VAR_17 |= ((VAR_13 << VAR_4) & VAR_3);

 VAR_17 |= ((VAR_14 << VAR_8) &
     VAR_7);

 FUNC_3(VAR_16, VAR_2, VAR_17);
 for (VAR_19 = 1000; VAR_19 > 0; VAR_19--) {
  VAR_18 = FUNC_2(VAR_16, VAR_9);
  if (VAR_18 & VAR_11)
   FUNC_0(1000);
  else
   break;
 }

 if (VAR_19 <= 0)
  return (VAR_0);
 else {

  return (0);
 }
}
