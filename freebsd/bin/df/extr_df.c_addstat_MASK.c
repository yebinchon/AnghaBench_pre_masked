
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct statfs {int f_bsize; int f_blocks; int f_bfree; int f_bavail; scalar_t__ f_ffree; scalar_t__ f_files; } ;



__attribute__((used)) static void
FUNC_0(struct statfs *VAR_0, struct statfs *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = VAR_1->f_bsize / VAR_0->f_bsize;
 VAR_0->f_blocks += VAR_1->f_blocks * VAR_2;
 VAR_0->f_bfree += VAR_1->f_bfree * VAR_2;
 VAR_0->f_bavail += VAR_1->f_bavail * VAR_2;
 VAR_0->f_files += VAR_1->f_files;
 VAR_0->f_ffree += VAR_1->f_ffree;
}
