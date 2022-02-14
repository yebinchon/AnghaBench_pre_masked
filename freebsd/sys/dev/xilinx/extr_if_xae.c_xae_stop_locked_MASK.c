
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int xae_callout; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xae_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct xae_softc*,int ,int ) ;
 int FUNC_2 (struct xae_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct xae_softc *VAR_6)
{
 struct ifnet *VAR_7;
 uint32_t VAR_8;

 FUNC_2(VAR_6);

 VAR_7 = VAR_6->ifp;
 VAR_7->if_drv_flags &= ~(VAR_1 | VAR_0);

 FUNC_3(&VAR_6->xae_callout);


 VAR_8 = FUNC_0(VAR_6, VAR_5);
 VAR_8 &= ~VAR_3;
 FUNC_1(VAR_6, VAR_5, VAR_8);


 VAR_8 = FUNC_0(VAR_6, VAR_4);
 VAR_8 &= ~VAR_2;
 FUNC_1(VAR_6, VAR_4, VAR_8);
}
