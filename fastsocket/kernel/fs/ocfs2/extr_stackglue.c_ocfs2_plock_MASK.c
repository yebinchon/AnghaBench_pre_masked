
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_cluster_connection {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* plock ) (struct ocfs2_cluster_connection*,int ,struct file*,int,struct file_lock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct ocfs2_cluster_connection*,int ,struct file*,int,struct file_lock*) ;

int FUNC_2(struct ocfs2_cluster_connection *VAR_2, u64 VAR_3,
  struct file *VAR_4, int VAR_5, struct file_lock *VAR_6)
{
 FUNC_0(VAR_1->sp_ops->plock == ((void*)0));
 if (VAR_1->sp_ops->plock)
  return VAR_1->sp_ops->plock(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return -VAR_0;
}
