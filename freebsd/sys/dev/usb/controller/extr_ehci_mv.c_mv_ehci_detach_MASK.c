
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 ehci_softc_t *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;


 FUNC_3(VAR_6);




 if (VAR_7->sc_io_res) {
  FUNC_0(VAR_7, VAR_2, 0);
 }
 if (VAR_7->sc_irq_res && VAR_7->sc_intr_hdl) {



  FUNC_6(VAR_7);

  VAR_8 = FUNC_2(VAR_6, VAR_7->sc_irq_res, VAR_7->sc_intr_hdl);

  if (VAR_8)

   FUNC_5(VAR_6, "Could not tear down irq, %d\n",
       VAR_8);
  VAR_7->sc_intr_hdl = ((void*)0);
 }
 if (VAR_5 && VAR_4) {
  VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_4);

  if (VAR_8)
   FUNC_5(VAR_6, "Could not tear down irq, %d\n",
       VAR_8);
  VAR_4 = ((void*)0);
 }
 if (VAR_5) {
  FUNC_1(VAR_6, VAR_0, 0, VAR_5);
  VAR_5 = ((void*)0);
 }
 if (VAR_7->sc_irq_res) {
  FUNC_1(VAR_6, VAR_0, 1, VAR_7->sc_irq_res);
  VAR_7->sc_irq_res = ((void*)0);
 }
 if (VAR_7->sc_io_res) {
  FUNC_1(VAR_6, VAR_1, 0,
      VAR_7->sc_io_res);
  VAR_7->sc_io_res = ((void*)0);
 }
 FUNC_7(&VAR_7->sc_bus, &VAR_3);

 return (0);
}
