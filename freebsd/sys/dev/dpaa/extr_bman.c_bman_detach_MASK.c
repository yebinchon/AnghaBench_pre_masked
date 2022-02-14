
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bman_softc {int * sc_rres; int sc_rrid; int * sc_ires; int sc_irid; int * sc_bh; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct bman_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_2)
{
 struct bman_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->sc_bh != ((void*)0))
  FUNC_0(VAR_3->sc_bh);

 if (VAR_3->sc_ires != ((void*)0))
  FUNC_1(VAR_2, VAR_0,
      VAR_3->sc_irid, VAR_3->sc_ires);

 if (VAR_3->sc_rres != ((void*)0))
  FUNC_1(VAR_2, VAR_1,
      VAR_3->sc_rrid, VAR_3->sc_rres);

 return (0);
}
