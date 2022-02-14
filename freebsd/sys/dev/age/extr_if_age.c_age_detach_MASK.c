
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct age_softc {int age_flags; int age_mtx; int * age_res; int age_res_spec; int * age_irq; int age_irq_spec; int ** age_intrhand; struct ifnet* age_ifp; int * age_miibus; int * age_tq; int age_int_task; int age_link_task; int age_tick_ch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct age_softc*) ;
 int FUNC_2 (struct age_softc*) ;
 int FUNC_3 (struct age_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct age_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_6)
{
 struct age_softc *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_9(VAR_6);

 VAR_8 = VAR_7->age_ifp;
 if (FUNC_10(VAR_6)) {
  FUNC_0(VAR_7);
  VAR_7->age_flags |= VAR_0;
  FUNC_3(VAR_7);
  FUNC_1(VAR_7);
  FUNC_7(&VAR_7->age_tick_ch);
  FUNC_15(VAR_7->age_tq, &VAR_7->age_int_task);
  FUNC_15(VAR_5, &VAR_7->age_link_task);
  FUNC_11(VAR_8);
 }

 if (VAR_7->age_tq != ((void*)0)) {
  FUNC_15(VAR_7->age_tq, &VAR_7->age_int_task);
  FUNC_16(VAR_7->age_tq);
  VAR_7->age_tq = ((void*)0);
 }

 if (VAR_7->age_miibus != ((void*)0)) {
  FUNC_8(VAR_6, VAR_7->age_miibus);
  VAR_7->age_miibus = ((void*)0);
 }
 FUNC_4(VAR_6);
 FUNC_2(VAR_7);

 if (VAR_8 != ((void*)0)) {
  FUNC_12(VAR_8);
  VAR_7->age_ifp = ((void*)0);
 }

 if ((VAR_7->age_flags & VAR_2) != 0)
  VAR_10 = VAR_3;
 else if ((VAR_7->age_flags & VAR_1) != 0)
  VAR_10 = VAR_4;
 else
  VAR_10 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_7->age_intrhand[VAR_9] != ((void*)0)) {
   FUNC_6(VAR_6, VAR_7->age_irq[VAR_9],
       VAR_7->age_intrhand[VAR_9]);
   VAR_7->age_intrhand[VAR_9] = ((void*)0);
  }
 }

 FUNC_5(VAR_6, VAR_7->age_irq_spec, VAR_7->age_irq);
 if ((VAR_7->age_flags & (VAR_1 | VAR_2)) != 0)
  FUNC_14(VAR_6);
 FUNC_5(VAR_6, VAR_7->age_res_spec, VAR_7->age_res);
 FUNC_13(&VAR_7->age_mtx);

 return (0);
}
