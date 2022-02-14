
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int command; int feature; int lba; int count; } ;
struct TYPE_4__ {TYPE_1__ ata; } ;
struct ata_request {int flags; int unit; int transfersize; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_0(struct ata_request *VAR_9, u_int8_t *VAR_10)
{

    if (VAR_9->flags & VAR_6) {
 VAR_10[0] = 0x27;
 VAR_10[1] = 0x80 | (VAR_9->unit & 0x0f);
 VAR_10[2] = VAR_4;
 if (VAR_9->flags & (VAR_7 | VAR_8))
     VAR_10[3] = VAR_3;
 else {
     VAR_10[5] = VAR_9->transfersize;
     VAR_10[6] = VAR_9->transfersize >> 8;
 }
 VAR_10[7] = VAR_2;
 VAR_10[15] = VAR_0;
 return 20;
    }
    else {
 VAR_10[0] = 0x27;
 VAR_10[1] = 0x80 | (VAR_9->unit & 0x0f);
 VAR_10[2] = VAR_9->u.ata.command;
 VAR_10[3] = VAR_9->u.ata.feature;
 VAR_10[4] = VAR_9->u.ata.lba;
 VAR_10[5] = VAR_9->u.ata.lba >> 8;
 VAR_10[6] = VAR_9->u.ata.lba >> 16;
 VAR_10[7] = VAR_2;
 if (!(VAR_9->flags & VAR_5))
     VAR_10[7] |= (VAR_1 | (VAR_9->u.ata.lba >> 24 & 0x0f));
 VAR_10[8] = VAR_9->u.ata.lba >> 24;
 VAR_10[9] = VAR_9->u.ata.lba >> 32;
 VAR_10[10] = VAR_9->u.ata.lba >> 40;
 VAR_10[11] = VAR_9->u.ata.feature >> 8;
 VAR_10[12] = VAR_9->u.ata.count;
 VAR_10[13] = VAR_9->u.ata.count >> 8;
 VAR_10[15] = VAR_0;
 return 20;
    }
    return 0;
}
