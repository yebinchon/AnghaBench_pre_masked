
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {scalar_t__ bge_asicrev; int bge_func_addr; int bge_phy_ape_lock; int bge_dev; } ;


 int FUNC_0 (struct bge_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5->bge_asicrev == VAR_4)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_3;


 for (VAR_8 = 131; VAR_8 <= VAR_0; VAR_8++) {
  switch (VAR_8) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_6 = VAR_2;
   break;
  default:
   if (VAR_5->bge_func_addr == 0)
    VAR_6 = VAR_2;
   else
    VAR_6 = (1 << VAR_5->bge_func_addr);
  }
  FUNC_0(VAR_5, VAR_7 + 4 * VAR_8, VAR_6);
 }


 switch (VAR_5->bge_func_addr) {
 case 0:
  VAR_5->bge_phy_ape_lock = 131;
  break;
 case 1:
  VAR_5->bge_phy_ape_lock = 130;
  break;
 case 2:
  VAR_5->bge_phy_ape_lock = 129;
  break;
 case 3:
  VAR_5->bge_phy_ape_lock = 128;
  break;
 default:
  FUNC_1(VAR_5->bge_dev,
      "PHY lock not supported on this function\n");
 }
}
