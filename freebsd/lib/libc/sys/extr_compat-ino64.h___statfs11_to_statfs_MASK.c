
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_mntonname; int f_mntfromname; int f_fstypename; int f_charspare; int f_spare; int f_fsid; int f_owner; int f_namemax; int f_asyncreads; int f_syncreads; int f_asyncwrites; int f_syncwrites; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_iosize; int f_bsize; int f_flags; int f_type; int f_version; } ;
struct freebsd11_statfs {int f_mntonname; int f_mntfromname; int f_fstypename; int f_fsid; int f_owner; int f_namemax; int f_asyncreads; int f_syncreads; int f_asyncwrites; int f_syncwrites; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_iosize; int f_bsize; int f_flags; int f_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_2(const struct freebsd11_statfs *VAR_1, struct statfs *VAR_2)
{

 VAR_2->f_version = VAR_0;
 VAR_2->f_type = VAR_1->f_type;
 VAR_2->f_flags = VAR_1->f_flags;
 VAR_2->f_bsize = VAR_1->f_bsize;
 VAR_2->f_iosize = VAR_1->f_iosize;
 VAR_2->f_blocks = VAR_1->f_blocks;
 VAR_2->f_bfree = VAR_1->f_bfree;
 VAR_2->f_bavail = VAR_1->f_bavail;
 VAR_2->f_files = VAR_1->f_files;
 VAR_2->f_ffree = VAR_1->f_ffree;
 VAR_2->f_syncwrites = VAR_1->f_syncwrites;
 VAR_2->f_asyncwrites = VAR_1->f_asyncwrites;
 VAR_2->f_syncreads = VAR_1->f_syncreads;
 VAR_2->f_asyncreads = VAR_1->f_asyncreads;
 VAR_2->f_namemax = VAR_1->f_namemax;
 VAR_2->f_owner = VAR_1->f_owner;
 VAR_2->f_fsid = VAR_1->f_fsid;
 FUNC_0(VAR_2->f_spare, 0, sizeof(VAR_2->f_spare));
 FUNC_0(VAR_2->f_charspare, 0, sizeof(VAR_2->f_charspare));
 FUNC_1(VAR_2->f_fstypename, VAR_1->f_fstypename, sizeof(VAR_2->f_fstypename));
 FUNC_1(VAR_2->f_mntfromname, VAR_1->f_mntfromname, sizeof(VAR_2->f_mntfromname));
 FUNC_1(VAR_2->f_mntonname, VAR_1->f_mntonname, sizeof(VAR_2->f_mntonname));
}
