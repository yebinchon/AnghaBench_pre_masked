
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ata_cmd {int sector_count_exp; int sector_count; int features_exp; int lba_high_exp; int lba_mid_exp; int lba_low_exp; int device; int lba_high; int lba_mid; int lba_low; int features; int command; } ;


 int FUNC_0 (struct sbuf*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(struct ata_cmd *VAR_0, struct sbuf *VAR_1)
{
 FUNC_0(VAR_1, "%02x %02x %02x %02x "
     "%02x %02x %02x %02x %02x %02x %02x %02x",
     VAR_0->command, VAR_0->features,
     VAR_0->lba_low, VAR_0->lba_mid, VAR_0->lba_high, VAR_0->device,
     VAR_0->lba_low_exp, VAR_0->lba_mid_exp, VAR_0->lba_high_exp,
     VAR_0->features_exp, VAR_0->sector_count, VAR_0->sector_count_exp);
}
