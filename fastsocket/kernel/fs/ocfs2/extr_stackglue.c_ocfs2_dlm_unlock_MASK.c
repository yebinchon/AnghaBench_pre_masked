
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ocfs2_dlm_lksb {int dummy; } ocfs2_dlm_lksb ;
typedef int u32 ;
struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_cluster_connection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* dlm_unlock ) (struct ocfs2_cluster_connection*,union ocfs2_dlm_lksb*,int ,struct ocfs2_lock_res*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct ocfs2_cluster_connection*,union ocfs2_dlm_lksb*,int ,struct ocfs2_lock_res*) ;

int FUNC_2(struct ocfs2_cluster_connection *VAR_2,
       union ocfs2_dlm_lksb *VAR_3,
       u32 VAR_4,
       struct ocfs2_lock_res *VAR_5)
{
 FUNC_0(VAR_1 == ((void*)0));

 return VAR_0->sp_ops->dlm_unlock(VAR_2, VAR_3, VAR_4, VAR_5);
}
