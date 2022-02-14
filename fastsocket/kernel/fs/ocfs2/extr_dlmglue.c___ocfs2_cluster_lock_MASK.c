
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int s_mount_opt; int cconn; } ;
struct ocfs2_mask_waiter {int mw_mask; } ;
struct TYPE_5__ {int * key; } ;
struct ocfs2_lock_res {int l_flags; int l_level; scalar_t__ l_action; int l_requested; TYPE_2__ l_lockdep_map; int l_lock; int l_name; int l_lksb; TYPE_1__* l_ops; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 scalar_t__ FUNC_4 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*) ;
 unsigned int FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (int,char*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,int *,int,int ,scalar_t__,struct ocfs2_lock_res*) ;
 int FUNC_12 (struct ocfs2_lock_res*,int) ;
 int FUNC_13 (struct ocfs2_mask_waiter*) ;
 int FUNC_14 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_15 (struct ocfs2_lock_res*,int) ;
 int FUNC_16 (struct ocfs2_lock_res*,int) ;
 int FUNC_17 (struct ocfs2_lock_res*,int,struct ocfs2_mask_waiter*,int) ;
 int FUNC_18 (struct ocfs2_mask_waiter*) ;
 int FUNC_19 (TYPE_2__*,int,int,unsigned long) ;
 int FUNC_20 (TYPE_2__*,int,int,unsigned long) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct ocfs2_super *VAR_22,
    struct ocfs2_lock_res *VAR_23,
    int VAR_24,
    u32 VAR_25,
    int VAR_26,
    int VAR_27,
    unsigned long VAR_28)
{
 struct ocfs2_mask_waiter VAR_29;
 int VAR_30, VAR_31 = !(VAR_22->s_mount_opt & VAR_20);
 int VAR_32 = 0;
 unsigned long VAR_33;
 unsigned int VAR_34;
 int VAR_35 = 0;

 FUNC_8();

 FUNC_13(&VAR_29);

 if (VAR_23->l_ops->flags & VAR_8)
  VAR_25 |= VAR_2;

again:
 VAR_30 = 0;

 if (VAR_31 && FUNC_21(VAR_21)) {
  VAR_32 = -VAR_7;
  goto out;
 }

 FUNC_22(&VAR_23->l_lock, VAR_33);

 FUNC_7(VAR_23->l_flags & VAR_16,
   "Cluster lock called on freeing lockres %s! flags "
   "0x%lx\n", VAR_23->l_name, VAR_23->l_flags);




 if (VAR_23->l_flags & VAR_15 &&
     VAR_24 > VAR_23->l_level) {


  FUNC_1(VAR_23, &VAR_29, VAR_15, 0);
  VAR_30 = 1;
  goto unlock;
 }

 if (VAR_23->l_flags & VAR_14 &&
     !FUNC_15(VAR_23, VAR_24)) {


  FUNC_1(VAR_23, &VAR_29, VAR_14, 0);
  VAR_30 = 1;
  goto unlock;
 }

 if (VAR_24 > VAR_23->l_level) {
  if (VAR_35 > 0) {
   VAR_32 = -VAR_6;
   goto unlock;
  }
  if (VAR_25 & VAR_1)
   VAR_35 = 1;

  if (VAR_23->l_action != VAR_12)
   FUNC_6(VAR_9, "lockres %s has action %u pending\n",
        VAR_23->l_name, VAR_23->l_action);

  if (!(VAR_23->l_flags & VAR_13)) {
   VAR_23->l_action = VAR_10;
   VAR_25 &= ~VAR_0;
  } else {
   VAR_23->l_action = VAR_11;
   VAR_25 |= VAR_0;
  }

  VAR_23->l_requested = VAR_24;
  FUNC_3(VAR_23, VAR_15);
  VAR_34 = FUNC_5(VAR_23);
  FUNC_23(&VAR_23->l_lock, VAR_33);

  FUNC_0(VAR_24 == VAR_3);
  FUNC_0(VAR_24 == VAR_4);

  FUNC_6(0, "lock %s, convert from %d to level = %d\n",
       VAR_23->l_name, VAR_23->l_level, VAR_24);


  VAR_32 = FUNC_11(VAR_22->cconn,
         VAR_24,
         &VAR_23->l_lksb,
         VAR_25,
         VAR_23->l_name,
         VAR_17 - 1,
         VAR_23);
  FUNC_2(VAR_23, VAR_34, VAR_22);
  if (VAR_32) {
   if (!(VAR_25 & VAR_1) ||
       (VAR_32 != -VAR_6)) {
    FUNC_14("ocfs2_dlm_lock",
          VAR_32, VAR_23);
   }
   FUNC_16(VAR_23, 1);
   goto out;
  }

  FUNC_6(0, "lock %s, successful return from ocfs2_dlm_lock\n",
       VAR_23->l_name);



  VAR_31 = 0;


  goto again;
 }


 FUNC_12(VAR_23, VAR_24);

 VAR_32 = 0;
unlock:
 FUNC_23(&VAR_23->l_lock, VAR_33);
out:
 if (VAR_30 && VAR_26 & VAR_18 &&
     VAR_29.mw_mask & (VAR_15|VAR_14)) {
  VAR_30 = 0;
  if (FUNC_4(VAR_23, &VAR_29))
   VAR_32 = -VAR_6;
  else
   goto again;
 }
 if (VAR_30) {
  VAR_32 = FUNC_18(&VAR_29);
  if (VAR_32 == 0)
   goto again;
  FUNC_9(VAR_32);
 }
 FUNC_17(VAR_23, VAR_24, &VAR_29, VAR_32);
 FUNC_10(VAR_32);
 return VAR_32;
}
