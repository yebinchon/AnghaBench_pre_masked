
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int mnt_kern_flag; int mnt_flag; } ;
struct TYPE_2__ {int td_pflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (struct mount*,int ) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (int *,struct mount**,int ) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct mount *VAR_5)
{
 int VAR_6;

 FUNC_3(FUNC_7(VAR_5));
 FUNC_0((VAR_4->td_pflags & VAR_2) == 0,
     ("vfs_write_suspend_umnt: recursed"));


 for (;;) {
  FUNC_5(VAR_5);
  VAR_6 = FUNC_4(VAR_5, 0);
  if (VAR_6 != 0) {
   FUNC_6(((void*)0), &VAR_5, VAR_3);
   return (VAR_6);
  }
  FUNC_1(VAR_5);
  if ((VAR_5->mnt_kern_flag & VAR_1) != 0)
   break;
  FUNC_2(VAR_5);
  FUNC_6(((void*)0), &VAR_5, VAR_3);
 }
 VAR_5->mnt_kern_flag &= ~(VAR_1 | VAR_0);
 FUNC_8(&VAR_5->mnt_flag);
 FUNC_2(VAR_5);
 VAR_4->td_pflags |= VAR_2;
 return (0);
}
