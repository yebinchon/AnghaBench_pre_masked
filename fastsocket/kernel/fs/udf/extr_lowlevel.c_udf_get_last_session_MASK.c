
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct block_device* s_bdev; } ;
struct TYPE_2__ {unsigned int lba; } ;
struct cdrom_multisession {TYPE_1__ addr; scalar_t__ xa_flag; int addr_format; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,int ,unsigned long) ;
 int FUNC_1 (char*,...) ;

unsigned int FUNC_2(struct super_block *VAR_2)
{
 struct cdrom_multisession VAR_3;
 unsigned int VAR_4;
 struct block_device *VAR_5 = VAR_2->s_bdev;
 int VAR_6;

 VAR_4 = 0;
 VAR_3.addr_format = VAR_1;
 VAR_6 = FUNC_0(VAR_5, VAR_0, (unsigned long)&VAR_3);

 if (VAR_6 == 0) {
  FUNC_1("XA disk: %s, vol_desc_start=%d\n",
     (VAR_3.xa_flag ? "yes" : "no"), VAR_3.addr.lba);
  if (VAR_3.xa_flag)
   VAR_4 = VAR_3.addr.lba;
 } else {
  FUNC_1("CDROMMULTISESSION not supported: rc=%d\n", VAR_6);
 }
 return VAR_4;
}
