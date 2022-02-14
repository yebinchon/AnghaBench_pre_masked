
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelspi_softc {int * sc_irq_res; int sc_irq_rid; int * sc_mem_res; int sc_mem_rid; scalar_t__ sc_irq_ih; } ;
typedef int device_t ;


 int FUNC_0 (struct intelspi_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 struct intelspi_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct intelspi_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 FUNC_0(VAR_3);

 if (VAR_3->sc_irq_ih)
  FUNC_3(VAR_2, VAR_3->sc_irq_res, VAR_3->sc_irq_ih);

 if (VAR_3->sc_mem_res != ((void*)0))
  FUNC_2(VAR_2, VAR_1,
      VAR_3->sc_mem_rid, VAR_3->sc_mem_res);

 if (VAR_3->sc_irq_res != ((void*)0))
  FUNC_2(VAR_2, VAR_0,
      VAR_3->sc_irq_rid, VAR_3->sc_irq_res);

 return (FUNC_1(VAR_2));
}
