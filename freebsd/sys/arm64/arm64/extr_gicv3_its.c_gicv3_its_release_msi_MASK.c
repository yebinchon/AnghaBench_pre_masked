
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lpi_busy; } ;
struct its_dev {TYPE_1__ lpis; } ;
struct intr_irqsrc {int dummy; } ;
struct gicv3_its_irqsrc {int * gi_its_dev; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 struct its_dev* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct its_dev*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2,
    struct intr_irqsrc **VAR_3)
{
 struct gicv3_its_irqsrc *VAR_4;
 struct its_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_5 != ((void*)0),
     ("gicv3_its_release_msi: Releasing a MSI interrupt with "
      "no ITS device"));
 FUNC_0(VAR_5->lpis.lpi_busy >= VAR_2,
     ("gicv3_its_release_msi: Releasing more interrupts than "
      "were allocated: releasing %d, allocated %d", VAR_2,
      VAR_5->lpis.lpi_busy));
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4 = (struct gicv3_its_irqsrc *)VAR_3[VAR_6];
  VAR_4->gi_its_dev = ((void*)0);
 }
 VAR_5->lpis.lpi_busy -= VAR_2;

 if (VAR_5->lpis.lpi_busy == 0)
  FUNC_2(VAR_0, VAR_5);

 return (0);
}
