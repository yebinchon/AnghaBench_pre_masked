
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct age_softc {struct ifnet* age_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct age_softc*) ;
 int FUNC_1 (struct age_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct age_softc*) ;
 int FUNC_3 (struct age_softc*) ;
 struct age_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct age_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 VAR_3 = VAR_2->age_ifp;
 if ((VAR_3->if_flags & VAR_0) != 0)
  FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 return (0);
}
