
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct proc_inode {struct ctl_table* sysctl_entry; struct ctl_table_header* sysctl; } ;
struct inode {int * i_fop; int * i_op; scalar_t__ i_nlink; int i_mode; int i_flags; int i_ctime; int i_atime; int i_mtime; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int child; int mode; } ;


 int VAR_0 ;
 struct proc_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ctl_table_header*) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_8,
  struct ctl_table_header *VAR_9, struct ctl_table *VAR_10)
{
 struct inode *VAR_11;
 struct proc_inode *VAR_12;

 VAR_11 = FUNC_1(VAR_8);
 if (!VAR_11)
  goto out;

 FUNC_2(VAR_9);
 VAR_12 = FUNC_0(VAR_11);
 VAR_12->sysctl = VAR_9;
 VAR_12->sysctl_entry = VAR_10;

 VAR_11->i_mtime = VAR_11->i_atime = VAR_11->i_ctime = VAR_0;
 VAR_11->i_flags |= VAR_3;
 VAR_11->i_mode = VAR_10->mode;
 if (!VAR_10->child) {
  VAR_11->i_mode |= VAR_2;
  VAR_11->i_op = &VAR_7;
  VAR_11->i_fop = &VAR_6;
 } else {
  VAR_11->i_mode |= VAR_1;
  VAR_11->i_nlink = 0;
  VAR_11->i_op = &VAR_5;
  VAR_11->i_fop = &VAR_4;
 }
out:
 return VAR_11;
}
