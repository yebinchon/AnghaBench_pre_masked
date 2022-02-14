
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int16_t ;
struct TYPE_3__ {int count; int lba; } ;
struct TYPE_4__ {TYPE_1__ ata; } ;
struct ata_request {int flags; TYPE_2__ u; int parent; } ;
struct ata_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ata_request *VAR_6)
{
    struct ata_channel *VAR_7 = FUNC_1(VAR_6->parent);

    if (VAR_6->flags & VAR_4) {
 u_int16_t VAR_8;

 VAR_6->u.ata.count = FUNC_0(VAR_7, VAR_0);
 VAR_8 = FUNC_0(VAR_7, VAR_5);
 VAR_6->u.ata.lba = (u_int64_t)(VAR_8 & 0x00ff) |
        ((u_int64_t)(VAR_8 & 0xff00) << 24);
 VAR_8 = FUNC_0(VAR_7, VAR_1);
 VAR_6->u.ata.lba |= ((u_int64_t)(VAR_8 & 0x00ff) << 8) |
         ((u_int64_t)(VAR_8 & 0xff00) << 32);
 VAR_8 = FUNC_0(VAR_7, VAR_2);
 VAR_6->u.ata.lba |= ((u_int64_t)(VAR_8 & 0x00ff) << 16) |
         ((u_int64_t)(VAR_8 & 0xff00) << 40);
    }
    else {
 VAR_6->u.ata.count = FUNC_0(VAR_7, VAR_0) & 0x00ff;
 VAR_6->u.ata.lba = (FUNC_0(VAR_7, VAR_5) & 0x00ff) |
        ((FUNC_0(VAR_7, VAR_1) & 0x00ff) << 8) |
        ((FUNC_0(VAR_7, VAR_2) & 0x00ff) << 16) |
        ((FUNC_0(VAR_7, VAR_3) & 0xf) << 24);
    }
}
