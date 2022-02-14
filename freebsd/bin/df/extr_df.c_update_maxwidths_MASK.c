
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_ffree; scalar_t__ f_files; int f_bsize; scalar_t__ f_bavail; scalar_t__ f_bfree; scalar_t__ f_blocks; int f_fstypename; int f_mntfromname; } ;
struct maxwidths {void* ifree; void* iused; void* avail; void* used; void* total; void* fstype; void* mntfrom; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ,long) ;
 int FUNC_1 (int*,long*) ;
 void* FUNC_2 (void*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct maxwidths *VAR_0, const struct statfs *VAR_1)
{
 static long VAR_2 = 0;
 int VAR_3;

 if (VAR_2 == 0)
  FUNC_1(&VAR_3, &VAR_2);

 VAR_0->mntfrom = FUNC_2(VAR_0->mntfrom, (int)FUNC_4(VAR_1->f_mntfromname));
 VAR_0->fstype = FUNC_2(VAR_0->fstype, (int)FUNC_4(VAR_1->f_fstypename));
 VAR_0->total = FUNC_2(VAR_0->total, FUNC_3(
     FUNC_0((int64_t)VAR_1->f_blocks, VAR_1->f_bsize, VAR_2)));
 VAR_0->used = FUNC_2(VAR_0->used,
     FUNC_3(FUNC_0((int64_t)VAR_1->f_blocks -
     (int64_t)VAR_1->f_bfree, VAR_1->f_bsize, VAR_2)));
 VAR_0->avail = FUNC_2(VAR_0->avail, FUNC_3(FUNC_0(VAR_1->f_bavail,
     VAR_1->f_bsize, VAR_2)));
 VAR_0->iused = FUNC_2(VAR_0->iused, FUNC_3((int64_t)VAR_1->f_files -
     VAR_1->f_ffree));
 VAR_0->ifree = FUNC_2(VAR_0->ifree, FUNC_3(VAR_1->f_ffree));
}
