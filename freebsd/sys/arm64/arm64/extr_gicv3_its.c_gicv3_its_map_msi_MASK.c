
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_softc {int sc_its_res; } ;
struct gicv3_its_irqsrc {TYPE_2__* gi_its_dev; scalar_t__ gi_irq; } ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ lpi_base; } ;
struct TYPE_4__ {TYPE_1__ lpis; } ;


 scalar_t__ VAR_0 ;
 struct gicv3_its_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct gicv3_its_irqsrc*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, struct intr_irqsrc *VAR_3,
    uint64_t *VAR_4, uint32_t *VAR_5)
{
 struct gicv3_its_softc *VAR_6;
 struct gicv3_its_irqsrc *VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 VAR_7 = (struct gicv3_its_irqsrc *)VAR_3;


 FUNC_1(VAR_1, VAR_7);

 *VAR_4 = FUNC_3(FUNC_2(VAR_6->sc_its_res)) + VAR_0;
 *VAR_5 = VAR_7->gi_irq - VAR_7->gi_its_dev->lpis.lpi_base;

 return (0);
}
