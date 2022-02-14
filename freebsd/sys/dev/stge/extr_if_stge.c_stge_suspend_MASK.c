
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int sc_suspended; } ;
typedef int device_t ;


 int FUNC_0 (struct stge_softc*) ;
 int FUNC_1 (struct stge_softc*) ;
 struct stge_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct stge_softc*) ;
 int FUNC_4 (struct stge_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct stge_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_4(VAR_1);
 VAR_1->sc_suspended = 1;
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 return (0);
}
