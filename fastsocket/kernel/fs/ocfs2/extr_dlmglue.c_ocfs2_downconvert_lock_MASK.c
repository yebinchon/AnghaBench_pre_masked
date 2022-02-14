
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_name; int l_lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int *,int ,int ,scalar_t__,struct ocfs2_lock_res*) ;
 int FUNC_4 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_lock_res*,int) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_3,
      struct ocfs2_lock_res *VAR_4,
      int VAR_5,
      int VAR_6,
      unsigned int VAR_7)
{
 int VAR_8;
 u32 VAR_9 = VAR_0;

 FUNC_1();

 if (VAR_6)
  VAR_9 |= VAR_1;

 VAR_8 = FUNC_3(VAR_3->cconn,
        VAR_5,
        &VAR_4->l_lksb,
        VAR_9,
        VAR_4->l_name,
        VAR_2 - 1,
        VAR_4);
 FUNC_0(VAR_4, VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_4("ocfs2_dlm_lock", VAR_8, VAR_4);
  FUNC_5(VAR_4, 1);
  goto bail;
 }

 VAR_8 = 0;
bail:
 FUNC_2(VAR_8);
 return VAR_8;
}
