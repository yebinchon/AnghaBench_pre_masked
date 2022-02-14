
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_fdt_softc {int num_slots; int * mem_res; int * slots; int irq_res; int intrhand; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct sdhci_fdt_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct sdhci_fdt_softc *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_3->irq_res, VAR_3->intrhand);
 FUNC_1(VAR_2, VAR_0, FUNC_4(VAR_3->irq_res),
     VAR_3->irq_res);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_slots; VAR_4++) {
  FUNC_5(&VAR_3->slots[VAR_4]);
  FUNC_1(VAR_2, VAR_1,
      FUNC_4(VAR_3->mem_res[VAR_4]), VAR_3->mem_res[VAR_4]);
 }

 return (0);
}
