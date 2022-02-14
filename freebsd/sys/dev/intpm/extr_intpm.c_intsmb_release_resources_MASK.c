
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int lock; scalar_t__ io_res; int io_rid; scalar_t__ irq_res; scalar_t__ irq_hand; scalar_t__ smbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct intsmb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct intsmb_softc *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->smbus)
  FUNC_2(VAR_2, VAR_3->smbus);
 if (VAR_3->irq_hand)
  FUNC_1(VAR_2, VAR_3->irq_res, VAR_3->irq_hand);
 if (VAR_3->irq_res)
  FUNC_0(VAR_2, VAR_1, 0, VAR_3->irq_res);
 if (VAR_3->io_res)
  FUNC_0(VAR_2, VAR_0, VAR_3->io_rid,
      VAR_3->io_res);
 FUNC_4(&VAR_3->lock);
}
