
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifnet {int if_flags; int if_drv_flags; } ;
struct alc_softc {int alc_flags; struct ifnet* alc_ifp; scalar_t__ alc_pmcap; int alc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct alc_softc*) ;
 int FUNC_3 (struct alc_softc*) ;
 struct alc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct alc_softc *VAR_6;
 struct ifnet *VAR_7;
 uint16_t VAR_8;

 VAR_6 = FUNC_4(VAR_5);

 FUNC_0(VAR_6);
 if ((VAR_6->alc_flags & VAR_0) != 0) {

  VAR_8 = FUNC_5(VAR_6->alc_dev,
      VAR_6->alc_pmcap + VAR_4, 2);
  if ((VAR_8 & VAR_3) != 0) {
   VAR_8 &= ~VAR_3;
   FUNC_6(VAR_6->alc_dev,
       VAR_6->alc_pmcap + VAR_4, VAR_8, 2);
  }
 }

 FUNC_3(VAR_6);
 VAR_7 = VAR_6->alc_ifp;
 if ((VAR_7->if_flags & VAR_2) != 0) {
  VAR_7->if_drv_flags &= ~VAR_1;
  FUNC_2(VAR_6);
 }
 FUNC_1(VAR_6);

 return (0);
}
