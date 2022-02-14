
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscphy_softc {int dummy; } ;
struct mii_softc {int mii_mpd_model; } ;



 int FUNC_0 (struct mii_softc*) ;
 int FUNC_1 (struct vscphy_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_0)
{
 struct vscphy_softc *VAR_1 = (struct vscphy_softc *)VAR_0;

 switch (VAR_0->mii_mpd_model) {
 case 128:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_0(VAR_0);
  break;
 }
}
