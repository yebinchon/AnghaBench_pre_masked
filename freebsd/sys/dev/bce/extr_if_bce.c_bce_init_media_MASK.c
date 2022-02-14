
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bce_softc {int bce_phy_flags; int bce_phy_addr; int bce_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bce_softc *VAR_7)
{
 if ((VAR_7->bce_phy_flags & (VAR_0 |
     VAR_1)) == VAR_0) {
  FUNC_0(VAR_7->bce_dev, VAR_7->bce_phy_addr,
      VAR_4, VAR_5);
  FUNC_0(VAR_7->bce_dev, VAR_7->bce_phy_addr,
      VAR_2, VAR_3);


  FUNC_0(VAR_7->bce_dev, VAR_7->bce_phy_addr,
      VAR_4, VAR_6);
 }
}
