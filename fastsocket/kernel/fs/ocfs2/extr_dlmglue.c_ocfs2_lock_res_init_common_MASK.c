
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int osb_dlm_debug; } ;
struct ocfs2_lock_res_ops {int dummy; } ;
struct TYPE_2__ {int * key; } ;
struct ocfs2_lock_res {int l_type; TYPE_1__ l_lockdep_map; int l_flags; int l_unlock_action; int l_action; void* l_blocking; void* l_requested; void* l_level; void* l_priv; struct ocfs2_lock_res_ops* l_ops; } ;
typedef enum ocfs2_lock_type { ____Placeholder_ocfs2_lock_type } ocfs2_lock_type ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int ) ;
 int * VAR_5 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_3(struct ocfs2_super *VAR_7,
           struct ocfs2_lock_res *VAR_8,
           enum ocfs2_lock_type VAR_9,
           struct ocfs2_lock_res_ops *VAR_10,
           void *VAR_11)
{
 VAR_8->l_type = VAR_9;
 VAR_8->l_ops = VAR_10;
 VAR_8->l_priv = VAR_11;

 VAR_8->l_level = VAR_0;
 VAR_8->l_requested = VAR_0;
 VAR_8->l_blocking = VAR_0;
 VAR_8->l_action = VAR_1;
 VAR_8->l_unlock_action = VAR_4;

 VAR_8->l_flags = VAR_2;

 FUNC_1(VAR_8, VAR_7->osb_dlm_debug);

 FUNC_2(VAR_8);







}
