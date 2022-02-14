
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct alc_softc {int alc_flags; int alc_mtx; int ** alc_res; int alc_res_spec; int ** alc_irq; int alc_irq_spec; int ** alc_intrhand; struct ifnet* alc_ifp; int * alc_miibus; int * alc_tq; int alc_int_task; int alc_tick_ch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct alc_softc*) ;
 int FUNC_2 (struct alc_softc*) ;
 int FUNC_3 (struct alc_softc*) ;
 int FUNC_4 (struct alc_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int **) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 struct alc_softc* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_4)
{
 struct alc_softc *VAR_5;
 struct ifnet *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_10(VAR_4);

 VAR_6 = VAR_5->alc_ifp;
 if (FUNC_11(VAR_4)) {
  FUNC_12(VAR_6);
  FUNC_0(VAR_5);
  FUNC_4(VAR_5);
  FUNC_1(VAR_5);
  FUNC_8(&VAR_5->alc_tick_ch);
  FUNC_16(VAR_5->alc_tq, &VAR_5->alc_int_task);
 }

 if (VAR_5->alc_tq != ((void*)0)) {
  FUNC_16(VAR_5->alc_tq, &VAR_5->alc_int_task);
  FUNC_17(VAR_5->alc_tq);
  VAR_5->alc_tq = ((void*)0);
 }

 if (VAR_5->alc_miibus != ((void*)0)) {
  FUNC_9(VAR_4, VAR_5->alc_miibus);
  VAR_5->alc_miibus = ((void*)0);
 }
 FUNC_5(VAR_4);
 FUNC_2(VAR_5);

 if (VAR_6 != ((void*)0)) {
  FUNC_13(VAR_6);
  VAR_5->alc_ifp = ((void*)0);
 }

 if ((VAR_5->alc_flags & VAR_1) != 0)
  VAR_8 = VAR_2;
 else if ((VAR_5->alc_flags & VAR_0) != 0)
  VAR_8 = VAR_3;
 else
  VAR_8 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_5->alc_intrhand[VAR_7] != ((void*)0)) {
   FUNC_7(VAR_4, VAR_5->alc_irq[VAR_7],
       VAR_5->alc_intrhand[VAR_7]);
   VAR_5->alc_intrhand[VAR_7] = ((void*)0);
  }
 }
 if (VAR_5->alc_res[0] != ((void*)0))
  FUNC_3(VAR_5);
 FUNC_6(VAR_4, VAR_5->alc_irq_spec, VAR_5->alc_irq);
 if ((VAR_5->alc_flags & (VAR_0 | VAR_1)) != 0)
  FUNC_15(VAR_4);
 FUNC_6(VAR_4, VAR_5->alc_res_spec, VAR_5->alc_res);
 FUNC_14(&VAR_5->alc_mtx);

 return (0);
}
