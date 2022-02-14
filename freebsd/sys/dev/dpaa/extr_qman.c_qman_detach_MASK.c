
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_softc {int * sc_rres; int sc_rrid; int * sc_ires; int sc_irid; scalar_t__ sc_qh; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct qman_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_2)
{
 struct qman_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->sc_qh)
  FUNC_0(VAR_3->sc_qh);

 if (VAR_3->sc_ires != ((void*)0))
  FUNC_1((uintptr_t)VAR_3->sc_ires);

 if (VAR_3->sc_ires != ((void*)0))
  FUNC_2(VAR_2, VAR_0,
      VAR_3->sc_irid, VAR_3->sc_ires);

 if (VAR_3->sc_rres != ((void*)0))
  FUNC_2(VAR_2, VAR_1,
      VAR_3->sc_rrid, VAR_3->sc_rres);

 return (0);
}
