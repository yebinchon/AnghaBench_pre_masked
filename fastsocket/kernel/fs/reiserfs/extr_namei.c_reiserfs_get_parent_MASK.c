
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {int de_dir_id; int * de_gen_number_bit_string; } ;
struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct cpu_key {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct dentry* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,char*,int,int *,struct reiserfs_dir_entry*) ;
 struct inode* FUNC_5 (int ,struct cpu_key*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

struct dentry *FUNC_8(struct dentry *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = ((void*)0);
 struct reiserfs_dir_entry VAR_6;
 FUNC_1(VAR_2);
 struct inode *VAR_7 = VAR_3->d_inode;

 if (VAR_7->i_nlink == 0) {
  return FUNC_0(-VAR_0);
 }
 VAR_6.de_gen_number_bit_string = ((void*)0);

 FUNC_6(VAR_7->i_sb);
 VAR_4 = FUNC_4(VAR_7, "..", 2, &VAR_2, &VAR_6);
 FUNC_3(&VAR_2);
 if (VAR_4 != VAR_1) {
  FUNC_7(VAR_7->i_sb);
  return FUNC_0(-VAR_0);
 }
 VAR_5 = FUNC_5(VAR_7->i_sb, (struct cpu_key *)&(VAR_6.de_dir_id));
 FUNC_7(VAR_7->i_sb);

 return FUNC_2(VAR_5);
}
