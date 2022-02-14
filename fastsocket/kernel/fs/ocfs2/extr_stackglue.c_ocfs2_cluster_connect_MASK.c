
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_cluster_connection {int cc_namelen; void (* cc_recovery_handler ) (int,void*) ;int cc_version; void* cc_recovery_data; int cc_name; } ;
struct TYPE_6__ {TYPE_1__* sp_ops; } ;
struct TYPE_5__ {int lp_max_version; } ;
struct TYPE_4__ {int (* connect ) (struct ocfs2_cluster_connection*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (struct ocfs2_cluster_connection*) ;
 struct ocfs2_cluster_connection* FUNC_2 (int,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ocfs2_cluster_connection*) ;

int FUNC_7(const char *VAR_6,
     const char *VAR_7,
     int VAR_8,
     void (*VAR_9)(int VAR_10,
         void *VAR_11),
     void *VAR_12,
     struct ocfs2_cluster_connection **VAR_13)
{
 int VAR_14 = 0;
 struct ocfs2_cluster_connection *VAR_15;

 FUNC_0(VAR_7 == ((void*)0));
 FUNC_0(VAR_13 == ((void*)0));
 FUNC_0(VAR_9 == ((void*)0));

 if (VAR_8 > VAR_3) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_15 = FUNC_2(sizeof(struct ocfs2_cluster_connection),
      VAR_2);
 if (!VAR_15) {
  VAR_14 = -VAR_1;
  goto out;
 }

 FUNC_3(VAR_15->cc_name, VAR_7, VAR_8);
 VAR_15->cc_namelen = VAR_8;
 VAR_15->cc_recovery_handler = VAR_9;
 VAR_15->cc_recovery_data = VAR_12;


 VAR_15->cc_version = VAR_5->lp_max_version;


 VAR_14 = FUNC_4(VAR_6);
 if (VAR_14)
  goto out_free;

 VAR_14 = VAR_4->sp_ops->connect(VAR_15);
 if (VAR_14) {
  FUNC_5();
  goto out_free;
 }

 *VAR_13 = VAR_15;

out_free:
 if (VAR_14)
  FUNC_1(VAR_15);

out:
 return VAR_14;
}
