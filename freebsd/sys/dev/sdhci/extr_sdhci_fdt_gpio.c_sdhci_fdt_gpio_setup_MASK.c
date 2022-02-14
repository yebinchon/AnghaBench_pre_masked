
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dummy; } ;
struct sdhci_fdt_gpio {struct sdhci_slot* slot; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_fdt_gpio*,int ) ;
 struct sdhci_fdt_gpio* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_fdt_gpio*,int ) ;

struct sdhci_fdt_gpio *
FUNC_4(device_t VAR_3, struct sdhci_slot *VAR_4)
{
 phandle_t VAR_5;
 struct sdhci_fdt_gpio *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0, VAR_2 | VAR_1);
 VAR_6->dev = VAR_3;
 VAR_6->slot = VAR_4;

 VAR_5 = FUNC_2(VAR_3);

 FUNC_3(VAR_6, VAR_5);
 FUNC_0(VAR_6, VAR_5);

 return (VAR_6);
}
