
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {struct ifnet* ste_ifp; int ste_dev; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ste_softc*) ;
 int FUNC_1 (struct ste_softc*) ;
 struct ste_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;
 int FUNC_6 (struct ste_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct ste_softc *VAR_6;
 struct ifnet *VAR_7;
 int VAR_8;
 uint16_t VAR_9;

 VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_6);
 if (FUNC_3(VAR_6->ste_dev, VAR_4, &VAR_8) == 0) {

  VAR_9 = FUNC_4(VAR_6->ste_dev,
      VAR_8 + VAR_3, 2);
  if ((VAR_9 & VAR_2) != 0) {
   VAR_9 &= ~VAR_2;
   FUNC_5(VAR_6->ste_dev,
       VAR_8 + VAR_3, VAR_9, 2);
  }
 }
 VAR_7 = VAR_6->ste_ifp;
 if ((VAR_7->if_flags & VAR_1) != 0) {
  VAR_7->if_drv_flags &= ~VAR_0;
  FUNC_6(VAR_6);
 }
 FUNC_1(VAR_6);

 return (0);
}
