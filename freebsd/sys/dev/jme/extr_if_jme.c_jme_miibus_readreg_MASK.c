
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_flags; int jme_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct jme_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct jme_softc *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_7);


 if ((VAR_10->jme_flags & VAR_0) != 0 && VAR_8 == 0)
  return (0);

 FUNC_1(VAR_10, VAR_2, VAR_6 | VAR_5 |
     FUNC_3(VAR_8) | FUNC_4(VAR_9));
 for (VAR_12 = VAR_1; VAR_12 > 0; VAR_12--) {
  FUNC_2(1);
  if (((VAR_11 = FUNC_0(VAR_10, VAR_2)) & VAR_5) == 0)
   break;
 }

 if (VAR_12 == 0) {
  FUNC_6(VAR_10->jme_dev, "phy read timeout : %d\n", VAR_9);
  return (0);
 }

 return ((VAR_11 & VAR_3) >> VAR_4);
}
