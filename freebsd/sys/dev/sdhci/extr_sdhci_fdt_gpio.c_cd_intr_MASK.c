
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_fdt_gpio {int slot; } ;


 int FUNC_0 (struct sdhci_fdt_gpio*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct sdhci_fdt_gpio *VAR_1 = VAR_0;

 FUNC_1(VAR_1->slot, FUNC_0(VAR_1));
}
