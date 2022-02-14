
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_slot {scalar_t__ offset; TYPE_3__* curcmd; int bus; } ;
struct bcm_sdhci_softc {TYPE_1__* conf; } ;
typedef int device_t ;
struct TYPE_6__ {TYPE_2__* data; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_4__ {int use_dma; } ;


 size_t VAR_0 ;
 struct bcm_sdhci_softc* FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, struct sdhci_slot *VAR_2)
{
 struct bcm_sdhci_softc *VAR_3 = FUNC_0(VAR_2->bus);
 size_t VAR_4;

 if (!VAR_3->conf->use_dma)
  return (0);





 VAR_4 = FUNC_1(VAR_0,
     VAR_2->curcmd->data->len - VAR_2->offset);
 if (VAR_4 < VAR_0)
  return (0);
 if (VAR_4 & 0x03)
  return (0);

 return (1);
}
