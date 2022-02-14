
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct inode {int * i_op; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 struct inode* FUNC_3 (struct super_block*,int *,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 struct super_block* VAR_8 ;
 int FUNC_5 (struct super_block*,void*) ;

int FUNC_6(struct super_block *VAR_9, void *VAR_10, int VAR_11)
{
 struct inode *VAR_12 = ((void*)0);
 struct dentry *VAR_13;
 int VAR_14;

 FUNC_5(VAR_9, VAR_10);

 VAR_8 = VAR_9;

 VAR_9->s_maxbytes = VAR_1;
 VAR_9->s_blocksize = VAR_3;
 VAR_9->s_blocksize_bits = VAR_2;
 VAR_9->s_magic = VAR_4;
 VAR_9->s_op = &VAR_7;
 VAR_9->s_time_gran = 1;

 FUNC_2(VAR_10);

 VAR_12 = FUNC_3(VAR_9, ((void*)0), VAR_5 | 0755, 0);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 VAR_12->i_op = &VAR_6;

 VAR_13 = FUNC_0(VAR_12);
 VAR_9->s_root = VAR_13;
 if (!VAR_13) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 FUNC_4(0);

 return 0;
fail:
 FUNC_1(VAR_12);
 return VAR_14;
}
