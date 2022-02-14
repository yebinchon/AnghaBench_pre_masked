
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_name; int l_lksb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ,struct ocfs2_lock_res*) ;
 int FUNC_4 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_lock_res*,int ) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_1,
    struct ocfs2_lock_res *VAR_2)
{
 int VAR_3;

 FUNC_1();
 FUNC_0(0, "lock %s\n", VAR_2->l_name);

 VAR_3 = FUNC_3(VAR_1->cconn, &VAR_2->l_lksb,
          VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_4("ocfs2_dlm_unlock", VAR_3, VAR_2);
  FUNC_5(VAR_2, 0);
 }

 FUNC_0(0, "lock %s return from ocfs2_dlm_unlock\n", VAR_2->l_name);

 FUNC_2(VAR_3);
 return VAR_3;
}
