
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_softc {int jme_flags; int jme_mtx; int ** jme_res; int jme_res_spec; int ** jme_irq; int jme_irq_spec; int ** jme_intrhand; struct ifnet* jme_ifp; int * jme_miibus; int * jme_tq; int jme_int_task; int jme_eaddr; int jme_link_task; int jme_tick_ch; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jme_softc*) ;
 int FUNC_1 (struct jme_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct jme_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct jme_softc*) ;
 int FUNC_12 (struct jme_softc*,int ) ;
 int FUNC_13 (struct jme_softc*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_5)
{
 struct jme_softc *VAR_6;
 struct ifnet *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_5);

 VAR_7 = VAR_6->jme_ifp;
 if (FUNC_8(VAR_5)) {
  FUNC_0(VAR_6);
  VAR_6->jme_flags |= VAR_0;
  FUNC_13(VAR_6);
  FUNC_1(VAR_6);
  FUNC_5(&VAR_6->jme_tick_ch);
  FUNC_16(VAR_6->jme_tq, &VAR_6->jme_int_task);
  FUNC_16(VAR_4, &VAR_6->jme_link_task);

  if ((VAR_6->jme_flags & VAR_1) != 0)
   FUNC_12(VAR_6, VAR_6->jme_eaddr);
  FUNC_9(VAR_7);
 }

 if (VAR_6->jme_tq != ((void*)0)) {
  FUNC_16(VAR_6->jme_tq, &VAR_6->jme_int_task);
  FUNC_17(VAR_6->jme_tq);
  VAR_6->jme_tq = ((void*)0);
 }

 if (VAR_6->jme_miibus != ((void*)0)) {
  FUNC_6(VAR_5, VAR_6->jme_miibus);
  VAR_6->jme_miibus = ((void*)0);
 }
 FUNC_2(VAR_5);
 FUNC_11(VAR_6);

 if (VAR_7 != ((void*)0)) {
  FUNC_10(VAR_7);
  VAR_6->jme_ifp = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < 1; VAR_8++) {
  if (VAR_6->jme_intrhand[VAR_8] != ((void*)0)) {
   FUNC_4(VAR_5, VAR_6->jme_irq[VAR_8],
       VAR_6->jme_intrhand[VAR_8]);
   VAR_6->jme_intrhand[VAR_8] = ((void*)0);
  }
 }

 if (VAR_6->jme_irq[0] != ((void*)0))
  FUNC_3(VAR_5, VAR_6->jme_irq_spec, VAR_6->jme_irq);
 if ((VAR_6->jme_flags & (VAR_3 | VAR_2)) != 0)
  FUNC_15(VAR_5);
 if (VAR_6->jme_res[0] != ((void*)0))
  FUNC_3(VAR_5, VAR_6->jme_res_spec, VAR_6->jme_res);
 FUNC_14(&VAR_6->jme_mtx);

 return (0);
}
