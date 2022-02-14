
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscphy_softc {int contype; int mii_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vscphy_softc*) ;
 int FUNC_3 (struct vscphy_softc*,int ) ;
 int FUNC_4 (struct vscphy_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct vscphy_softc *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_0(VAR_2->contype))
  VAR_3 |= VAR_1;
 else
  VAR_3 &= ~VAR_1;
 FUNC_4(VAR_2, VAR_0, VAR_3);

 FUNC_1(&VAR_2->mii_sc);




 if (FUNC_0(VAR_2->contype))
     FUNC_2(VAR_2);
}
