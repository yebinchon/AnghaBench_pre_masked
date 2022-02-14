
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_softc {struct ifnet* sge_ifp; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct sge_softc*) ;
 int FUNC_1 (struct sge_softc*) ;
 struct sge_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct sge_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct sge_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2);
 VAR_3 = VAR_2->sge_ifp;
 if ((VAR_3->if_drv_flags & VAR_0) != 0)
  FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 return (0);
}
