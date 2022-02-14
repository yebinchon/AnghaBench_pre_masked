
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {TYPE_1__* s_bdev; } ;
struct omfs_sb_info {int s_num_blocks; int s_blocksize; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {int f_ffree; int f_bavail; int f_bfree; TYPE_2__ f_fsid; int f_namelen; int f_files; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->d_sb;
 struct omfs_sb_info *VAR_5 = FUNC_0(VAR_4);
 u64 VAR_6 = FUNC_1(VAR_4->s_bdev->bd_dev);

 VAR_3->f_type = VAR_0;
 VAR_3->f_bsize = VAR_5->s_blocksize;
 VAR_3->f_blocks = VAR_5->s_num_blocks;
 VAR_3->f_files = VAR_5->s_num_blocks;
 VAR_3->f_namelen = VAR_1;
 VAR_3->f_fsid.val[0] = (u32)VAR_6;
 VAR_3->f_fsid.val[1] = (u32)(VAR_6 >> 32);

 VAR_3->f_bfree = VAR_3->f_bavail = VAR_3->f_ffree =
  FUNC_2(VAR_4);

 return 0;
}
