
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_softc {int my_mtx; int my_res; int my_irq; int my_ldata_ptr; int my_autoneg_timer; int my_watchdog; int my_intrhand; struct ifnet* my_ifp; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct my_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct my_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct my_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct my_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct my_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = VAR_5->my_ifp;
 FUNC_6(VAR_6);
 FUNC_0(VAR_5);
 FUNC_10(VAR_5);
 FUNC_1(VAR_5);
 FUNC_3(VAR_4, VAR_5->my_irq, VAR_5->my_intrhand);
 FUNC_4(&VAR_5->my_watchdog);
 FUNC_4(&VAR_5->my_autoneg_timer);

 FUNC_8(VAR_6);
 FUNC_7(VAR_5->my_ldata_ptr, VAR_2);

 FUNC_2(VAR_4, VAR_3, 0, VAR_5->my_irq);
 FUNC_2(VAR_4, VAR_0, VAR_1, VAR_5->my_res);
 FUNC_9(&VAR_5->my_mtx);
 return (0);
}
