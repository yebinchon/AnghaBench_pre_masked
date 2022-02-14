
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_op; int * i_fop; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_gid; int i_uid; } ;
struct dlmfs_inode_private {int dummy; } ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int VAR_0 ;
 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_4 ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_5)
{
 struct inode *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = VAR_1 | 0755;
 struct dlmfs_inode_private *VAR_8;

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_6);

  VAR_6->i_mode = VAR_7;
  VAR_6->i_uid = FUNC_2();
  VAR_6->i_gid = FUNC_1();
  VAR_6->i_mapping->backing_dev_info = &VAR_2;
  VAR_6->i_atime = VAR_6->i_mtime = VAR_6->i_ctime = VAR_0;
  FUNC_3(VAR_6);

  VAR_6->i_fop = &VAR_4;
  VAR_6->i_op = &VAR_3;
 }

 return VAR_6;
}
