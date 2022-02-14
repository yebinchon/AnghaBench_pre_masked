
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int mnt_kern_flag; int mnt_writeopcount; int mnt_flag; TYPE_1__* mnt_susp_owner; } ;
struct TYPE_2__ {int td_pflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*,int ,int) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct mount *VAR_7, int VAR_8)
{

 FUNC_4(FUNC_8(VAR_7));

 FUNC_1(VAR_7);
 if ((VAR_7->mnt_kern_flag & VAR_0) != 0) {
  FUNC_0(VAR_7->mnt_susp_owner == VAR_6, ("mnt_susp_owner"));
  VAR_7->mnt_kern_flag &= ~(VAR_0 | VAR_1 |
           VAR_2);
  VAR_7->mnt_susp_owner = ((void*)0);
  FUNC_9(&VAR_7->mnt_writeopcount);
  FUNC_9(&VAR_7->mnt_flag);
  VAR_6->td_pflags &= ~VAR_3;
  if ((VAR_8 & VAR_5) != 0) {
   FUNC_3(VAR_7);
   VAR_7->mnt_writeopcount++;
  }
  FUNC_2(VAR_7);
  if ((VAR_8 & VAR_4) == 0)
   FUNC_5(VAR_7);
  FUNC_6(VAR_7);
 } else if ((VAR_8 & VAR_5) != 0) {
  FUNC_3(VAR_7);
  FUNC_7(VAR_7, 0, 1);
 } else {
  FUNC_2(VAR_7);
 }
}
