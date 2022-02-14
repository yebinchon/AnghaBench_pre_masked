
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_mnt {int part_len; int bsize; } ;
struct statfs {scalar_t__ f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; scalar_t__ f_bfree; int f_blocks; int f_iosize; int f_bsize; } ;
struct mount {int dummy; } ;


 struct udf_mnt* FUNC_0 (struct mount*) ;

__attribute__((used)) static int
FUNC_1(struct mount *VAR_0, struct statfs *VAR_1)
{
 struct udf_mnt *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 VAR_1->f_bsize = VAR_2->bsize;
 VAR_1->f_iosize = VAR_2->bsize;
 VAR_1->f_blocks = VAR_2->part_len;
 VAR_1->f_bfree = 0;
 VAR_1->f_bavail = 0;
 VAR_1->f_files = 0;
 VAR_1->f_ffree = 0;
 return 0;
}
