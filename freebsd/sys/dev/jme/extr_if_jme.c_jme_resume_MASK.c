
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct jme_softc {struct ifnet* jme_ifp; int jme_dev; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_softc*) ;
 int FUNC_1 (struct jme_softc*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct jme_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct jme_softc*) ;
 int FUNC_4 (struct jme_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 struct jme_softc *VAR_6;
 struct ifnet *VAR_7;
 uint16_t VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_5);

 FUNC_0(VAR_6);
 if (FUNC_5(VAR_6->jme_dev, VAR_4, &VAR_9) == 0) {
  VAR_8 = FUNC_6(VAR_6->jme_dev,
      VAR_9 + VAR_3, 2);

  VAR_8 &= ~VAR_2;
  FUNC_7(VAR_6->jme_dev,
      VAR_9 + VAR_3, VAR_8, 2);
 }

 FUNC_4(VAR_6);
 VAR_7 = VAR_6->jme_ifp;
 if ((VAR_7->if_flags & VAR_1) != 0) {
  VAR_7->if_drv_flags &= ~VAR_0;
  FUNC_3(VAR_6);
 }

 FUNC_1(VAR_6);

 return (0);
}
