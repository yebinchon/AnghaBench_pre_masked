
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sdhci_slot {TYPE_2__* curcmd; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sdhci_slot*) ;
 int FUNC_1 (int ,struct sdhci_slot*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct sdhci_slot *VAR_2,
    uint32_t *VAR_3)
{


 if (VAR_2->curcmd->data->flags & VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
