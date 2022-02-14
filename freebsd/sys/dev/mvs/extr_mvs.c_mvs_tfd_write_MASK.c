
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_cmd {int command; int lba_high; int lba_high_exp; int lba_mid; int lba_mid_exp; int lba_low; int lba_low_exp; int sector_count; int sector_count_exp; int features; int features_exp; int control; int device; } ;
struct TYPE_2__ {struct ata_cmd cmd; } ;
union ccb {TYPE_1__ ataio; } ;
struct mvs_channel {int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_7 ;
 struct mvs_channel* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_8, union ccb *VAR_9)
{
 struct mvs_channel *VAR_10 = FUNC_1(VAR_8);
 struct ata_cmd *VAR_11 = &VAR_9->ataio.cmd;

 FUNC_0(VAR_10->r_mem, VAR_5, VAR_11->device);
 FUNC_0(VAR_10->r_mem, VAR_1, VAR_11->control);
 FUNC_0(VAR_10->r_mem, VAR_6, VAR_11->features_exp);
 FUNC_0(VAR_10->r_mem, VAR_6, VAR_11->features);
 FUNC_0(VAR_10->r_mem, VAR_2, VAR_11->sector_count_exp);
 FUNC_0(VAR_10->r_mem, VAR_2, VAR_11->sector_count);
 FUNC_0(VAR_10->r_mem, VAR_7, VAR_11->lba_low_exp);
 FUNC_0(VAR_10->r_mem, VAR_7, VAR_11->lba_low);
 FUNC_0(VAR_10->r_mem, VAR_3, VAR_11->lba_mid_exp);
 FUNC_0(VAR_10->r_mem, VAR_3, VAR_11->lba_mid);
 FUNC_0(VAR_10->r_mem, VAR_4, VAR_11->lba_high_exp);
 FUNC_0(VAR_10->r_mem, VAR_4, VAR_11->lba_high);
 FUNC_0(VAR_10->r_mem, VAR_0, VAR_11->command);
}
