
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lance_softc {int sc_mem; } ;
struct TYPE_2__ {struct lance_softc lsc; } ;
struct le_isa_softc {int sc_rres; int sc_dres; int sc_ires; int sc_pdmat; int sc_dmat; int sc_dmam; TYPE_1__ sc_am7990; int sc_ih; } ;
typedef int device_t ;


 int FUNC_0 (struct lance_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct le_isa_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct le_isa_softc *VAR_4;
 struct lance_softc *VAR_5;

 VAR_4 = FUNC_7(VAR_3);
 VAR_5 = &VAR_4->sc_am7990.lsc;

 FUNC_6(VAR_3, VAR_4->sc_ires, VAR_4->sc_ih);
 FUNC_1(&VAR_4->sc_am7990);
 FUNC_3(VAR_4->sc_dmat, VAR_4->sc_dmam);
 FUNC_4(VAR_4->sc_dmat, VAR_5->sc_mem, VAR_4->sc_dmam);
 FUNC_2(VAR_4->sc_dmat);
 FUNC_2(VAR_4->sc_pdmat);
 FUNC_5(VAR_3, VAR_2,
     FUNC_8(VAR_4->sc_ires), VAR_4->sc_ires);
 FUNC_5(VAR_3, VAR_0,
     FUNC_8(VAR_4->sc_dres), VAR_4->sc_dres);
 FUNC_5(VAR_3, VAR_1,
     FUNC_8(VAR_4->sc_rres), VAR_4->sc_rres);
 FUNC_0(VAR_5);

 return (0);
}
