
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umass_softc {int sc_mtx; int sc_xfer; } ;
typedef int device_t ;


 int FUNC_0 (struct umass_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct umass_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct umass_softc*) ;
 int FUNC_6 (struct umass_softc*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct umass_softc *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_0, "\n");



 FUNC_7(VAR_3->sc_xfer, VAR_1);

 FUNC_3(&VAR_3->sc_mtx);



 FUNC_6(VAR_3);

 FUNC_5(VAR_3);

 FUNC_4(&VAR_3->sc_mtx);

 FUNC_2(&VAR_3->sc_mtx);

 return (0);
}
