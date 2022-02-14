
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct cpswp_softc {int swsc; int unit; int mii_callout; struct ifnet* ifp; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cpswp_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_12(struct cpswp_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_3->ifp;
 FUNC_0(VAR_3->swsc, (""));
 FUNC_1(VAR_3);

 if ((VAR_4->if_drv_flags & VAR_2) == 0)
  return;


 VAR_4->if_drv_flags &= ~VAR_2;
 VAR_4->if_drv_flags |= VAR_1;


 FUNC_3(&VAR_3->mii_callout);


 if (FUNC_5(VAR_3->swsc)) {
  FUNC_8(VAR_3->swsc);
  FUNC_10(VAR_3->swsc);
 }


 VAR_5 = FUNC_6(VAR_3->swsc, FUNC_2(VAR_3->unit));
 VAR_5 &= ~VAR_0;
 FUNC_11(VAR_3->swsc, FUNC_2(VAR_3->unit), VAR_5);

 if (FUNC_5(VAR_3->swsc)) {

  FUNC_9(VAR_3->swsc);

  FUNC_7(VAR_3->swsc);
  FUNC_4(VAR_3->swsc);
 }
}
