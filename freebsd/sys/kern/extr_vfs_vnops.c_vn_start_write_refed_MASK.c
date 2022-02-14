
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {int mnt_kern_flag; int mnt_writeopcount; int mnt_flag; TYPE_1__* mnt_vfc; TYPE_2__* mnt_susp_owner; } ;
struct TYPE_4__ {int td_pflags; } ;
struct TYPE_3__ {int vfc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (int *,int ,int,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mount*,int ,int) ;
 scalar_t__ FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_11(struct mount *VAR_11, int VAR_12, bool VAR_13)
{
 int VAR_14, VAR_15;

 if (FUNC_5(!VAR_13) && (VAR_12 & VAR_8) == 0 &&
     FUNC_9(VAR_11)) {
  FUNC_4((VAR_11->mnt_kern_flag & VAR_2) == 0);
  FUNC_8(VAR_11, VAR_10, 1);
  FUNC_10(VAR_11);
  return (0);
 }

 if (VAR_13)
  FUNC_7(FUNC_2(VAR_11), VAR_1);
 else
  FUNC_0(VAR_11);

 VAR_14 = 0;




 if ((VAR_9->td_pflags & VAR_5) == 0 ||
     VAR_11->mnt_susp_owner != VAR_9) {
  VAR_15 = ((VAR_11->mnt_vfc->vfc_flags & VAR_6) != 0 ?
      (VAR_12 & VAR_3) : 0) | (VAR_4 - 1);
  while ((VAR_11->mnt_kern_flag & VAR_2) != 0) {
   if (VAR_12 & VAR_7) {
    VAR_14 = VAR_0;
    goto unlock;
   }
   VAR_14 = FUNC_6(&VAR_11->mnt_flag, FUNC_2(VAR_11), VAR_15,
       "suspfs", 0);
   if (VAR_14)
    goto unlock;
  }
 }
 if (VAR_12 & VAR_8)
  goto unlock;
 VAR_11->mnt_writeopcount++;
unlock:
 if (VAR_14 != 0 || (VAR_12 & VAR_8) != 0)
  FUNC_3(VAR_11);
 FUNC_1(VAR_11);
 return (VAR_14);
}
