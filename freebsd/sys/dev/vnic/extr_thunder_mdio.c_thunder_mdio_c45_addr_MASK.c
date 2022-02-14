
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_mdio_softc {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct thunder_mdio_softc*,int ) ;
 int FUNC_2 (struct thunder_mdio_softc*,int ,int) ;
 int FUNC_3 (struct thunder_mdio_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct thunder_mdio_softc *VAR_11, int VAR_12, int VAR_13)
{
 uint64_t VAR_14, VAR_15;
 ssize_t VAR_16;

 FUNC_3(VAR_11, VAR_1);


 FUNC_2(VAR_11, VAR_8, VAR_13 & VAR_9);



 VAR_14 = 0;

 VAR_14 |= VAR_5;


 VAR_14 |= ((VAR_12 << VAR_4) & VAR_3);

 VAR_14 |= ((VAR_13 << VAR_7) &
     VAR_6);

 FUNC_2(VAR_11, VAR_2, VAR_14);
 for (VAR_16 = 1000; VAR_16 > 0; VAR_16--) {
  VAR_15 = FUNC_1(VAR_11, VAR_8);
  if (VAR_15 & VAR_10)
   FUNC_0(1000);
  else
   break;
 }

 if (VAR_16 <= 0)
  return (VAR_0);
 else {

  return (0);
 }
}
