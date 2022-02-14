
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int feature; int count; int lba; } ;
struct TYPE_4__ {TYPE_1__ ata; } ;
struct ata_request {int flags; TYPE_2__ u; int unit; int parent; } ;
struct ata_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ata_request *VAR_9)
{
    struct ata_channel *VAR_10 = FUNC_2(VAR_9->parent);

    if (VAR_9->flags & VAR_7) {
 FUNC_1(VAR_10, VAR_6, VAR_9->u.ata.feature >> 8);
 FUNC_1(VAR_10, VAR_6, VAR_9->u.ata.feature);
 FUNC_1(VAR_10, VAR_0, VAR_9->u.ata.count >> 8);
 FUNC_1(VAR_10, VAR_0, VAR_9->u.ata.count);
 FUNC_1(VAR_10, VAR_8, VAR_9->u.ata.lba >> 24);
 FUNC_1(VAR_10, VAR_8, VAR_9->u.ata.lba);
 FUNC_1(VAR_10, VAR_1, VAR_9->u.ata.lba >> 32);
 FUNC_1(VAR_10, VAR_1, VAR_9->u.ata.lba >> 8);
 FUNC_1(VAR_10, VAR_2, VAR_9->u.ata.lba >> 40);
 FUNC_1(VAR_10, VAR_2, VAR_9->u.ata.lba >> 16);
 FUNC_1(VAR_10, VAR_3, VAR_5 | FUNC_0(VAR_9->unit));
    }
    else {
 FUNC_1(VAR_10, VAR_6, VAR_9->u.ata.feature);
 FUNC_1(VAR_10, VAR_0, VAR_9->u.ata.count);
     FUNC_1(VAR_10, VAR_8, VAR_9->u.ata.lba);
     FUNC_1(VAR_10, VAR_1, VAR_9->u.ata.lba >> 8);
     FUNC_1(VAR_10, VAR_2, VAR_9->u.ata.lba >> 16);
     FUNC_1(VAR_10, VAR_3,
    VAR_4 | VAR_5 | FUNC_0(VAR_9->unit) |
    ((VAR_9->u.ata.lba >> 24) & 0x0f));
    }
}
