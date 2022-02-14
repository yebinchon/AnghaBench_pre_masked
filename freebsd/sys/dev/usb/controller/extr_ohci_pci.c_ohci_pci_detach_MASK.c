
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
typedef TYPE_1__ ohci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 ohci_softc_t *VAR_5 = FUNC_3(VAR_4);


 FUNC_2(VAR_4);

 FUNC_6(VAR_4);

 if (VAR_5->sc_irq_res && VAR_5->sc_intr_hdl) {



  FUNC_5(VAR_5);

  int VAR_6 = FUNC_1(VAR_4, VAR_5->sc_irq_res, VAR_5->sc_intr_hdl);

  if (VAR_6) {

   FUNC_4(VAR_4, "Could not tear down irq, %d\n",
       VAR_6);
  }
  VAR_5->sc_intr_hdl = ((void*)0);
 }
 if (VAR_5->sc_irq_res) {
  FUNC_0(VAR_4, VAR_1, 0, VAR_5->sc_irq_res);
  VAR_5->sc_irq_res = ((void*)0);
 }
 if (VAR_5->sc_io_res) {
  FUNC_0(VAR_4, VAR_2, VAR_0,
      VAR_5->sc_io_res);
  VAR_5->sc_io_res = ((void*)0);
 }
 FUNC_7(&VAR_5->sc_bus, &VAR_3);

 return (0);
}
