
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct the_nilfs {unsigned long long ns_blocks_per_segment; unsigned long long ns_nsegments; unsigned long long ns_first_data_block; unsigned long ns_nrsvsegs; } ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct nilfs_sb_info {int s_inodes_count; struct the_nilfs* s_nilfs; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {unsigned long long f_blocks; unsigned long f_bfree; unsigned long f_bavail; TYPE_2__ f_fsid; int f_namelen; scalar_t__ f_ffree; int f_files; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
typedef unsigned long sector_t ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct the_nilfs*,unsigned long*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->d_sb;
 struct nilfs_sb_info *VAR_5 = FUNC_0(VAR_4);
 struct the_nilfs *VAR_6 = VAR_5->s_nilfs;
 u64 VAR_7 = FUNC_2(VAR_4->s_bdev->bd_dev);
 unsigned long long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 sector_t VAR_11;
 int VAR_12;







 VAR_8 = VAR_6->ns_blocks_per_segment * VAR_6->ns_nsegments
  - VAR_6->ns_first_data_block;
 VAR_10 = VAR_6->ns_nrsvsegs * VAR_6->ns_blocks_per_segment;







 VAR_9 = 0;

 VAR_12 = FUNC_3(VAR_6, &VAR_11);
 if (FUNC_4(VAR_12))
  return VAR_12;

 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_4->s_blocksize;
 VAR_3->f_blocks = VAR_8 - VAR_9;
 VAR_3->f_bfree = VAR_11;
 VAR_3->f_bavail = (VAR_3->f_bfree >= VAR_10) ?
  (VAR_3->f_bfree - VAR_10) : 0;
 VAR_3->f_files = FUNC_1(&VAR_5->s_inodes_count);
 VAR_3->f_ffree = 0;
 VAR_3->f_namelen = VAR_0;
 VAR_3->f_fsid.val[0] = (u32)VAR_7;
 VAR_3->f_fsid.val[1] = (u32)(VAR_7 >> 32);

 return 0;
}
