
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lpi_busy; } ;
struct its_dev {TYPE_1__ lpis; } ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_irqsrc {int * gi_its_dev; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 struct its_dev* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct its_dev*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct gicv3_its_irqsrc *VAR_3;
 struct its_dev *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_4 != ((void*)0),
     ("gicv3_its_release_msix: Releasing a MSI-X interrupt with "
      "no ITS device"));
 FUNC_0(VAR_4->lpis.lpi_busy > 0,
     ("gicv3_its_release_msix: Releasing more interrupts than "
      "were allocated: allocated %d", VAR_4->lpis.lpi_busy));
 VAR_3 = (struct gicv3_its_irqsrc *)VAR_2;
 VAR_3->gi_its_dev = ((void*)0);
 VAR_4->lpis.lpi_busy--;

 if (VAR_4->lpis.lpi_busy == 0)
  FUNC_2(VAR_0, VAR_4);

 return (0);
}
