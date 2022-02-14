
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_capenable; } ;
struct arge_softc {int arge_detach; int arge_mtx; scalar_t__ arge_res; int arge_rid; scalar_t__ arge_intrhand; int arge_irq; scalar_t__ arge_miiproxy; scalar_t__ arge_miibus; int arge_link_task; struct ifnet* arge_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (struct arge_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct arge_softc*) ;
 int FUNC_4 (struct arge_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 struct arge_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_3)
{
 struct arge_softc *VAR_4 = FUNC_9(VAR_3);
 struct ifnet *VAR_5 = VAR_4->arge_ifp;

 FUNC_2(FUNC_15(&VAR_4->arge_mtx),
     ("arge mutex not initialized"));


 if (FUNC_10(VAR_3)) {
  FUNC_0(VAR_4);
  VAR_4->arge_detach = 1;





  FUNC_4(VAR_4);
  FUNC_1(VAR_4);
  FUNC_16(VAR_2, &VAR_4->arge_link_task);
  FUNC_11(VAR_5);
 }

 if (VAR_4->arge_miibus)
  FUNC_8(VAR_3, VAR_4->arge_miibus);

 if (VAR_4->arge_miiproxy)
  FUNC_8(VAR_3, VAR_4->arge_miiproxy);

 FUNC_5(VAR_3);

 if (VAR_4->arge_intrhand)
  FUNC_7(VAR_3, VAR_4->arge_irq, VAR_4->arge_intrhand);

 if (VAR_4->arge_res)
  FUNC_6(VAR_3, VAR_1, VAR_4->arge_rid,
      VAR_4->arge_res);

 if (VAR_5)
  FUNC_13(VAR_5);

 FUNC_3(VAR_4);

 FUNC_14(&VAR_4->arge_mtx);

 return (0);

}
