
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; scalar_t__ legacy_irq; int irq_res; int ih; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(mxge_softc_t *VAR_1)
{
 FUNC_1(VAR_1->dev, VAR_1->irq_res, VAR_1->ih);
 FUNC_0(VAR_1->dev, VAR_0,
        VAR_1->legacy_irq ? 0 : 1, VAR_1->irq_res);
 if (!VAR_1->legacy_irq)
  FUNC_2(VAR_1->dev);
}
