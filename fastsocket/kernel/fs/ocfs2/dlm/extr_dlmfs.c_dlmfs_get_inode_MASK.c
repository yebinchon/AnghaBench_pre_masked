
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; int i_gid; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_uid; struct super_block* i_sb; } ;
struct dlmfs_inode_private {int ip_parent; int ip_lockres; int ip_dlm; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct dlmfs_inode_private* FUNC_2 (struct inode*) ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct super_block*) ;
 int VAR_8 ;
 int FUNC_10 (int *,struct dentry*) ;

__attribute__((used)) static struct inode *FUNC_11(struct inode *VAR_9,
         struct dentry *VAR_10,
         int VAR_11)
{
 struct super_block *VAR_12 = VAR_9->i_sb;
 struct inode * VAR_13 = FUNC_9(VAR_12);
 struct dlmfs_inode_private *VAR_14;

 if (!VAR_13)
  return ((void*)0);

 VAR_13->i_mode = VAR_11;
 VAR_13->i_uid = FUNC_5();
 VAR_13->i_gid = FUNC_4();
 VAR_13->i_mapping->backing_dev_info = &VAR_4;
 VAR_13->i_atime = VAR_13->i_mtime = VAR_13->i_ctime = VAR_0;

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->ip_dlm = FUNC_2(VAR_9)->ip_dlm;

 switch (VAR_11 & VAR_2) {
 default:


  FUNC_0();
  break;
 case 128:
  VAR_13->i_op = &VAR_6;
  VAR_13->i_fop = &VAR_7;

  FUNC_6(VAR_13, VAR_1);

  FUNC_10(&VAR_14->ip_lockres, VAR_10);





  VAR_14->ip_parent = FUNC_7(VAR_9);
  FUNC_1(!VAR_14->ip_parent);
  break;
 case 129:
  VAR_13->i_op = &VAR_5;
  VAR_13->i_fop = &VAR_8;



  FUNC_8(VAR_13);
  break;
 }

 if (VAR_9->i_mode & VAR_3) {
  VAR_13->i_gid = VAR_9->i_gid;
  if (FUNC_3(VAR_11))
   VAR_13->i_mode |= VAR_3;
 }

 return VAR_13;
}
