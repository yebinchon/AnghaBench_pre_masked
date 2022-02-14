
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_fdt_gpio {int wp_inverted; int * wp_pin; TYPE_1__* slot; scalar_t__ wp_disabled; } ;
struct TYPE_2__ {int dev; int bus; } ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(struct sdhci_fdt_gpio *VAR_0)
{
 bool VAR_1;

 if (VAR_0->wp_disabled)
  return (0);

 if (VAR_0->wp_pin == ((void*)0))
  return (FUNC_1(VAR_0->slot->bus, VAR_0->slot->dev));

 FUNC_0(VAR_0->wp_pin, &VAR_1);

 return (VAR_1 ^ VAR_0->wp_inverted);
}
