
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {int ci_name; } ;
struct o2hb_region {scalar_t__ hr_blocks; scalar_t__ hr_start_block; int hr_block_bytes; scalar_t__ hr_generation; int * hr_bdev; struct task_struct* hr_task; int hr_steady_iterations; TYPE_2__ hr_item; int hr_write_timeout_work; int hr_dev_name; } ;
struct inode {int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int host; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 long VAR_4 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int * FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 size_t FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 struct file* FUNC_11 (long) ;
 int FUNC_12 (struct file*) ;
 int FUNC_13 (scalar_t__*,int) ;
 struct inode* FUNC_14 (int ) ;
 int FUNC_15 (struct inode*) ;
 struct task_struct* FUNC_16 (int ,struct o2hb_region*,char*,int ) ;
 int FUNC_17 (struct task_struct*) ;
 int FUNC_18 (int ,char*,int,int) ;
 int FUNC_19 (size_t) ;
 int FUNC_20 (struct o2hb_region*) ;
 int VAR_8 ;
 size_t FUNC_21 (struct o2hb_region*) ;
 size_t FUNC_22 (struct o2hb_region*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_23 () ;
 long FUNC_24 (char*,char**,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 size_t FUNC_27 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_28(struct o2hb_region *VAR_12,
         const char *VAR_13,
         size_t VAR_14)
{
 struct task_struct *VAR_15;
 long VAR_16;
 int VAR_17;
 char *VAR_18 = (char *)VAR_13;
 struct file *VAR_19 = ((void*)0);
 struct inode *VAR_20 = ((void*)0);
 ssize_t VAR_21 = -VAR_0;

 if (VAR_12->hr_bdev)
  goto out;



 if (FUNC_23() == VAR_7)
  goto out;

 VAR_16 = FUNC_24(VAR_18, &VAR_18, 0);
 if (!VAR_18 || (*VAR_18 && (*VAR_18 != '\n')))
  goto out;

 if (VAR_16 < 0 || VAR_16 >= VAR_4)
  goto out;

 VAR_19 = FUNC_11(VAR_16);
 if (VAR_19 == ((void*)0))
  goto out;

 if (VAR_12->hr_blocks == 0 || VAR_12->hr_start_block == 0 ||
     VAR_12->hr_block_bytes == 0)
  goto out;

 VAR_20 = FUNC_14(VAR_19->f_mapping->host);
 if (VAR_20 == ((void*)0))
  goto out;

 if (!FUNC_4(VAR_20->i_mode))
  goto out;

 VAR_12->hr_bdev = FUNC_2(VAR_19->f_mapping->host);
 VAR_21 = FUNC_9(VAR_12->hr_bdev, VAR_3 | VAR_2);
 if (VAR_21) {
  VAR_12->hr_bdev = ((void*)0);
  goto out;
 }
 VAR_20 = ((void*)0);

 FUNC_8(VAR_12->hr_bdev, VAR_12->hr_dev_name);

 VAR_17 = FUNC_7(VAR_12->hr_bdev);
 if (VAR_17 != VAR_12->hr_block_bytes) {
  FUNC_18(VAR_5,
       "blocksize %u incorrect for device, expected %d",
       VAR_12->hr_block_bytes, VAR_17);
  VAR_21 = -VAR_0;
  goto out;
 }

 FUNC_20(VAR_12);


 do {
  FUNC_13(&VAR_12->hr_generation,
     sizeof(VAR_12->hr_generation));
 } while (VAR_12->hr_generation == 0);

 VAR_21 = FUNC_21(VAR_12);
 if (VAR_21) {
  FUNC_19(VAR_21);
  goto out;
 }

 VAR_21 = FUNC_22(VAR_12);
 if (VAR_21) {
  FUNC_19(VAR_21);
  goto out;
 }

 FUNC_0(&VAR_12->hr_write_timeout_work, VAR_11);






 FUNC_6(&VAR_12->hr_steady_iterations, VAR_6 + 1);

 VAR_15 = FUNC_16(VAR_10, VAR_12, "o2hb-%s",
         VAR_12->hr_item.ci_name);
 if (FUNC_1(VAR_15)) {
  VAR_21 = FUNC_3(VAR_15);
  FUNC_19(VAR_21);
  goto out;
 }

 FUNC_25(&VAR_8);
 VAR_12->hr_task = VAR_15;
 FUNC_26(&VAR_8);

 VAR_21 = FUNC_27(VAR_9,
    FUNC_5(&VAR_12->hr_steady_iterations) == 0);
 if (VAR_21) {

  FUNC_25(&VAR_8);
  VAR_15 = VAR_12->hr_task;
  VAR_12->hr_task = ((void*)0);
  FUNC_26(&VAR_8);

  if (VAR_15)
   FUNC_17(VAR_15);
  goto out;
 }


 FUNC_25(&VAR_8);
 VAR_15 = VAR_12->hr_task;
 FUNC_26(&VAR_8);

 if (VAR_15)
  VAR_21 = VAR_14;
 else
  VAR_21 = -VAR_1;

out:
 if (VAR_19)
  FUNC_12(VAR_19);
 if (VAR_20)
  FUNC_15(VAR_20);
 if (VAR_21 < 0) {
  if (VAR_12->hr_bdev) {
   FUNC_10(VAR_12->hr_bdev, VAR_2|VAR_3);
   VAR_12->hr_bdev = ((void*)0);
  }
 }
 return VAR_21;
}
