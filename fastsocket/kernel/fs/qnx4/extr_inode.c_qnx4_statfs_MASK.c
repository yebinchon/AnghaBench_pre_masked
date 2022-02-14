
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_blocksize; int s_magic; TYPE_1__* s_bdev; } ;
struct TYPE_7__ {void** val; } ;
struct kstatfs {int f_blocks; TYPE_3__ f_fsid; int f_namelen; int f_bfree; int f_bavail; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_8__ {TYPE_2__* BitMap; } ;
struct TYPE_6__ {int di_size; } ;
struct TYPE_5__ {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct super_block*) ;
 TYPE_4__* FUNC_4 (struct super_block*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->d_sb;
 u64 VAR_4 = FUNC_0(VAR_3->s_bdev->bd_dev);

 FUNC_2();

 VAR_2->f_type = VAR_3->s_magic;
 VAR_2->f_bsize = VAR_3->s_blocksize;
 VAR_2->f_blocks = FUNC_1(FUNC_4(VAR_3)->BitMap->di_size) * 8;
 VAR_2->f_bfree = FUNC_3(VAR_3);
 VAR_2->f_bavail = VAR_2->f_bfree;
 VAR_2->f_namelen = VAR_0;
 VAR_2->f_fsid.val[0] = (u32)VAR_4;
 VAR_2->f_fsid.val[1] = (u32)(VAR_4 >> 32);

 FUNC_5();

 return 0;
}
