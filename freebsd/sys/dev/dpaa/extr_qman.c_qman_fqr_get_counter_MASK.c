
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int * t_Handle ;
struct qman_softc {int sc_dev; } ;
typedef int e_QmFqrCounters ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (struct qman_softc*) ;
 struct qman_softc* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

uint32_t
FUNC_5(t_Handle VAR_1, uint32_t VAR_2,
    e_QmFqrCounters VAR_3)
{
 struct qman_softc *VAR_4;
 uint32_t VAR_5;
 t_Handle VAR_6;

 VAR_4 = VAR_0;
 FUNC_3();


 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_4->sc_dev, "could not setup QMan portal\n");
  FUNC_4();
  return (0);
 }

 VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_2, VAR_3);

 FUNC_4();

 return (VAR_5);
}
