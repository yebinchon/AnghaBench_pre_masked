
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs {int fs_bsize; } ;
struct TYPE_2__ {int dp2; } ;
struct uufsd {int d_ufs; struct fs d_fs; int * d_inoblock; int d_inomin; TYPE_1__ d_dp; } ;


 int FUNC_0 (struct uufsd*,char*) ;
 scalar_t__ FUNC_1 (struct uufsd*,int ,int *,int ) ;
 int FUNC_2 (struct fs*,int ) ;
 int FUNC_3 (struct fs*,int ) ;
 int FUNC_4 (struct fs*,int ) ;

int
FUNC_5(struct uufsd *VAR_0)
{
 struct fs *VAR_1;

 VAR_1 = &VAR_0->d_fs;
 if (VAR_0->d_inoblock == ((void*)0)) {
  FUNC_0(VAR_0, "No inode block allocated");
  return (-1);
 }
 if (VAR_0->d_ufs == 2)
  FUNC_2(VAR_1, VAR_0->d_dp.dp2);
 if (FUNC_1(VAR_0, FUNC_3(VAR_1, FUNC_4(&VAR_0->d_fs, VAR_0->d_inomin)),
     VAR_0->d_inoblock, VAR_0->d_fs.fs_bsize) <= 0)
  return (-1);
 return (0);
}
