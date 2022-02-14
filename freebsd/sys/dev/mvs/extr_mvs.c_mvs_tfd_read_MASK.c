
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_res {void* lba_high; void* lba_mid; void* lba_low; void* sector_count; void* lba_high_exp; void* lba_mid_exp; void* lba_low_exp; void* sector_count_exp; void* device; void* error; void* status; } ;
struct TYPE_2__ {struct ata_res res; } ;
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
 int VAR_7 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_8 ;
 struct mvs_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_9, union ccb *VAR_10)
{
 struct mvs_channel *VAR_11 = FUNC_2(VAR_9);
 struct ata_res *VAR_12 = &VAR_10->ataio.res;

 VAR_12->status = FUNC_0(VAR_11->r_mem, VAR_0);
 VAR_12->error = FUNC_0(VAR_11->r_mem, VAR_7);
 VAR_12->device = FUNC_0(VAR_11->r_mem, VAR_6);
 FUNC_1(VAR_11->r_mem, VAR_2, VAR_1);
 VAR_12->sector_count_exp = FUNC_0(VAR_11->r_mem, VAR_3);
 VAR_12->lba_low_exp = FUNC_0(VAR_11->r_mem, VAR_8);
 VAR_12->lba_mid_exp = FUNC_0(VAR_11->r_mem, VAR_4);
 VAR_12->lba_high_exp = FUNC_0(VAR_11->r_mem, VAR_5);
 FUNC_1(VAR_11->r_mem, VAR_2, 0);
 VAR_12->sector_count = FUNC_0(VAR_11->r_mem, VAR_3);
 VAR_12->lba_low = FUNC_0(VAR_11->r_mem, VAR_8);
 VAR_12->lba_mid = FUNC_0(VAR_11->r_mem, VAR_4);
 VAR_12->lba_high = FUNC_0(VAR_11->r_mem, VAR_5);
}
