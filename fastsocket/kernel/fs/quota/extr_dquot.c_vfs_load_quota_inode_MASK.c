
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_2__* dq_op; int s_bdev; TYPE_1__* s_op; } ;
struct quota_info {int flags; int dqonoff_mutex; int dqptr_sem; int ** files; int dqio_mutex; TYPE_4__** ops; TYPE_3__* info; } ;
struct quota_format_type {TYPE_4__* qf_ops; } ;
struct inode {int i_flags; int i_mutex; int i_mode; struct super_block* i_sb; } ;
struct TYPE_8__ {int (* read_file_info ) (struct super_block*,int) ;int (* check_quota_file ) (struct super_block*,int) ;} ;
struct TYPE_7__ {int dqi_fmt_id; int dqi_dirty_list; struct quota_format_type* dqi_format; } ;
struct TYPE_6__ {int (* drop ) (struct inode*) ;} ;
struct TYPE_5__ {int quota_read; int quota_write; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int FUNC_5 (unsigned int,int) ;
 struct quota_format_type* FUNC_6 (int) ;
 int * FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct quota_format_type*) ;
 struct quota_info* FUNC_14 (struct super_block*) ;
 scalar_t__ FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct super_block*,int) ;
 int FUNC_20 (struct super_block*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct inode*,int) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_13, int VAR_14, int VAR_15,
 unsigned int VAR_16)
{
 struct quota_format_type *VAR_17 = FUNC_6(VAR_15);
 struct super_block *VAR_18 = VAR_13->i_sb;
 struct quota_info *VAR_19 = FUNC_14(VAR_18);
 int VAR_20;
 int VAR_21 = -1;

 if (!VAR_17)
  return -VAR_7;
 if (!FUNC_2(VAR_13->i_mode)) {
  VAR_20 = -VAR_2;
  goto out_fmt;
 }
 if (FUNC_1(VAR_13)) {
  VAR_20 = -VAR_6;
  goto out_fmt;
 }
 if (!VAR_18->s_op->quota_write || !VAR_18->s_op->quota_read) {
  VAR_20 = -VAR_4;
  goto out_fmt;
 }

 if (!(VAR_16 & VAR_1)) {
  VAR_20 = -VAR_4;
  goto out_fmt;
 }

 if (!(VAR_19->flags & VAR_0)) {


  FUNC_22(VAR_13, 1);


  FUNC_8(VAR_18->s_bdev);
 }
 FUNC_10(&VAR_19->dqonoff_mutex);
 if (FUNC_15(VAR_18, VAR_14)) {
  VAR_20 = -VAR_3;
  goto out_lock;
 }

 if (!(VAR_19->flags & VAR_0)) {



  FUNC_4(&VAR_19->dqptr_sem);
  FUNC_11(&VAR_13->i_mutex, VAR_8);
  VAR_21 = VAR_13->i_flags & (VAR_10 | VAR_9 |
          VAR_11);
  VAR_13->i_flags |= VAR_11 | VAR_10 | VAR_9;
  FUNC_12(&VAR_13->i_mutex);
  FUNC_21(&VAR_19->dqptr_sem);
  VAR_18->dq_op->drop(VAR_13);
 }

 VAR_20 = -VAR_5;
 VAR_19->files[VAR_14] = FUNC_7(VAR_13);
 if (!VAR_19->files[VAR_14])
  goto out_lock;
 VAR_20 = -VAR_4;
 if (!VAR_17->qf_ops->check_quota_file(VAR_18, VAR_14))
  goto out_file_init;

 VAR_19->ops[VAR_14] = VAR_17->qf_ops;
 VAR_19->info[VAR_14].dqi_format = VAR_17;
 VAR_19->info[VAR_14].dqi_fmt_id = VAR_15;
 FUNC_0(&VAR_19->info[VAR_14].dqi_dirty_list);
 FUNC_10(&VAR_19->dqio_mutex);
 VAR_20 = VAR_19->ops[VAR_14]->read_file_info(VAR_18, VAR_14);
 if (VAR_20 < 0) {
  FUNC_12(&VAR_19->dqio_mutex);
  goto out_file_init;
 }
 FUNC_12(&VAR_19->dqio_mutex);
 FUNC_16(&VAR_12);
 VAR_19->flags |= FUNC_5(VAR_16, VAR_14);
 FUNC_17(&VAR_12);

 FUNC_3(VAR_18, VAR_14);
 FUNC_12(&VAR_19->dqonoff_mutex);

 return 0;

out_file_init:
 VAR_19->files[VAR_14] = ((void*)0);
 FUNC_9(VAR_13);
out_lock:
 if (VAR_21 != -1) {
  FUNC_4(&VAR_19->dqptr_sem);
  FUNC_11(&VAR_13->i_mutex, VAR_8);


  VAR_13->i_flags &= ~(VAR_10 | VAR_11 | VAR_9);
  VAR_13->i_flags |= VAR_21;
  FUNC_12(&VAR_13->i_mutex);
  FUNC_21(&VAR_19->dqptr_sem);
 }
 FUNC_12(&VAR_19->dqonoff_mutex);
out_fmt:
 FUNC_13(VAR_17);

 return VAR_20;
}
