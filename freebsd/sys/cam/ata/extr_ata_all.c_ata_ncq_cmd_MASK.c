
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_2__ {int flags; int features; int lba_low; int lba_mid; int lba_high; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int features_exp; scalar_t__ control; scalar_t__ sector_count_exp; scalar_t__ sector_count; int device; int command; } ;
struct ccb_ataio {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct ccb_ataio *VAR_3, uint8_t VAR_4,
    uint64_t VAR_5, uint16_t VAR_6)
{

 VAR_3->cmd.flags = VAR_1 | VAR_2;
 VAR_3->cmd.command = VAR_4;
 VAR_3->cmd.features = VAR_6;
 VAR_3->cmd.lba_low = VAR_5;
 VAR_3->cmd.lba_mid = VAR_5 >> 8;
 VAR_3->cmd.lba_high = VAR_5 >> 16;
 VAR_3->cmd.device = VAR_0;
 VAR_3->cmd.lba_low_exp = VAR_5 >> 24;
 VAR_3->cmd.lba_mid_exp = VAR_5 >> 32;
 VAR_3->cmd.lba_high_exp = VAR_5 >> 40;
 VAR_3->cmd.features_exp = VAR_6 >> 8;
 VAR_3->cmd.sector_count = 0;
 VAR_3->cmd.sector_count_exp = 0;
 VAR_3->cmd.control = 0;
}
