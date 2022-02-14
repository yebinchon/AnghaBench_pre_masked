
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvec {int iov_len; struct dlm_convert_lock* iov_base; } ;
struct TYPE_5__ {int name; int len; } ;
struct dlm_lock_resource {int owner; TYPE_2__ lockname; } ;
struct TYPE_4__ {int cookie; } ;
struct dlm_lock {TYPE_3__* lksb; TYPE_1__ ml; } ;
struct dlm_ctxt {int key; int node_num; } ;
struct dlm_convert_lock {int requested_type; int namelen; int name; int flags; int cookie; int node_idx; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_6__ {struct dlm_convert_lock* lvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct dlm_ctxt*,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dlm_convert_lock*,int ,int) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,struct kvec*,size_t,int ,int*) ;

__attribute__((used)) static enum dlm_status FUNC_11(struct dlm_ctxt *VAR_9,
        struct dlm_lock_resource *VAR_10,
        struct dlm_lock *VAR_11, int VAR_12, int VAR_13)
{
 struct dlm_convert_lock VAR_14;
 int VAR_15;
 enum dlm_status VAR_16;
 int VAR_17 = 0;
 struct kvec VAR_18[2];
 size_t VAR_19 = 1;

 FUNC_8("%.*s\n", VAR_10->lockname.len, VAR_10->lockname.name);

 FUNC_6(&VAR_14, 0, sizeof(struct dlm_convert_lock));
 VAR_14.node_idx = VAR_9->node_num;
 VAR_14.requested_type = VAR_13;
 VAR_14.cookie = VAR_11->ml.cookie;
 VAR_14.namelen = VAR_10->lockname.len;
 VAR_14.flags = FUNC_0(VAR_12);
 FUNC_5(VAR_14.name, VAR_10->lockname.name, VAR_14.namelen);

 VAR_18[0].iov_len = sizeof(struct dlm_convert_lock);
 VAR_18[0].iov_base = &VAR_14;

 if (VAR_12 & VAR_8) {

  VAR_18[1].iov_len = VAR_2;
  VAR_18[1].iov_base = VAR_11->lksb->lvb;
  VAR_19++;
 }

 VAR_15 = FUNC_10(VAR_0, VAR_9->key,
     VAR_18, VAR_19, VAR_10->owner, &VAR_17);
 if (VAR_15 >= 0) {

  VAR_16 = VAR_17;
  if (VAR_16 == VAR_7) {
   FUNC_7(0, "node %u returned DLM_RECOVERING from convert "
        "message!\n", VAR_10->owner);
  } else if (VAR_16 == VAR_3) {
   FUNC_7(0, "node %u returned DLM_MIGRATING from convert "
        "message!\n", VAR_10->owner);
  } else if (VAR_16 == VAR_1) {
   FUNC_7(0, "node %u returned DLM_FORWARD from convert "
        "message!\n", VAR_10->owner);
  } else if (VAR_16 != VAR_5 && VAR_16 != VAR_6)
   FUNC_2(VAR_16);
 } else {
  FUNC_9(VAR_15);
  if (FUNC_3(VAR_15)) {



   FUNC_4(VAR_9, VAR_10->owner,
      VAR_4);
   VAR_16 = VAR_7;
   FUNC_7(0, "node %u died so returning DLM_RECOVERING "
        "from convert message!\n", VAR_10->owner);
  } else {
   VAR_16 = FUNC_1(VAR_15);
  }
 }

 return VAR_16;
}
