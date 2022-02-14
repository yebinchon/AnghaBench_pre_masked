
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct the_nilfs {int ns_mount_mutex; int ns_super_sem; TYPE_2__* ns_current; } ;
struct super_block {int s_flags; int s_umount; int s_id; int s_root; } ;
struct nilfs_super_data {int flags; struct super_block* bdev; scalar_t__ sbi; scalar_t__ cno; } ;
struct file_system_type {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_super; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,char*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *) ;
 struct the_nilfs* FUNC_7 (struct super_block*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct super_block*,void*,int,struct the_nilfs*) ;
 scalar_t__ FUNC_11 (struct the_nilfs*,int,scalar_t__) ;
 scalar_t__ FUNC_12 (char*,struct nilfs_super_data*) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 struct super_block* FUNC_14 (char const*,int,struct file_system_type*) ;
 int FUNC_15 (struct the_nilfs*) ;
 int FUNC_16 (struct super_block*,int ) ;
 struct super_block* FUNC_17 (struct file_system_type*,int ,int ,struct nilfs_super_data*) ;
 int FUNC_18 (struct vfsmount*,struct super_block*) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(struct file_system_type *VAR_9, int VAR_10,
      const char *VAR_11, void *VAR_12, struct vfsmount *VAR_13)
{
 struct nilfs_super_data VAR_14;
 struct super_block *VAR_15;
 struct the_nilfs *VAR_16;
 int VAR_17, VAR_18 = 1;

 VAR_14.bdev = FUNC_14(VAR_11, VAR_10, VAR_9);
 if (FUNC_0(VAR_14.bdev))
  return FUNC_1(VAR_14.bdev);







 VAR_14.cno = 0;
 VAR_14.flags = VAR_10;
 if (FUNC_12((char *)VAR_12, &VAR_14)) {
  VAR_17 = -VAR_2;
  goto failed;
 }

 VAR_16 = FUNC_7(VAR_14.bdev);
 if (!VAR_16) {
  VAR_17 = -VAR_3;
  goto failed;
 }

 FUNC_8(&VAR_16->ns_mount_mutex);

 if (!VAR_14.cno) {






  FUNC_6(&VAR_16->ns_super_sem);
  if (VAR_16->ns_current &&
      ((VAR_16->ns_current->s_super->s_flags ^ VAR_10)
       & VAR_5)) {
   FUNC_20(&VAR_16->ns_super_sem);
   VAR_17 = -VAR_1;
   goto failed_unlock;
  }
  FUNC_20(&VAR_16->ns_super_sem);
 }




 VAR_14.sbi = FUNC_11(VAR_16, !(VAR_10 & VAR_5), VAR_14.cno);






 VAR_15 = FUNC_17(VAR_9, VAR_8, VAR_7, &VAR_14);
 if (VAR_14.sbi)
  FUNC_13(VAR_14.sbi);

 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_1(VAR_15);
  goto failed_unlock;
 }

 if (!VAR_15->s_root) {
  char VAR_19[VAR_0];


  VAR_15->s_flags = VAR_10;
  FUNC_19(VAR_15->s_id, FUNC_2(VAR_14.bdev, VAR_19), sizeof(VAR_15->s_id));
  FUNC_16(VAR_15, FUNC_3(VAR_14.bdev));

  VAR_17 = FUNC_10(VAR_15, VAR_12, VAR_10 & VAR_6, VAR_16);
  if (VAR_17)
   goto cancel_new;

  VAR_15->s_flags |= VAR_4;
  VAR_18 = 0;
 }

 FUNC_9(&VAR_16->ns_mount_mutex);
 FUNC_15(VAR_16);
 if (VAR_18)
  FUNC_4(VAR_14.bdev, VAR_10);
 FUNC_18(VAR_13, VAR_15);
 return 0;

 failed_unlock:
 FUNC_9(&VAR_16->ns_mount_mutex);
 FUNC_15(VAR_16);
 failed:
 FUNC_4(VAR_14.bdev, VAR_10);

 return VAR_17;

 cancel_new:

 FUNC_9(&VAR_16->ns_mount_mutex);
 FUNC_15(VAR_16);
 FUNC_21(&VAR_15->s_umount);
 FUNC_5(VAR_15);





 return VAR_17;
}
