
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_7 ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int) ;
 scalar_t__ FUNC_5 (struct dentry*,int ,int ,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct super_block *VAR_9, void *VAR_10, int VAR_11)
{
 struct inode *VAR_12;
 struct dentry *VAR_13;

 VAR_9->s_blocksize = VAR_2;
 VAR_9->s_blocksize_bits = VAR_1;
 VAR_9->s_magic = VAR_3;
 VAR_9->s_op = &VAR_8;
 VAR_9->s_time_gran = 1;

 VAR_12 = FUNC_4(VAR_9, VAR_6 | 0755);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = FUNC_0(VAR_12);
 if (!VAR_13) {
  FUNC_3(VAR_12);
  return -VAR_0;
 }
 if (FUNC_5(VAR_13, VAR_7, VAR_5, VAR_4, ((void*)0)))
  goto out;
 VAR_9->s_root = VAR_13;
 return 0;
out:
 FUNC_1(VAR_13);
 FUNC_2(VAR_13);
 return -VAR_0;
}
