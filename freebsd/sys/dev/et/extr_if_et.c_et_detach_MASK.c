
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_softc {int sc_flags; int sc_mtx; int * ifp; int * sc_mem_res; int * sc_irq_res; int * sc_irq_handle; int * sc_miibus; int sc_tick; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct et_softc*) ;
 int FUNC_1 (struct et_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct et_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct et_softc*) ;
 int FUNC_10 (struct et_softc*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_3)
{
 struct et_softc *VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (FUNC_8(VAR_3)) {
  FUNC_11(VAR_4->ifp);
  FUNC_0(VAR_4);
  FUNC_10(VAR_4);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->sc_tick);
 }

 if (VAR_4->sc_miibus != ((void*)0))
  FUNC_6(VAR_3, VAR_4->sc_miibus);
 FUNC_2(VAR_3);

 if (VAR_4->sc_irq_handle != ((void*)0))
  FUNC_4(VAR_3, VAR_4->sc_irq_res, VAR_4->sc_irq_handle);
 if (VAR_4->sc_irq_res != ((void*)0))
  FUNC_3(VAR_3, VAR_1,
      FUNC_15(VAR_4->sc_irq_res), VAR_4->sc_irq_res);
 if ((VAR_4->sc_flags & VAR_0) != 0)
  FUNC_14(VAR_3);
 if (VAR_4->sc_mem_res != ((void*)0))
  FUNC_3(VAR_3, VAR_2,
      FUNC_15(VAR_4->sc_mem_res), VAR_4->sc_mem_res);

 if (VAR_4->ifp != ((void*)0))
  FUNC_12(VAR_4->ifp);

 FUNC_9(VAR_4);

 FUNC_13(&VAR_4->sc_mtx);

 return (0);
}
