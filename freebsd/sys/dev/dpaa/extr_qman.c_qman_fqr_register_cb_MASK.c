
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_QmReceivedFrameCallback ;
typedef int * t_Handle ;
typedef int t_Error ;
struct qman_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (struct qman_softc*) ;
 struct qman_softc* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

t_Error
FUNC_5(t_Handle VAR_2, t_QmReceivedFrameCallback *VAR_3,
    t_Handle VAR_4)
{
 struct qman_softc *VAR_5;
 t_Error VAR_6;
 t_Handle VAR_7;

 VAR_5 = VAR_1;
 FUNC_3();


 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_5->sc_dev, "could not setup QMan portal\n");
  FUNC_4();
  return (VAR_0);
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_4();

 return (VAR_6);
}
