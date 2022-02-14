
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelspi_softc {int * sc_irq_res; scalar_t__ sc_irq_rid; int * sc_mem_res; scalar_t__ sc_mem_rid; int sc_irq_ih; int sc_dev; int sc_handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct intelspi_softc*) ;
 int FUNC_1 (struct intelspi_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int,int *,int ,struct intelspi_softc*,int *) ;
 int FUNC_7 (int ,char*,int) ;
 struct intelspi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct intelspi_softc*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 struct intelspi_softc *VAR_8;

 VAR_8 = FUNC_8(VAR_7);
 VAR_8->sc_dev = VAR_7;
 VAR_8->sc_handle = FUNC_2(VAR_7);

 FUNC_1(VAR_8);

 VAR_8->sc_mem_rid = 0;
 VAR_8->sc_mem_res = FUNC_3(VAR_8->sc_dev,
     VAR_5, &VAR_8->sc_mem_rid, VAR_3);
 if (VAR_8->sc_mem_res == ((void*)0)) {
  FUNC_9(VAR_7, "can't allocate memory resource\n");
  goto error;
 }

 VAR_8->sc_irq_rid = 0;
 VAR_8->sc_irq_res = FUNC_3(VAR_8->sc_dev,
     VAR_4, &VAR_8->sc_irq_rid, VAR_3);
 if (VAR_8->sc_irq_res == ((void*)0)) {
  FUNC_9(VAR_7, "can't allocate IRQ resource\n");
  goto error;
 }


 if (FUNC_6(VAR_7, VAR_8->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_6, VAR_8, &VAR_8->sc_irq_ih)) {
  FUNC_9(VAR_7, "cannot setup the interrupt handler\n");
  goto error;
 }

 FUNC_10(VAR_8);

 FUNC_7(VAR_7, "spibus", -1);

 return (FUNC_4(VAR_7));

error:
 FUNC_0(VAR_8);

 if (VAR_8->sc_mem_res != ((void*)0))
  FUNC_5(VAR_7, VAR_5,
      VAR_8->sc_mem_rid, VAR_8->sc_mem_res);

 if (VAR_8->sc_irq_res != ((void*)0))
  FUNC_5(VAR_7, VAR_4,
      VAR_8->sc_irq_rid, VAR_8->sc_irq_res);

 return (VAR_0);
}
