
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_namemax; scalar_t__ f_flag; scalar_t__ f_fsid; int f_favail; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_frsize; int f_bsize; } ;
struct statfs {scalar_t__ f_flags; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct statvfs *VAR_1, struct statfs *VAR_2)
{
 VAR_1->f_bsize = VAR_2->f_bsize;
 VAR_1->f_frsize = VAR_2->f_bsize;
 VAR_1->f_blocks = VAR_2->f_blocks;
 VAR_1->f_bfree = VAR_2->f_bfree;
 VAR_1->f_bavail = VAR_2->f_bavail;
 VAR_1->f_files = VAR_2->f_files;
 VAR_1->f_ffree = VAR_2->f_ffree;
 VAR_1->f_favail = VAR_2->f_ffree;
 VAR_1->f_fsid = 0;



 VAR_1->f_flag = 0;

 VAR_1->f_namemax = VAR_0;
}
