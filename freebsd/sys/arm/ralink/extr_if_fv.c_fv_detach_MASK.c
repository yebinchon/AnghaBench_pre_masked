
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct fv_softc {int fv_detach; int fv_mtx; scalar_t__ fv_res; int fv_rid; scalar_t__ fv_irq; scalar_t__ fv_intrhand; scalar_t__ fv_miibus; int fv_link_task; struct ifnet* fv_ifp; } ;
typedef int device_t ;


 int FUNC_0 (struct fv_softc*) ;
 int FUNC_1 (struct fv_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 struct fv_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct fv_softc*) ;
 int FUNC_11 (struct fv_softc*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_3)
{
 struct fv_softc *VAR_4 = FUNC_7(VAR_3);
 struct ifnet *VAR_5 = VAR_4->fv_ifp;

 FUNC_2(FUNC_14(&VAR_4->fv_mtx), ("vr mutex not initialized"));


 if (FUNC_8(VAR_3)) {
  FUNC_0(VAR_4);
  VAR_4->fv_detach = 1;
  FUNC_11(VAR_4);
  FUNC_1(VAR_4);
  FUNC_15(VAR_2, &VAR_4->fv_link_task);
  FUNC_9(VAR_5);
 }




 FUNC_3(VAR_3);

 if (VAR_4->fv_intrhand)
  FUNC_5(VAR_3, VAR_4->fv_irq, VAR_4->fv_intrhand);
 if (VAR_4->fv_irq)
  FUNC_4(VAR_3, VAR_0, 0, VAR_4->fv_irq);

 if (VAR_4->fv_res)
  FUNC_4(VAR_3, VAR_1, VAR_4->fv_rid,
      VAR_4->fv_res);

 if (VAR_5)
  FUNC_12(VAR_5);

 FUNC_10(VAR_4);

 FUNC_13(&VAR_4->fv_mtx);

 return (0);

}
