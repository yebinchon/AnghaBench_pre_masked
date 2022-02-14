
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xae_softc {int link_is_up; int xae_callout; struct ifnet* ifp; int mii_softc; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct xae_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct xae_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xae_softc*) ;
 int FUNC_4 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct xae_softc *VAR_3;
 struct ifnet *VAR_4;
 int VAR_5;

 VAR_3 = VAR_2;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->ifp;

 if (!(VAR_4->if_drv_flags & VAR_0))
  return;


 FUNC_3(VAR_3);


 VAR_5 = VAR_3->link_is_up;
 FUNC_2(VAR_3->mii_softc);
 if (VAR_3->link_is_up && !VAR_5)
  FUNC_4(VAR_3->ifp);


 FUNC_1(&VAR_3->xae_callout, VAR_1, FUNC_5, VAR_3);
}
