
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vge_softc {struct ifnet* vge_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct vge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct vge_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint8_t VAR_5;

 FUNC_2(VAR_3);

 VAR_4 = VAR_3->vge_ifp;
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if ((VAR_4->if_capenable & VAR_0) != 0)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_1, VAR_5);
}
