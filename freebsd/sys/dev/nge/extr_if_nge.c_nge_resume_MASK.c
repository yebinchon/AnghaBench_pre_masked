
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nge_softc {int nge_flags; int nge_dev; struct ifnet* nge_ifp; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nge_softc*) ;
 int FUNC_1 (struct nge_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct nge_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct nge_softc*) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct nge_softc *VAR_7;
 struct ifnet *VAR_8;
 uint16_t VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_6);

 FUNC_0(VAR_7);
 VAR_8 = VAR_7->nge_ifp;
 if (FUNC_4(VAR_7->nge_dev, VAR_5, &VAR_10) == 0) {

  VAR_9 = FUNC_5(VAR_7->nge_dev,
      VAR_10 + VAR_4, 2);
  if ((VAR_9 & VAR_3) != 0) {
   VAR_9 &= ~VAR_3;
   FUNC_6(VAR_7->nge_dev,
       VAR_10 + VAR_4, VAR_9, 2);
  }
 }
 if (VAR_8->if_flags & VAR_1) {
  VAR_8->if_drv_flags &= ~VAR_0;
  FUNC_3(VAR_7);
 }

 VAR_7->nge_flags &= ~VAR_2;
 FUNC_1(VAR_7);

 return (0);
}
