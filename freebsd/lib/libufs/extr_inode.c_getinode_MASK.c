
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union dinodep {struct ufs2_dinode* dp2; struct ufs1_dinode* dp1; } ;
struct fs {size_t fs_ncg; int fs_bsize; scalar_t__ fs_ipg; } ;
struct uufsd {size_t d_inomin; size_t d_inomax; int d_ufs; union dinodep d_dp; int * d_inoblock; struct fs d_fs; } ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef size_t ino_t ;
typedef int * caddr_t ;


 int FUNC_0 (struct uufsd*,char*) ;
 size_t FUNC_1 (struct fs*) ;
 int FUNC_2 (struct uufsd*,int ,int *,int ) ;
 int FUNC_3 (struct fs*,struct ufs2_dinode*) ;
 int FUNC_4 (struct fs*,int ) ;
 int FUNC_5 (struct fs*,size_t) ;
 int * FUNC_6 (int ) ;

int
FUNC_7(struct uufsd *VAR_0, union dinodep *VAR_1, ino_t VAR_2)
{
 ino_t VAR_3, VAR_4;
 caddr_t VAR_5;
 struct fs *VAR_6;

 FUNC_0(VAR_0, ((void*)0));

 VAR_6 = &VAR_0->d_fs;
 if (VAR_2 >= (ino_t)VAR_6->fs_ipg * VAR_6->fs_ncg) {
  FUNC_0(VAR_0, "inode number out of range");
  return (-1);
 }
 VAR_5 = VAR_0->d_inoblock;
 VAR_3 = VAR_0->d_inomin;
 VAR_4 = VAR_0->d_inomax;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_6(VAR_6->fs_bsize);
  if (VAR_5 == ((void*)0)) {
   FUNC_0(VAR_0, "unable to allocate inode block");
   return (-1);
  }
  VAR_0->d_inoblock = VAR_5;
 }
 if (VAR_2 >= VAR_3 && VAR_2 < VAR_4)
  goto gotit;
 FUNC_2(VAR_0, FUNC_4(VAR_6, FUNC_5(VAR_6, VAR_2)), VAR_5,
     VAR_6->fs_bsize);
 VAR_0->d_inomin = VAR_3 = VAR_2 - (VAR_2 % FUNC_1(VAR_6));
 VAR_0->d_inomax = VAR_4 = VAR_3 + FUNC_1(VAR_6);
gotit: switch (VAR_0->d_ufs) {
 case 1:
  VAR_0->d_dp.dp1 = &((struct ufs1_dinode *)VAR_5)[VAR_2 - VAR_3];
  if (VAR_1 != ((void*)0))
   *VAR_1 = VAR_0->d_dp;
  return (0);
 case 2:
  VAR_0->d_dp.dp2 = &((struct ufs2_dinode *)VAR_5)[VAR_2 - VAR_3];
  if (VAR_1 != ((void*)0))
   *VAR_1 = VAR_0->d_dp;
  if (FUNC_3(VAR_6, VAR_0->d_dp.dp2) == 0)
   return (0);
  FUNC_0(VAR_0, "check-hash failed for inode read from disk");
  return (-1);
 default:
  break;
 }
 FUNC_0(VAR_0, "unknown UFS filesystem type");
 return (-1);
}
