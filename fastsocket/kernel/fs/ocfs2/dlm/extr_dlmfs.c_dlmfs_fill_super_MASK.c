
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct super_block * VAR_6,
       void * VAR_7,
       int VAR_8)
{
 struct inode * VAR_9;
 struct dentry * VAR_10;

 VAR_6->s_maxbytes = VAR_2;
 VAR_6->s_blocksize = VAR_4;
 VAR_6->s_blocksize_bits = VAR_3;
 VAR_6->s_magic = VAR_0;
 VAR_6->s_op = &VAR_5;
 VAR_9 = FUNC_1(VAR_6);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_9);
 if (!VAR_10) {
  FUNC_2(VAR_9);
  return -VAR_1;
 }
 VAR_6->s_root = VAR_10;
 return 0;
}
