
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct dc_softc {scalar_t__ suspended; struct ifnet* dc_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct dc_softc*) ;
 int FUNC_1 (struct dc_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct dc_softc*) ;
 struct dc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct dc_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = VAR_2->dc_ifp;


 FUNC_0(VAR_2);
 if (VAR_3->if_flags & VAR_0)
  FUNC_2(VAR_2);

 VAR_2->suspended = 0;
 FUNC_1(VAR_2);

 return (0);
}
