
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct mq_attr {int dummy; } ;
struct ipc_namespace {scalar_t__ mq_queues_count; scalar_t__ mq_queues_max; } ;
struct inode {int i_atime; int i_mtime; int i_ctime; int i_size; int i_sb; } ;
struct dentry {struct mq_attr* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ipc_namespace* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_7 ;
 struct inode* FUNC_4 (int ,struct ipc_namespace*,int,struct mq_attr*) ;
 int FUNC_5 (struct ipc_namespace*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_8, struct dentry *VAR_9,
    int VAR_10, struct nameidata *VAR_11)
{
 struct inode *VAR_12;
 struct mq_attr *VAR_13 = VAR_9->d_fsdata;
 int VAR_14;
 struct ipc_namespace *VAR_15;

 FUNC_6(&VAR_7);
 VAR_15 = FUNC_0(VAR_8);
 if (!VAR_15) {
  VAR_14 = -VAR_3;
  goto out_unlock;
 }
 if (VAR_15->mq_queues_count >= VAR_6 ||
     (VAR_15->mq_queues_count >= VAR_15->mq_queues_max &&
      !FUNC_1(VAR_0))) {
  VAR_14 = -VAR_5;
  goto out_unlock;
 }
 VAR_15->mq_queues_count++;
 FUNC_7(&VAR_7);

 VAR_12 = FUNC_4(VAR_8->i_sb, VAR_15, VAR_10, VAR_13);
 if (!VAR_12) {
  VAR_14 = -VAR_4;
  FUNC_6(&VAR_7);
  VAR_15->mq_queues_count--;
  goto out_unlock;
 }

 FUNC_5(VAR_15);
 VAR_8->i_size += VAR_2;
 VAR_8->i_ctime = VAR_8->i_mtime = VAR_8->i_atime = VAR_1;

 FUNC_2(VAR_9, VAR_12);
 FUNC_3(VAR_9);
 return 0;
out_unlock:
 FUNC_7(&VAR_7);
 if (VAR_15)
  FUNC_5(VAR_15);
 return VAR_14;
}
