
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_debug_root; struct ocfs2_dlm_debug* osb_dlm_debug; } ;
struct ocfs2_dlm_debug {int d_locking_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,struct ocfs2_super*,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct ocfs2_dlm_debug*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_super *VAR_5)
{
 int VAR_6 = 0;
 struct ocfs2_dlm_debug *VAR_7 = VAR_5->osb_dlm_debug;

 VAR_7->d_locking_state = FUNC_0("locking_state",
        VAR_2|VAR_3,
        VAR_5->osb_debug_root,
        VAR_5,
        &VAR_4);
 if (!VAR_7->d_locking_state) {
  VAR_6 = -VAR_0;
  FUNC_1(VAR_1,
       "Unable to create locking state debugfs file.\n");
  goto out;
 }

 FUNC_2(VAR_7);
out:
 return VAR_6;
}
