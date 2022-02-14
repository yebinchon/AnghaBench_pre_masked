
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_flags; int l_requested; int l_name; int l_lksb; int l_lock; int l_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_1 (struct ocfs2_lock_res*,int) ;
 unsigned int FUNC_2 (struct ocfs2_lock_res*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int *,int ,int ,scalar_t__,struct ocfs2_lock_res*) ;
 int FUNC_7 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_8 (struct ocfs2_lock_res*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_super *VAR_4,
        struct ocfs2_lock_res *VAR_5,
        int VAR_6,
        u32 VAR_7)
{
 int VAR_8 = 0;
 unsigned long VAR_9;
 unsigned int VAR_10;

 FUNC_4();

 FUNC_3(0, "lock %s, level = %d, flags = %u\n", VAR_5->l_name, VAR_6,
      VAR_7);

 FUNC_9(&VAR_5->l_lock, VAR_9);
 if ((VAR_5->l_flags & VAR_1) ||
     (VAR_5->l_flags & VAR_2)) {
  FUNC_10(&VAR_5->l_lock, VAR_9);
  goto bail;
 }

 VAR_5->l_action = VAR_0;
 VAR_5->l_requested = VAR_6;
 FUNC_1(VAR_5, VAR_2);
 VAR_10 = FUNC_2(VAR_5);
 FUNC_10(&VAR_5->l_lock, VAR_9);

 VAR_8 = FUNC_6(VAR_4->cconn,
        VAR_6,
        &VAR_5->l_lksb,
        VAR_7,
        VAR_5->l_name,
        VAR_3 - 1,
        VAR_5);
 FUNC_0(VAR_5, VAR_10, VAR_4);
 if (VAR_8) {
  FUNC_7("ocfs2_dlm_lock", VAR_8, VAR_5);
  FUNC_8(VAR_5, 1);
 }

 FUNC_3(0, "lock %s, return from ocfs2_dlm_lock\n", VAR_5->l_name);

bail:
 FUNC_5(VAR_8);
 return VAR_8;
}
