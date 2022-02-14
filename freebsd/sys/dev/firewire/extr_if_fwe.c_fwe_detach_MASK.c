
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_capenable; } ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct fwe_softc {int mtx; TYPE_1__ eth_softc; } ;
typedef int device_t ;


 int VAR_0 ;
 struct fwe_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct fwe_softc*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct fwe_softc *VAR_2;
 struct ifnet *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->eth_softc.ifp;





 VAR_4 = FUNC_6();

 FUNC_3(VAR_2);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);

 FUNC_7(VAR_4);
 FUNC_5(&VAR_2->mtx);
 return 0;
}
