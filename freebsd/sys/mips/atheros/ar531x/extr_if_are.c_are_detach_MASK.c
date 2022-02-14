
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct are_softc {int are_detach; int are_mtx; scalar_t__ are_res; int are_rid; scalar_t__ are_irq; scalar_t__ are_intrhand; scalar_t__ are_miibus; int are_link_task; struct ifnet* are_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct are_softc*) ;
 int FUNC_1 (struct are_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct are_softc*) ;
 int FUNC_4 (struct are_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 struct are_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_3)
{
 struct are_softc *VAR_4 = FUNC_9(VAR_3);
 struct ifnet *VAR_5 = VAR_4->are_ifp;

 FUNC_2(FUNC_14(&VAR_4->are_mtx), ("vr mutex not initialized"));


 if (FUNC_10(VAR_3)) {
  FUNC_0(VAR_4);
  VAR_4->are_detach = 1;
  FUNC_4(VAR_4);
  FUNC_1(VAR_4);
  FUNC_15(VAR_2, &VAR_4->are_link_task);
  FUNC_11(VAR_5);
 }




 FUNC_5(VAR_3);

 if (VAR_4->are_intrhand)
  FUNC_7(VAR_3, VAR_4->are_irq, VAR_4->are_intrhand);
 if (VAR_4->are_irq)
  FUNC_6(VAR_3, VAR_0, 0, VAR_4->are_irq);

 if (VAR_4->are_res)
  FUNC_6(VAR_3, VAR_1, VAR_4->are_rid,
      VAR_4->are_res);

 if (VAR_5)
  FUNC_12(VAR_5);

 FUNC_3(VAR_4);

 FUNC_13(&VAR_4->are_mtx);

 return (0);

}
