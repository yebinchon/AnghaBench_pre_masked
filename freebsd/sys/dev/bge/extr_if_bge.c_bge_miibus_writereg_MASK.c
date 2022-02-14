
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_asicrev; int bge_mi_mode; int bge_dev; int bge_phy_ape_lock; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int FUNC_3 (struct bge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct bge_softc*,int ) ;
 int FUNC_6 (struct bge_softc*,int ) ;
 struct bge_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct bge_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_7(VAR_9);

 if (VAR_13->bge_asicrev == VAR_0 &&
     (VAR_11 == VAR_7 || VAR_11 == VAR_8))
  return (0);

 if (FUNC_5(VAR_13, VAR_13->bge_phy_ape_lock) != 0)
  return (0);


 if ((VAR_13->bge_mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_13, VAR_5,
      VAR_13->bge_mi_mode & ~VAR_3);
  FUNC_4(80);
 }

 FUNC_3(VAR_13, VAR_4, VAR_1 | VAR_2 |
     FUNC_0(VAR_10) | FUNC_1(VAR_11) | VAR_12);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  FUNC_4(10);
  if (!(FUNC_2(VAR_13, VAR_4) & VAR_2)) {
   FUNC_4(5);
   FUNC_2(VAR_13, VAR_4);
   break;
  }
 }


 if ((VAR_13->bge_mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_13, VAR_5, VAR_13->bge_mi_mode);
  FUNC_4(80);
 }

 FUNC_6(VAR_13, VAR_13->bge_phy_ape_lock);

 if (VAR_14 == VAR_6)
  FUNC_8(VAR_13->bge_dev,
      "PHY write timed out (phy %d, reg %d, val 0x%04x)\n",
      VAR_10, VAR_11, VAR_12);

 return (0);
}
