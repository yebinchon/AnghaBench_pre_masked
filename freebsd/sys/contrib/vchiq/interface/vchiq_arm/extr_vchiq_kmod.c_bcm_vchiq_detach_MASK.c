
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_vchiq_softc {int lock; int mem_res; int irq_res; scalar_t__ intr_hl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct bcm_vchiq_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct bcm_vchiq_softc *VAR_3 = FUNC_2(VAR_2);

 FUNC_4();

 if (VAR_3->intr_hl)
                FUNC_1(VAR_2, VAR_3->irq_res, VAR_3->intr_hl);
 FUNC_0(VAR_2, VAR_0, 0,
  VAR_3->irq_res);
 FUNC_0(VAR_2, VAR_1, 0,
  VAR_3->mem_res);

 FUNC_3(&VAR_3->lock);

 return (0);
}
