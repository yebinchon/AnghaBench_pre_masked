
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcnull_softc {int sc_mtx; int tick; int * devq; int * sim; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mmcnull_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct mmcnull_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (VAR_3->sim != ((void*)0)) {
  FUNC_7(&VAR_3->sc_mtx);
  FUNC_9(FUNC_2(VAR_3->sim));
  FUNC_1(VAR_3->sim, VAR_1);
  FUNC_8(&VAR_3->sc_mtx);
 }

 if (VAR_3->devq != ((void*)0))
  FUNC_3(VAR_3->devq);

 FUNC_0(&VAR_3->tick);
 FUNC_6(&VAR_3->sc_mtx);

 FUNC_5(VAR_2, "detached OK\n");
 return (0);
}
