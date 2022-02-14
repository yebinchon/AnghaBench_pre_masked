
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_cluster_connection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* disconnect ) (struct ocfs2_cluster_connection*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct ocfs2_cluster_connection*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ocfs2_cluster_connection*) ;

int FUNC_4(struct ocfs2_cluster_connection *VAR_1,
        int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1 == ((void*)0));

 VAR_3 = VAR_0->sp_ops->disconnect(VAR_1);


 if (!VAR_3) {
  FUNC_1(VAR_1);
  if (!VAR_2)
   FUNC_2();
 }

 return VAR_3;
}
