
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_mi_mode; int bge_phy_ape_lock; int bge_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int FUNC_3 (struct bge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct bge_softc*,int ) ;
 int FUNC_6 (struct bge_softc*,int ) ;
 struct bge_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct bge_softc *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(VAR_7);

 if (FUNC_5(VAR_10, VAR_10->bge_phy_ape_lock) != 0)
  return (0);


 if ((VAR_10->bge_mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_10, VAR_5,
      VAR_10->bge_mi_mode & ~VAR_3);
  FUNC_4(80);
 }

 FUNC_3(VAR_10, VAR_4, VAR_0 | VAR_1 |
     FUNC_0(VAR_8) | FUNC_1(VAR_9));


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_4(10);
  VAR_11 = FUNC_2(VAR_10, VAR_4);
  if ((VAR_11 & VAR_1) == 0) {
   FUNC_4(5);
   VAR_11 = FUNC_2(VAR_10, VAR_4);
   break;
  }
 }

 if (VAR_12 == VAR_6) {
  FUNC_8(VAR_10->bge_dev,
      "PHY read timed out (phy %d, reg %d, val 0x%08x)\n",
      VAR_8, VAR_9, VAR_11);
  VAR_11 = 0;
 }


 if ((VAR_10->bge_mi_mode & VAR_3) != 0) {
  FUNC_3(VAR_10, VAR_5, VAR_10->bge_mi_mode);
  FUNC_4(80);
 }

 FUNC_6(VAR_10, VAR_10->bge_phy_ape_lock);

 if (VAR_11 & VAR_2)
  return (0);

 return (VAR_11 & 0xFFFF);
}
