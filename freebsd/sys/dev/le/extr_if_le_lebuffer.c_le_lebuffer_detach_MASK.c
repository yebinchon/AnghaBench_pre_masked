
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lance_softc {int dummy; } ;
struct TYPE_2__ {struct lance_softc lsc; } ;
struct le_lebuffer_softc {int sc_bres; int sc_rres; int sc_ires; TYPE_1__ sc_am7990; int sc_ih; } ;
typedef int device_t ;


 int FUNC_0 (struct lance_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct le_lebuffer_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct le_lebuffer_softc *VAR_3;
 struct lance_softc *VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = &VAR_3->sc_am7990.lsc;

 FUNC_3(VAR_2, VAR_3->sc_ires, VAR_3->sc_ih);
 FUNC_1(&VAR_3->sc_am7990);
 FUNC_2(VAR_2, VAR_0,
     FUNC_6(VAR_3->sc_ires), VAR_3->sc_ires);
 FUNC_2(VAR_2, VAR_1,
     FUNC_6(VAR_3->sc_rres), VAR_3->sc_rres);
 FUNC_2(FUNC_4(VAR_2), VAR_1,
     FUNC_6(VAR_3->sc_bres), VAR_3->sc_bres);
 FUNC_0(VAR_4);

 return (0);
}
