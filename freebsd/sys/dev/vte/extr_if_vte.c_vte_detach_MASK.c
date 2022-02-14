
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vte_softc {int vte_mtx; struct ifnet* vte_ifp; int * vte_res; int vte_res_id; int vte_res_type; int * vte_irq; int * vte_intrhand; int * vte_miibus; int vte_tick_ch; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vte_softc*) ;
 int FUNC_1 (struct vte_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct vte_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct vte_softc*) ;
 int FUNC_13 (struct vte_softc*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_1)
{
 struct vte_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_7(VAR_1);

 VAR_3 = VAR_2->vte_ifp;
 if (FUNC_8(VAR_1)) {
  FUNC_0(VAR_2);
  FUNC_13(VAR_2);
  FUNC_1(VAR_2);
  FUNC_5(&VAR_2->vte_tick_ch);
  FUNC_9(VAR_3);
 }

 if (VAR_2->vte_miibus != ((void*)0)) {
  FUNC_6(VAR_1, VAR_2->vte_miibus);
  VAR_2->vte_miibus = ((void*)0);
 }
 FUNC_2(VAR_1);

 if (VAR_2->vte_intrhand != ((void*)0)) {
  FUNC_4(VAR_1, VAR_2->vte_irq, VAR_2->vte_intrhand);
  VAR_2->vte_intrhand = ((void*)0);
 }
 if (VAR_2->vte_irq != ((void*)0)) {
  FUNC_3(VAR_1, VAR_0, 0, VAR_2->vte_irq);
  VAR_2->vte_irq = ((void*)0);
 }
 if (VAR_2->vte_res != ((void*)0)) {
  FUNC_3(VAR_1, VAR_2->vte_res_type, VAR_2->vte_res_id,
      VAR_2->vte_res);
  VAR_2->vte_res = ((void*)0);
 }
 if (VAR_3 != ((void*)0)) {
  FUNC_10(VAR_3);
  VAR_2->vte_ifp = ((void*)0);
 }
 FUNC_12(VAR_2);
 FUNC_11(&VAR_2->vte_mtx);

 return (0);
}
