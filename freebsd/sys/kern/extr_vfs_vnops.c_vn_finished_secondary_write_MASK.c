
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {scalar_t__ mnt_secondary_writes; int mnt_kern_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (scalar_t__*) ;

void
FUNC_6(struct mount *VAR_1)
{
 if (VAR_1 == ((void*)0) || !FUNC_4(VAR_1))
  return;
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->mnt_secondary_writes--;
 if (VAR_1->mnt_secondary_writes < 0)
  FUNC_3("vn_finished_secondary_write: neg cnt");
 if ((VAR_1->mnt_kern_flag & VAR_0) != 0 &&
     VAR_1->mnt_secondary_writes <= 0)
  FUNC_5(&VAR_1->mnt_secondary_writes);
 FUNC_1(VAR_1);
}
