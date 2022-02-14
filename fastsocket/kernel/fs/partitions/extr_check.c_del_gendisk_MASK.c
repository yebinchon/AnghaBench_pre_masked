
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hd_struct {int partno; } ;
struct TYPE_5__ {int holder_dir; scalar_t__ stamp; } ;
struct gendisk {int * driverfs_dev; int slave_dir; TYPE_1__ part0; int flags; } ;
struct disk_part_iter {int dummy; } ;
struct TYPE_6__ {int devt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct gendisk*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct disk_part_iter*) ;
 int FUNC_5 (struct disk_part_iter*,struct gendisk*,int) ;
 struct hd_struct* FUNC_6 (struct disk_part_iter*) ;
 TYPE_2__* FUNC_7 (struct gendisk*) ;
 int FUNC_8 (struct gendisk*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (struct gendisk*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct gendisk*) ;

void FUNC_14(struct gendisk *VAR_4)
{
 struct disk_part_iter VAR_5;
 struct hd_struct *VAR_6;


 FUNC_5(&VAR_5, VAR_4,
        VAR_0 | VAR_1);
 while ((VAR_6 = FUNC_6(&VAR_5))) {
  FUNC_8(VAR_4, VAR_6->partno);
  FUNC_1(VAR_4, VAR_6->partno);
 }
 FUNC_4(&VAR_5);

 FUNC_8(VAR_4, 0);
 FUNC_11(VAR_4, 0);
 VAR_4->flags &= ~VAR_2;
 FUNC_13(VAR_4);
 FUNC_10(&VAR_4->part0, 0);
 VAR_4->part0.stamp = 0;

 FUNC_9(VAR_4->part0.holder_dir);
 FUNC_9(VAR_4->slave_dir);
 VAR_4->driverfs_dev = ((void*)0);

 FUNC_12(VAR_3, FUNC_2(FUNC_7(VAR_4)));

 FUNC_3(FUNC_7(VAR_4));
 FUNC_0(FUNC_7(VAR_4)->devt);
}
