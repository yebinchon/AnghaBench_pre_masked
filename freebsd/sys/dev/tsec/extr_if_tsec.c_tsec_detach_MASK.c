
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tsec_softc {TYPE_1__* tsec_ifp; int dev; scalar_t__ sc_rres; } ;
struct TYPE_4__ {int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct tsec_softc*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct tsec_softc *VAR_1)
{

 if (VAR_1->tsec_ifp != ((void*)0)) {






  if (VAR_1->sc_rres)
   FUNC_4(VAR_1->dev);


  FUNC_0(VAR_1->tsec_ifp);
  FUNC_2(VAR_1->tsec_ifp);
  VAR_1->tsec_ifp = ((void*)0);
 }


 FUNC_3(VAR_1);

 return (0);
}
