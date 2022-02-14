
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_time_gran; struct ramfs_fs_info* s_fs_info; struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct TYPE_2__ {int mode; } ;
struct ramfs_fs_info {TYPE_1__ mount_opts; } ;
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
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ramfs_fs_info*) ;
 struct ramfs_fs_info* FUNC_3 (int,int ) ;
 struct inode* FUNC_4 (struct super_block*,int,int ) ;
 int VAR_7 ;
 int FUNC_5 (void*,TYPE_1__*) ;
 int FUNC_6 (struct super_block*,void*) ;

__attribute__((used)) static int FUNC_7(struct super_block * VAR_8, void * VAR_9, int VAR_10)
{
 struct ramfs_fs_info *VAR_11;
 struct inode *VAR_12 = ((void*)0);
 struct dentry *VAR_13;
 int VAR_14;

 FUNC_6(VAR_8, VAR_9);

 VAR_11 = FUNC_3(sizeof(struct ramfs_fs_info), VAR_1);
 VAR_8->s_fs_info = VAR_11;
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 VAR_14 = FUNC_5(VAR_9, &VAR_11->mount_opts);
 if (VAR_14)
  goto fail;

 VAR_8->s_maxbytes = VAR_2;
 VAR_8->s_blocksize = VAR_4;
 VAR_8->s_blocksize_bits = VAR_3;
 VAR_8->s_magic = VAR_5;
 VAR_8->s_op = &VAR_7;
 VAR_8->s_time_gran = 1;

 VAR_12 = FUNC_4(VAR_8, VAR_6 | VAR_11->mount_opts.mode, 0);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 VAR_13 = FUNC_0(VAR_12);
 VAR_8->s_root = VAR_13;
 if (!VAR_13) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 return 0;
fail:
 FUNC_2(VAR_11);
 VAR_8->s_fs_info = ((void*)0);
 FUNC_1(VAR_12);
 return VAR_14;
}
