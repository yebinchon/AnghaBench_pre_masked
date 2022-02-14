
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ r_irq; int r_irq_rid; int handle; } ;
struct mvs_controller {int mtx; scalar_t__ r_mem; int r_rid; int sc_iomem; TYPE_1__ irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 struct mvs_controller* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct mvs_controller *VAR_3 = FUNC_3(VAR_2);


 FUNC_2(VAR_2);


 if (VAR_3->irq.r_irq) {
  FUNC_1(VAR_2, VAR_3->irq.r_irq,
      VAR_3->irq.handle);
  FUNC_0(VAR_2, VAR_0,
      VAR_3->irq.r_irq_rid, VAR_3->irq.r_irq);
 }
 FUNC_5(VAR_2);

 FUNC_6(&VAR_3->sc_iomem);
 if (VAR_3->r_mem)
  FUNC_0(VAR_2, VAR_1, VAR_3->r_rid, VAR_3->r_mem);
 FUNC_4(&VAR_3->mtx);
 return (0);
}
