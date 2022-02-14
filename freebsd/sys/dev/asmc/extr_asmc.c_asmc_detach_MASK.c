
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asmc_softc {int sc_mtx; scalar_t__ sc_ioport; int sc_rid_port; scalar_t__ sc_irq; int sc_rid_irq; scalar_t__ sc_cookie; scalar_t__ sc_sms_tq; int sc_sms_task; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct asmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct asmc_softc *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->sc_sms_tq) {
  FUNC_4(VAR_3->sc_sms_tq, &VAR_3->sc_sms_task);
  FUNC_5(VAR_3->sc_sms_tq);
 }
 if (VAR_3->sc_cookie)
  FUNC_1(VAR_2, VAR_3->sc_irq, VAR_3->sc_cookie);
 if (VAR_3->sc_irq)
  FUNC_0(VAR_2, VAR_1, VAR_3->sc_rid_irq,
      VAR_3->sc_irq);
 if (VAR_3->sc_ioport)
  FUNC_0(VAR_2, VAR_0, VAR_3->sc_rid_port,
      VAR_3->sc_ioport);
 FUNC_3(&VAR_3->sc_mtx);

 return (0);
}
