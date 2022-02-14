
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_writeopcount; scalar_t__ mnt_vfs_ops; int mnt_kern_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*,int ,int) ;
 scalar_t__ FUNC_7 (struct mount*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (int*) ;
 int VAR_2 ;

void
FUNC_11(struct mount *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0) || !FUNC_9(VAR_3))
  return;

 if (FUNC_7(VAR_3)) {
  FUNC_6(VAR_3, VAR_2, 1);
  FUNC_6(VAR_3, VAR_1, 1);
  FUNC_8(VAR_3);
  return;
 }

 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
 VAR_4 = --VAR_3->mnt_writeopcount;
 if (VAR_3->mnt_vfs_ops == 0) {
  FUNC_3((VAR_3->mnt_kern_flag & VAR_0) == 0);
  FUNC_1(VAR_3);
  return;
 }
 if (VAR_4 < 0)
  FUNC_5(VAR_3);
 if ((VAR_3->mnt_kern_flag & VAR_0) != 0 && VAR_4 == 0)
  FUNC_10(&VAR_3->mnt_writeopcount);
 FUNC_1(VAR_3);
}
