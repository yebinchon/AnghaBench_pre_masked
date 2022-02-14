
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {scalar_t__* ipmi_io_res; scalar_t__ ipmi_io_rid; int ipmi_io_type; scalar_t__ ipmi_irq_res; scalar_t__ ipmi_irq_rid; scalar_t__ ipmi_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct ipmi_softc* FUNC_2 (int ) ;

void
FUNC_3(device_t VAR_2)
{
 struct ipmi_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3->ipmi_irq)
  FUNC_1(VAR_2, VAR_3->ipmi_irq_res, VAR_3->ipmi_irq);
 if (VAR_3->ipmi_irq_res)
  FUNC_0(VAR_2, VAR_1, VAR_3->ipmi_irq_rid,
      VAR_3->ipmi_irq_res);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->ipmi_io_res[VAR_4])
   FUNC_0(VAR_2, VAR_3->ipmi_io_type,
       VAR_3->ipmi_io_rid + VAR_4, VAR_3->ipmi_io_res[VAR_4]);
}
