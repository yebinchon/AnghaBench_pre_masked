
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_ffree; int f_files; int f_bavail; int f_bfree; scalar_t__ f_blocks; int f_iosize; int f_bsize; } ;
struct msdosfsmount {int pm_RootDirEnts; int pm_freeclustercount; scalar_t__ pm_maxcluster; int pm_bpcluster; } ;
struct mount {int dummy; } ;


 struct msdosfsmount* FUNC_0 (struct mount*) ;

__attribute__((used)) static int
FUNC_1(struct mount *VAR_0, struct statfs *VAR_1)
{
 struct msdosfsmount *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1->f_bsize = VAR_2->pm_bpcluster;
 VAR_1->f_iosize = VAR_2->pm_bpcluster;
 VAR_1->f_blocks = VAR_2->pm_maxcluster + 1;
 VAR_1->f_bfree = VAR_2->pm_freeclustercount;
 VAR_1->f_bavail = VAR_2->pm_freeclustercount;
 VAR_1->f_files = VAR_2->pm_RootDirEnts;
 VAR_1->f_ffree = 0;
 return (0);
}
