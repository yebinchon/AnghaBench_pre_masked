
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; } ;
struct ipc_namespace {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,struct ipc_namespace*,int,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_8, void *VAR_9, int VAR_10)
{
 struct inode *VAR_11;
 struct ipc_namespace *VAR_12 = VAR_9;
 int VAR_13;

 VAR_8->s_blocksize = VAR_3;
 VAR_8->s_blocksize_bits = VAR_2;
 VAR_8->s_magic = VAR_1;
 VAR_8->s_op = &VAR_7;

 VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_4 | VAR_6 | VAR_5,
    ((void*)0));
 if (!VAR_11) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_8->s_root = FUNC_0(VAR_11);
 if (!VAR_8->s_root) {
  FUNC_1(VAR_11);
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_13 = 0;

out:
 return VAR_13;
}
