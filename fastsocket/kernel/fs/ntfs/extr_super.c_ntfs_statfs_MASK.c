
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_8__ {int* val; } ;
struct kstatfs {int f_bsize; int f_blocks; long long f_bavail; long long f_bfree; long long f_files; int f_namelen; TYPE_1__ f_fsid; int f_ffree; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
typedef long long s64 ;
typedef int pgoff_t ;
struct TYPE_9__ {int nr_clusters; int cluster_size_bits; long long mft_record_size_bits; int serial_no; int mftbmp_lock; int mft_ino; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_10__ {int initialized_size; int size_lock; } ;
typedef TYPE_3__ ntfs_inode ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,long long,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 long long FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 struct super_block *VAR_6 = VAR_4->d_sb;
 s64 VAR_7;
 ntfs_volume *VAR_8 = FUNC_1(VAR_6);
 ntfs_inode *VAR_9 = FUNC_0(VAR_8->mft_ino);
 pgoff_t VAR_10;
 unsigned long VAR_11;

 FUNC_6("Entering.");

 VAR_5->f_type = VAR_1;

 VAR_5->f_bsize = VAR_3;





 VAR_5->f_blocks = VAR_8->nr_clusters << VAR_8->cluster_size_bits >>
    VAR_2;

 VAR_7 = FUNC_4(VAR_8) << VAR_8->cluster_size_bits >>
    VAR_2;
 if (VAR_7 < 0LL)
  VAR_7 = 0LL;

 VAR_5->f_bavail = VAR_5->f_bfree = VAR_7;

 FUNC_3(&VAR_8->mftbmp_lock);
 FUNC_7(&VAR_9->size_lock, VAR_11);
 VAR_7 = FUNC_5(VAR_8->mft_ino) >> VAR_8->mft_record_size_bits;





 VAR_10 = ((((VAR_9->initialized_size >> VAR_8->mft_record_size_bits)
   + 7) >> 3) + VAR_3 - 1) >> VAR_2;
 FUNC_8(&VAR_9->size_lock, VAR_11);

 VAR_5->f_files = VAR_7;

 VAR_5->f_ffree = FUNC_2(VAR_8, VAR_7, VAR_10);
 FUNC_9(&VAR_8->mftbmp_lock);
 VAR_5->f_fsid.val[0] = VAR_8->serial_no & 0xffffffff;
 VAR_5->f_fsid.val[1] = (VAR_8->serial_no >> 32) & 0xffffffff;

 VAR_5->f_namelen = VAR_0;
 return 0;
}
