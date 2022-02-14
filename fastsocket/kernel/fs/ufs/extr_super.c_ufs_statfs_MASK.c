
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_8__ {int fs_dsize; } ;
struct TYPE_9__ {TYPE_2__ fs_u2; } ;
struct ufs_super_block_third {TYPE_3__ fs_un1; } ;
struct ufs_super_block_second {int dummy; } ;
struct ufs_super_block_first {int dummy; } ;
struct TYPE_10__ {long cs_nffree; int cs_nifree; int cs_nbfree; } ;
struct ufs_sb_private_info {long s_minfree; int s_ncg; int s_ipg; TYPE_4__ cs_total; scalar_t__ s_dsize; } ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct TYPE_11__ {void** val; } ;
struct kstatfs {long f_bfree; long f_bavail; int f_files; TYPE_5__ f_fsid; int f_namelen; scalar_t__ f_blocks; int f_bsize; int f_ffree; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_12__ {unsigned int s_flags; struct ufs_sb_private_info* s_uspi; } ;
struct TYPE_7__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct ufs_super_block_first* FUNC_4 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_second* FUNC_5 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_6 (struct ufs_sb_private_info*) ;
 long FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_5, struct kstatfs *VAR_6)
{
 struct super_block *VAR_7 = VAR_5->d_sb;
 struct ufs_sb_private_info *VAR_8= FUNC_0(VAR_7)->s_uspi;
 unsigned VAR_9 = FUNC_0(VAR_7)->s_flags;
 struct ufs_super_block_first *VAR_10;
 struct ufs_super_block_second *VAR_11;
 struct ufs_super_block_third *VAR_12;
 u64 VAR_13 = FUNC_2(VAR_7->s_bdev->bd_dev);

 FUNC_3();

 VAR_10 = FUNC_4(VAR_8);
 VAR_11 = FUNC_5(VAR_8);
 VAR_12 = FUNC_6(VAR_8);

 if ((VAR_9 & VAR_3) == VAR_4) {
  VAR_6->f_type = VAR_0;
  VAR_6->f_blocks = FUNC_1(VAR_7, VAR_12->fs_un1.fs_u2.fs_dsize);
 } else {
  VAR_6->f_type = VAR_1;
  VAR_6->f_blocks = VAR_8->s_dsize;
 }
 VAR_6->f_bfree = FUNC_7(VAR_8->cs_total.cs_nbfree) +
  VAR_8->cs_total.cs_nffree;
 VAR_6->f_ffree = VAR_8->cs_total.cs_nifree;
 VAR_6->f_bsize = VAR_7->s_blocksize;
 VAR_6->f_bavail = (VAR_6->f_bfree > (((long)VAR_6->f_blocks / 100) * VAR_8->s_minfree))
  ? (VAR_6->f_bfree - (((long)VAR_6->f_blocks / 100) * VAR_8->s_minfree)) : 0;
 VAR_6->f_files = VAR_8->s_ncg * VAR_8->s_ipg;
 VAR_6->f_namelen = VAR_2;
 VAR_6->f_fsid.val[0] = (u32)VAR_13;
 VAR_6->f_fsid.val[1] = (u32)(VAR_13 >> 32);

 FUNC_8();

 return 0;
}
