
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {scalar_t__ io_off; scalar_t__ io_res; int io_rid; int dev; scalar_t__ irq_res; int irq_rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;

void
FUNC_1(struct sbni_softc *VAR_2)
{

 if (VAR_2->irq_res)
  FUNC_0(VAR_2->dev, VAR_1, VAR_2->irq_rid,
      VAR_2->irq_res);
 if (VAR_2->io_res && VAR_2->io_off == 0)
  FUNC_0(VAR_2->dev, VAR_0, VAR_2->io_rid,
      VAR_2->io_res);
}
