
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct arge_softc {int arge_stat_callout; scalar_t__ arge_miibus; struct ifnet* arge_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (struct arge_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct arge_softc*) ;
 int FUNC_3 (struct arge_softc*) ;
 int FUNC_4 (struct arge_softc*) ;
 int FUNC_5 (struct arge_softc*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct arge_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->arge_ifp;
 VAR_4->if_drv_flags &= ~(VAR_2 | VAR_1);
 if (VAR_3->arge_miibus)
  FUNC_6(&VAR_3->arge_stat_callout);


 FUNC_1(VAR_3, VAR_0, 0);

 FUNC_3(VAR_3);


 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
}
