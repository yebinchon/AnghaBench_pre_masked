
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_fdt_gpio {int * cd_ires; int dev; int * cd_pin; int * wp_pin; int * cd_ihandler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct sdhci_fdt_gpio*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct sdhci_fdt_gpio *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->cd_ihandler != ((void*)0))
  FUNC_1(VAR_2->dev, VAR_2->cd_ires, VAR_2->cd_ihandler);
 if (VAR_2->wp_pin != ((void*)0))
  FUNC_3(VAR_2->wp_pin);
 if (VAR_2->cd_pin != ((void*)0))
  FUNC_3(VAR_2->cd_pin);
 if (VAR_2->cd_ires != ((void*)0))
  FUNC_0(VAR_2->dev, VAR_1, 0, VAR_2->cd_ires);

 FUNC_2(VAR_2, VAR_0);
}
