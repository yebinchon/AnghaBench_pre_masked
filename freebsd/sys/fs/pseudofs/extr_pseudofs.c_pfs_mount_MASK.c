
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_blocks; int f_files; scalar_t__ f_ffree; scalar_t__ f_bavail; scalar_t__ f_bfree; void* f_iosize; void* f_bsize; } ;
struct pfs_info {int pi_name; } ;
struct mount {int mnt_flag; struct statfs mnt_stat; struct pfs_info* mnt_data; int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*,int ) ;

int
FUNC_4(struct pfs_info *VAR_5, struct mount *VAR_6)
{
 struct statfs *VAR_7;

 if (VAR_6->mnt_flag & VAR_3)
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_6->mnt_flag |= VAR_2;
 VAR_6->mnt_kern_flag |= VAR_1;
 FUNC_1(VAR_6);
 VAR_6->mnt_data = VAR_5;
 FUNC_2(VAR_6);

 VAR_7 = &VAR_6->mnt_stat;
 FUNC_3(VAR_6, VAR_5->pi_name);
 VAR_7->f_bsize = VAR_4;
 VAR_7->f_iosize = VAR_4;
 VAR_7->f_blocks = 1;
 VAR_7->f_bfree = 0;
 VAR_7->f_bavail = 0;
 VAR_7->f_files = 1;
 VAR_7->f_ffree = 0;

 return (0);
}
