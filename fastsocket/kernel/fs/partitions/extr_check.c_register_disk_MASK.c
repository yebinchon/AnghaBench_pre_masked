
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_struct {int dummy; } ;
struct TYPE_3__ {void* holder_dir; } ;
struct gendisk {int flags; void* slave_dir; TYPE_1__ part0; int disk_name; int driverfs_dev; } ;
struct disk_part_iter {int dummy; } ;
struct device {int kobj; int parent; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct block_device* FUNC_0 (struct gendisk*,int ) ;
 int FUNC_1 (struct block_device*,int ) ;
 int FUNC_2 (struct block_device*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,int) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct disk_part_iter*) ;
 int FUNC_8 (struct disk_part_iter*,struct gendisk*,int ) ;
 struct hd_struct* FUNC_9 (struct disk_part_iter*) ;
 int FUNC_10 (struct gendisk*) ;
 struct device* FUNC_11 (struct gendisk*) ;
 int FUNC_12 (struct gendisk*) ;
 void* FUNC_13 (char*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 TYPE_2__* FUNC_16 (struct hd_struct*) ;
 int FUNC_17 (int ,int *,int ) ;

void FUNC_18(struct gendisk *VAR_4)
{
 struct device *VAR_5 = FUNC_11(VAR_4);
 struct block_device *VAR_6;
 struct disk_part_iter VAR_7;
 struct hd_struct *VAR_8;
 int VAR_9;

 VAR_5->parent = VAR_4->driverfs_dev;

 FUNC_3(VAR_5, "%s", VAR_4->disk_name);


 FUNC_4(VAR_5, 1);

 if (FUNC_5(VAR_5))
  return;

 VAR_9 = FUNC_17(VAR_3, &VAR_5->kobj,
    FUNC_14(&VAR_5->kobj));
 if (VAR_9) {
  FUNC_6(VAR_5);
  return;
 }

 VAR_4->part0.holder_dir = FUNC_13("holders", &VAR_5->kobj);
 VAR_4->slave_dir = FUNC_13("slaves", &VAR_5->kobj);


 if (!FUNC_10(VAR_4))
  goto exit;


 if (!FUNC_12(VAR_4))
  goto exit;

 VAR_6 = FUNC_0(VAR_4, 0);
 if (!VAR_6)
  goto exit;

 VAR_4->flags |= VAR_1;
 VAR_9 = FUNC_1(VAR_6, VAR_0);
 if (VAR_9 < 0)
  goto exit;
 FUNC_2(VAR_6, VAR_0);

exit:

 FUNC_4(VAR_5, 0);
 FUNC_15(&VAR_5->kobj, VAR_2);


 FUNC_8(&VAR_7, VAR_4, 0);
 while ((VAR_8 = FUNC_9(&VAR_7)))
  FUNC_15(&FUNC_16(VAR_8)->kobj, VAR_2);
 FUNC_7(&VAR_7);
}
