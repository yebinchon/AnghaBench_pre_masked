
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {struct ifnet* ifp; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 struct rt_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct rt_softc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct rt_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_3->ifp;

 FUNC_0(VAR_3, VAR_1, "resuming\n");

 if (VAR_4->if_flags & VAR_0)
  FUNC_2(VAR_3);

 return (0);
}
