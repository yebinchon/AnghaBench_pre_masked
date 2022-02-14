
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int lba_low; int lba_mid; int lba_high; int device; scalar_t__ sector_count; scalar_t__ features; scalar_t__ command; int flags; } ;
struct ccb_ataio {TYPE_1__ cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct ccb_ataio *VAR_11, uint8_t VAR_12, uint8_t VAR_13,
    uint32_t VAR_14, uint8_t VAR_15)
{
 FUNC_0(&VAR_11->cmd, sizeof(VAR_11->cmd));
 VAR_11->cmd.flags = 0;
 if (VAR_12 == VAR_3 ||
     VAR_12 == VAR_4 ||
     VAR_12 == VAR_8 ||
     VAR_12 == VAR_9 ||
     VAR_12 == VAR_5 ||
     VAR_12 == VAR_6 ||
     VAR_12 == VAR_1 ||
     VAR_12 == VAR_2 ||
     VAR_12 == VAR_7)
  VAR_11->cmd.flags |= VAR_10;
 VAR_11->cmd.command = VAR_12;
 VAR_11->cmd.features = VAR_13;
 VAR_11->cmd.lba_low = VAR_14;
 VAR_11->cmd.lba_mid = VAR_14 >> 8;
 VAR_11->cmd.lba_high = VAR_14 >> 16;
 VAR_11->cmd.device = VAR_0 | ((VAR_14 >> 24) & 0x0f);
 VAR_11->cmd.sector_count = VAR_15;
}
