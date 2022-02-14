
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_slot {scalar_t__ offset; TYPE_1__* curcmd; } ;
struct TYPE_4__ {int flags; scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_slot*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sdhci_slot*) ;
 int FUNC_2 (struct sdhci_slot*) ;

__attribute__((used)) static void
FUNC_3(struct sdhci_slot *VAR_4)
{


 if (VAR_4->curcmd->data->flags & VAR_0) {
  while (FUNC_0(VAR_4, VAR_2) &
      VAR_1) {
   FUNC_1(VAR_4);
   if (VAR_4->offset >= VAR_4->curcmd->data->len)
    break;
  }
 } else {
  while (FUNC_0(VAR_4, VAR_2) &
      VAR_3) {
   FUNC_2(VAR_4);
   if (VAR_4->offset >= VAR_4->curcmd->data->len)
    break;
  }
 }
}
