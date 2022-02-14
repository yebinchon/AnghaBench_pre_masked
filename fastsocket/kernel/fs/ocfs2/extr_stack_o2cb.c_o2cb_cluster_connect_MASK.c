
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pv_minor; int pv_major; } ;
struct ocfs2_cluster_connection {struct o2dlm_private* cc_private; struct dlm_ctxt* cc_lockspace; TYPE_1__ cc_version; int cc_name; int cc_namelen; } ;
struct o2dlm_private {int op_eviction_cb; } ;
struct dlm_protocol_version {int pv_minor; int pv_major; } ;
struct dlm_ctxt {int dummy; } ;
struct TYPE_4__ {int * sp_proto; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dlm_ctxt*) ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct dlm_ctxt* FUNC_4 (int ,int ,struct dlm_protocol_version*) ;
 int FUNC_5 (struct dlm_ctxt*,int *) ;
 int FUNC_6 (int *,int ,struct ocfs2_cluster_connection*) ;
 int FUNC_7 (struct o2dlm_private*) ;
 struct o2dlm_private* FUNC_8 (int,int ) ;
 int FUNC_9 (int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct ocfs2_cluster_connection *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;
 struct dlm_ctxt *VAR_8;
 struct o2dlm_private *VAR_9;
 struct dlm_protocol_version VAR_10;

 FUNC_0(VAR_5 == ((void*)0));
 FUNC_0(VAR_3.sp_proto == ((void*)0));



 if (!FUNC_10()) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_8(sizeof(struct o2dlm_private), VAR_2);
 if (!VAR_9) {
  VAR_6 = -VAR_1;
  goto out_free;
 }


 FUNC_6(&VAR_9->op_eviction_cb, VAR_4,
         VAR_5);

 VAR_5->cc_private = VAR_9;



 VAR_7 = FUNC_3(0, VAR_5->cc_name, VAR_5->cc_namelen);
 VAR_10.pv_major = VAR_5->cc_version.pv_major;
 VAR_10.pv_minor = VAR_5->cc_version.pv_minor;

 VAR_8 = FUNC_4(VAR_5->cc_name, VAR_7, &VAR_10);
 if (FUNC_1(VAR_8)) {
  VAR_6 = FUNC_2(VAR_8);
  FUNC_9(VAR_6);
  goto out_free;
 }

 VAR_5->cc_version.pv_major = VAR_10.pv_major;
 VAR_5->cc_version.pv_minor = VAR_10.pv_minor;
 VAR_5->cc_lockspace = VAR_8;

 FUNC_5(VAR_8, &VAR_9->op_eviction_cb);

out_free:
 if (VAR_6 && VAR_5->cc_private)
  FUNC_7(VAR_5->cc_private);

out:
 return VAR_6;
}
