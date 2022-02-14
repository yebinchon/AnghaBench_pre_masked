
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_2__ {int features; int lba_low; int lba_mid; int lba_high; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int features_exp; int sector_count; int sector_count_exp; scalar_t__ control; int device; scalar_t__ command; int flags; } ;
struct ccb_ataio {TYPE_1__ cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_0(struct ccb_ataio *VAR_14, uint8_t VAR_15, uint16_t VAR_16,
    uint64_t VAR_17, uint16_t VAR_18)
{

 VAR_14->cmd.flags = VAR_12;
 if (VAR_15 == VAR_2 ||
     VAR_15 == VAR_3 ||
     VAR_15 == VAR_5 ||
     VAR_15 == VAR_6 ||
     VAR_15 == VAR_7 ||
     VAR_15 == VAR_8 ||
     VAR_15 == VAR_9 ||
     VAR_15 == VAR_11 ||
     VAR_15 == VAR_0 ||
     VAR_15 == VAR_4 ||
     VAR_15 == VAR_10)
  VAR_14->cmd.flags |= VAR_13;
 VAR_14->cmd.command = VAR_15;
 VAR_14->cmd.features = VAR_16;
 VAR_14->cmd.lba_low = VAR_17;
 VAR_14->cmd.lba_mid = VAR_17 >> 8;
 VAR_14->cmd.lba_high = VAR_17 >> 16;
 VAR_14->cmd.device = VAR_1;
 VAR_14->cmd.lba_low_exp = VAR_17 >> 24;
 VAR_14->cmd.lba_mid_exp = VAR_17 >> 32;
 VAR_14->cmd.lba_high_exp = VAR_17 >> 40;
 VAR_14->cmd.features_exp = VAR_16 >> 8;
 VAR_14->cmd.sector_count = VAR_18;
 VAR_14->cmd.sector_count_exp = VAR_18 >> 8;
 VAR_14->cmd.control = 0;
}
