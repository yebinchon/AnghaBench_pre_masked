
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__ lpi_free; size_t lpi_base; size_t lpi_num; int lpi_busy; } ;
struct its_dev {TYPE_1__ lpis; } ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_softc {struct gicv3_its_irqsrc* sc_irqs; } ;
struct gicv3_its_irqsrc {struct its_dev* gi_its_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 struct its_dev* FUNC_2 (int ,int ,size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, device_t *VAR_3,
    struct intr_irqsrc **VAR_4)
{
 struct gicv3_its_softc *VAR_5;
 struct gicv3_its_irqsrc *VAR_6;
 struct its_dev *VAR_7;
 u_int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_2);
 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_8);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_7->lpis.lpi_free > 0,
     ("gicv3_its_alloc_msix: No free LPIs"));
 VAR_5 = FUNC_1(VAR_1);
 VAR_9 = VAR_7->lpis.lpi_base + VAR_7->lpis.lpi_num -
     VAR_7->lpis.lpi_free;
 VAR_7->lpis.lpi_free--;
 VAR_7->lpis.lpi_busy++;
 VAR_6 = &VAR_5->sc_irqs[VAR_9];
 VAR_6->gi_its_dev = VAR_7;

 *VAR_3 = VAR_1;
 *VAR_4 = (struct intr_irqsrc *)VAR_6;

 return (0);
}
