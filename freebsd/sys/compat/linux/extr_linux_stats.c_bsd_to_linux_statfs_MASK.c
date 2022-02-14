
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int * val; } ;
struct statfs {int f_blocks; int f_bfree; int f_files; int f_bsize; int f_bavail; int f_ffree; TYPE_2__ f_fsid; int f_fstypename; } ;
struct TYPE_3__ {int * val; } ;
struct l_statfs {int f_bsize; int f_blocks; int f_bfree; int f_bavail; int f_ffree; int f_files; int f_frsize; int f_spare; scalar_t__ f_flags; int f_namelen; TYPE_1__ f_fsid; int f_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct statfs *VAR_3, struct l_statfs *VAR_4)
{
 VAR_4->f_type = FUNC_0(VAR_3->f_fstypename);
 VAR_4->f_bsize = VAR_3->f_bsize;
 VAR_4->f_blocks = VAR_3->f_blocks;
 VAR_4->f_bfree = VAR_3->f_bfree;
 VAR_4->f_bavail = VAR_3->f_bavail;
 VAR_4->f_ffree = VAR_3->f_ffree;
 VAR_4->f_files = VAR_3->f_files;
 VAR_4->f_fsid.val[0] = VAR_3->f_fsid.val[0];
 VAR_4->f_fsid.val[1] = VAR_3->f_fsid.val[1];
 VAR_4->f_namelen = VAR_2;
 VAR_4->f_frsize = VAR_3->f_bsize;
 VAR_4->f_flags = 0;
 FUNC_1(VAR_4->f_spare, 0, sizeof(VAR_4->f_spare));

 return (0);
}
