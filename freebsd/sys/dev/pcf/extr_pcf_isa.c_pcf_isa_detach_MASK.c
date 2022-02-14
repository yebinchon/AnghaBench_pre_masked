
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf_softc {scalar_t__ res_irq; scalar_t__ res_ioport; int pcf_lock; int rid_ioport; int rid_irq; int intr_cookie; int iicbus; } ;
typedef int device_t ;


 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct pcf_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);

 if ((VAR_4 = FUNC_1(VAR_2)) != 0)
  return (VAR_4);

 if ((VAR_4 = FUNC_4(VAR_2, VAR_3->iicbus)) != 0)
  return (VAR_4);

 if (VAR_3->res_irq != 0) {
  FUNC_3(VAR_2, VAR_3->res_irq, VAR_3->intr_cookie);
  FUNC_2(VAR_2, VAR_1, VAR_3->rid_irq, VAR_3->res_irq);
 }

 FUNC_2(VAR_2, VAR_0, VAR_3->rid_ioport, VAR_3->res_ioport);
 FUNC_5(&VAR_3->pcf_lock);

 return (0);
}
