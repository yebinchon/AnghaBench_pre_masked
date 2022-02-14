
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct an_softc {int an_gone; int an_mtx; int an_stat_ch; int irq_handle; int irq_res; int an_ifmedia; struct ifnet* an_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct an_softc*) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 struct an_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(device_t VAR_1)
{
 struct an_softc *VAR_2 = FUNC_6(VAR_1);
 struct ifnet *VAR_3 = VAR_2->an_ifp;

 if (VAR_2->an_gone) {
  FUNC_7(VAR_1,"already unloaded\n");
  return(0);
 }
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 VAR_2->an_gone = 1;
 FUNC_10(&VAR_2->an_ifmedia);
 VAR_3->if_drv_flags &= ~VAR_0;
 FUNC_1(VAR_2);
 FUNC_8(VAR_3);
 FUNC_4(VAR_1, VAR_2->irq_res, VAR_2->irq_handle);
 FUNC_5(&VAR_2->an_stat_ch);
 FUNC_9(VAR_3);
 FUNC_2(VAR_1);
 FUNC_11(&VAR_2->an_mtx);
 return (0);
}
