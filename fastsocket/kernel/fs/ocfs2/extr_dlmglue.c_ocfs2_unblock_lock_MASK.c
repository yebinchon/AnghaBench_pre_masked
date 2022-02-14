
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_unblock_ctl {int requeue; int unblock_action; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; scalar_t__ l_blocking; scalar_t__ l_level; int l_lock; TYPE_1__* l_ops; scalar_t__ l_ex_holders; scalar_t__ l_ro_holders; } ;
struct TYPE_2__ {int flags; int (* set_lvb ) (struct ocfs2_lock_res*) ;int (* downconvert_worker ) (struct ocfs2_lock_res*,int) ;int (* check_downconvert ) (struct ocfs2_lock_res*,int) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int,unsigned int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 unsigned int FUNC_8 (struct ocfs2_lock_res*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ocfs2_lock_res*,int) ;
 int FUNC_12 (struct ocfs2_lock_res*,int) ;
 int FUNC_13 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_14(struct ocfs2_super *VAR_10,
         struct ocfs2_lock_res *VAR_11,
         struct ocfs2_unblock_ctl *VAR_12)
{
 unsigned long VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 unsigned int VAR_18;

 FUNC_1();

 FUNC_9(&VAR_11->l_lock, VAR_13);

 FUNC_0(!(VAR_11->l_flags & VAR_4));

recheck:
 if (VAR_11->l_flags & VAR_5) {
  if (VAR_11->l_flags & VAR_7)
   goto leave_requeue;

  VAR_12->requeue = 1;
  VAR_16 = FUNC_7(VAR_10, VAR_11);
  FUNC_10(&VAR_11->l_lock, VAR_13);
  if (VAR_16) {
   VAR_16 = FUNC_4(VAR_10, VAR_11);
   if (VAR_16 < 0)
    FUNC_2(VAR_16);
  }
  goto leave;
 }



 if ((VAR_11->l_blocking == VAR_0)
     && (VAR_11->l_ex_holders || VAR_11->l_ro_holders))
  goto leave_requeue;



 if (VAR_11->l_blocking == VAR_1 &&
     VAR_11->l_ex_holders)
  goto leave_requeue;





 if ((VAR_11->l_ops->flags & VAR_2)
     && (VAR_11->l_flags & VAR_8))
  goto leave_requeue;

 VAR_15 = FUNC_6(VAR_11->l_blocking);

 if (VAR_11->l_ops->check_downconvert
     && !VAR_11->l_ops->check_downconvert(VAR_11, VAR_15))
  goto leave_requeue;




 if (!VAR_11->l_ops->downconvert_worker)
  goto downconvert;





 VAR_14 = VAR_11->l_blocking;
 FUNC_10(&VAR_11->l_lock, VAR_13);

 VAR_12->unblock_action = VAR_11->l_ops->downconvert_worker(VAR_11, VAR_14);

 if (VAR_12->unblock_action == VAR_9)
  goto leave;

 FUNC_9(&VAR_11->l_lock, VAR_13);
 if (VAR_14 != VAR_11->l_blocking) {


  goto recheck;
 }

downconvert:
 VAR_12->requeue = 0;

 if (VAR_11->l_ops->flags & VAR_3) {
  if (VAR_11->l_level == VAR_0)
   VAR_17 = 1;







  if (VAR_17 && !(VAR_11->l_flags & VAR_6))
   VAR_11->l_ops->set_lvb(VAR_11);
 }

 VAR_18 = FUNC_8(VAR_11, VAR_15);
 FUNC_10(&VAR_11->l_lock, VAR_13);
 VAR_16 = FUNC_5(VAR_10, VAR_11, VAR_15, VAR_17,
         VAR_18);

leave:
 FUNC_3(VAR_16);
 return VAR_16;

leave_requeue:
 FUNC_10(&VAR_11->l_lock, VAR_13);
 VAR_12->requeue = 1;

 FUNC_3(0);
 return 0;
}
