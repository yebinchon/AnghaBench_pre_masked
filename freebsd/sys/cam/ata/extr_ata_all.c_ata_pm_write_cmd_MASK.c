
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int features; int sector_count; int lba_low; int lba_mid; int lba_high; int device; int command; scalar_t__ flags; } ;
struct ccb_ataio {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct ccb_ataio *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4)
{
 FUNC_0(&VAR_1->cmd, sizeof(VAR_1->cmd));
 VAR_1->cmd.flags = 0;
 VAR_1->cmd.command = VAR_0;
 VAR_1->cmd.features = VAR_2;
 VAR_1->cmd.sector_count = VAR_4;
 VAR_1->cmd.lba_low = VAR_4 >> 8;
 VAR_1->cmd.lba_mid = VAR_4 >> 16;
 VAR_1->cmd.lba_high = VAR_4 >> 24;
 VAR_1->cmd.device = VAR_3 & 0x0f;
}
