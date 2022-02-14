
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xae_softc {int xae_callout; int mii_softc; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xae_softc*,int ,int ) ;
 int FUNC_1 (struct xae_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,struct xae_softc*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xae_softc*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct xae_softc *VAR_7)
{
 struct ifnet *VAR_8;

 FUNC_1(VAR_7);

 VAR_8 = VAR_7->ifp;
 if (VAR_8->if_drv_flags & VAR_0)
  return;

 VAR_8->if_drv_flags |= VAR_0;

 FUNC_4(VAR_7);


 FUNC_0(VAR_7, VAR_4, VAR_2);


 FUNC_0(VAR_7, VAR_3, VAR_1);





 FUNC_3(VAR_7->mii_softc);
 FUNC_2(&VAR_7->xae_callout, VAR_5, VAR_6, VAR_7);
}
