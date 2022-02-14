
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ale_softc {int ale_flags; int ale_mtx; int * ale_res; int ale_res_spec; int * ale_irq; int ale_irq_spec; int ** ale_intrhand; struct ifnet* ale_ifp; int * ale_miibus; int * ale_tq; int ale_int_task; int ale_tick_ch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ale_softc*) ;
 int FUNC_2 (struct ale_softc*) ;
 int FUNC_3 (struct ale_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct ale_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_4)
{
 struct ale_softc *VAR_5;
 struct ifnet *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_9(VAR_4);

 VAR_6 = VAR_5->ale_ifp;
 if (FUNC_10(VAR_4)) {
  FUNC_11(VAR_6);
  FUNC_0(VAR_5);
  FUNC_3(VAR_5);
  FUNC_1(VAR_5);
  FUNC_7(&VAR_5->ale_tick_ch);
  FUNC_15(VAR_5->ale_tq, &VAR_5->ale_int_task);
 }

 if (VAR_5->ale_tq != ((void*)0)) {
  FUNC_15(VAR_5->ale_tq, &VAR_5->ale_int_task);
  FUNC_16(VAR_5->ale_tq);
  VAR_5->ale_tq = ((void*)0);
 }

 if (VAR_5->ale_miibus != ((void*)0)) {
  FUNC_8(VAR_4, VAR_5->ale_miibus);
  VAR_5->ale_miibus = ((void*)0);
 }
 FUNC_4(VAR_4);
 FUNC_2(VAR_5);

 if (VAR_6 != ((void*)0)) {
  FUNC_12(VAR_6);
  VAR_5->ale_ifp = ((void*)0);
 }

 if ((VAR_5->ale_flags & VAR_1) != 0)
  VAR_8 = VAR_2;
 else if ((VAR_5->ale_flags & VAR_0) != 0)
  VAR_8 = VAR_3;
 else
  VAR_8 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_5->ale_intrhand[VAR_7] != ((void*)0)) {
   FUNC_6(VAR_4, VAR_5->ale_irq[VAR_7],
       VAR_5->ale_intrhand[VAR_7]);
   VAR_5->ale_intrhand[VAR_7] = ((void*)0);
  }
 }

 FUNC_5(VAR_4, VAR_5->ale_irq_spec, VAR_5->ale_irq);
 if ((VAR_5->ale_flags & (VAR_0 | VAR_1)) != 0)
  FUNC_14(VAR_4);
 FUNC_5(VAR_4, VAR_5->ale_res_spec, VAR_5->ale_res);
 FUNC_13(&VAR_5->ale_mtx);

 return (0);
}
