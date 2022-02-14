
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int lpi_free; size_t lpi_base; size_t lpi_num; int lpi_busy; } ;
struct its_dev {TYPE_1__ lpis; } ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_softc {struct gicv3_its_irqsrc* sc_irqs; } ;
struct gicv3_its_irqsrc {struct its_dev* gi_its_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 struct its_dev* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    device_t *VAR_5, struct intr_irqsrc **VAR_6)
{
 struct gicv3_its_softc *VAR_7;
 struct gicv3_its_irqsrc *VAR_8;
 struct its_dev *VAR_9;
 u_int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_9->lpis.lpi_free >= VAR_3,
     ("gicv3_its_alloc_msi: No free LPIs"));
 VAR_7 = FUNC_1(VAR_1);
 VAR_10 = VAR_9->lpis.lpi_base + VAR_9->lpis.lpi_num -
     VAR_9->lpis.lpi_free;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++, VAR_10++) {
  VAR_9->lpis.lpi_free--;
  VAR_8 = &VAR_7->sc_irqs[VAR_10];
  VAR_8->gi_its_dev = VAR_9;
  VAR_6[VAR_11] = (struct intr_irqsrc *)VAR_8;
 }
 VAR_9->lpis.lpi_busy += VAR_3;
 *VAR_5 = VAR_1;

 return (0);
}
