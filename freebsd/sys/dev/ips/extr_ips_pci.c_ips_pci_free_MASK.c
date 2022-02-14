
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd_sema; int queue_mtx; scalar_t__ configured; scalar_t__ iores; int rid; int iotype; int dev; scalar_t__ irqres; int irqrid; scalar_t__ irqcookie; scalar_t__ adapter_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(ips_softc_t *VAR_1)
{
 if(VAR_1->adapter_dmatag)
  FUNC_0(VAR_1->adapter_dmatag);
 if(VAR_1->irqcookie)
                FUNC_2(VAR_1->dev, VAR_1->irqres, VAR_1->irqcookie);
        if(VAR_1->irqres)
               FUNC_1(VAR_1->dev, VAR_0, VAR_1->irqrid, VAR_1->irqres);
        if(VAR_1->iores)
                FUNC_1(VAR_1->dev, VAR_1->iotype, VAR_1->rid, VAR_1->iores);
 VAR_1->configured = 0;
 FUNC_3(&VAR_1->queue_mtx);
 FUNC_4(&VAR_1->cmd_sema);
 return 0;
}
