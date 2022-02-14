
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct sdhci_slot {int quirks; int flags; TYPE_4__* req; TYPE_3__* ccb; } ;
struct mmc_data {int len; int block_count; int flags; } ;
struct TYPE_8__ {int * stop; } ;
struct TYPE_5__ {scalar_t__ opcode; } ;
struct TYPE_6__ {TYPE_1__ stop; } ;
struct TYPE_7__ {TYPE_2__ mmcio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sdhci_slot*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct sdhci_slot *VAR_10, const struct mmc_data *VAR_11)
{
 uint16_t VAR_12;

 if (VAR_11 == ((void*)0))
  return;

 VAR_12 = VAR_5;
 if (VAR_11->len > 512 || VAR_11->block_count > 1) {
  VAR_12 |= VAR_7;
  if (VAR_11->block_count == 0 && FUNC_1(



      VAR_10->req->stop != ((void*)0) &&

      !(VAR_10->quirks & VAR_2)))
   VAR_12 |= VAR_4;
 }
 if (VAR_11->flags & VAR_0)
  VAR_12 |= VAR_8;
 if (VAR_10->flags & VAR_9)
  VAR_12 |= VAR_6;

 FUNC_0(VAR_10, VAR_3, VAR_12);
}
