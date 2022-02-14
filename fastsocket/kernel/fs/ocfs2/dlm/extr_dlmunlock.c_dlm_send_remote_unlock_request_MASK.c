
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int unlock ;
typedef scalar_t__ u8 ;
struct kvec {int iov_len; struct dlm_unlock_lock* iov_base; } ;
struct dlm_unlock_lock {int namelen; int name; int cookie; int flags; scalar_t__ node_idx; } ;
struct dlm_lockstatus {int dummy; } ;
struct TYPE_5__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_2__ lockname; } ;
struct TYPE_4__ {int cookie; } ;
struct dlm_lock {TYPE_3__* lksb; TYPE_1__ ml; } ;
struct dlm_ctxt {int key; scalar_t__ node_num; int name; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_6__ {struct dlm_unlock_lock* lvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct dlm_unlock_lock*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,struct kvec*,size_t,scalar_t__,int*) ;

__attribute__((used)) static enum dlm_status FUNC_9(struct dlm_ctxt *VAR_5,
       struct dlm_lock_resource *VAR_6,
       struct dlm_lock *VAR_7,
       struct dlm_lockstatus *VAR_8,
       int VAR_9,
       u8 VAR_10)
{
 struct dlm_unlock_lock VAR_11;
 int VAR_12;
 enum dlm_status VAR_13;
 int VAR_14 = 0;
 struct kvec VAR_15[2];
 size_t VAR_16 = 1;

 FUNC_6("%.*s\n", VAR_6->lockname.len, VAR_6->lockname.name);

 if (VAR_10 == VAR_5->node_num) {



  FUNC_5(0, "%s:%.*s: this node became the master due to a "
       "migration, re-evaluate now\n", VAR_5->name,
       VAR_6->lockname.len, VAR_6->lockname.name);
  return VAR_0;
 }

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.node_idx = VAR_5->node_num;
 VAR_11.flags = FUNC_0(VAR_9);
 VAR_11.cookie = VAR_7->ml.cookie;
 VAR_11.namelen = VAR_6->lockname.len;
 FUNC_3(VAR_11.name, VAR_6->lockname.name, VAR_11.namelen);

 VAR_15[0].iov_len = sizeof(struct dlm_unlock_lock);
 VAR_15[0].iov_base = &VAR_11;

 if (VAR_9 & VAR_4) {

  VAR_15[1].iov_len = VAR_1;
  VAR_15[1].iov_base = VAR_7->lksb->lvb;
  VAR_16++;
 }

 VAR_12 = FUNC_8(VAR_3, VAR_5->key,
     VAR_15, VAR_16, VAR_10, &VAR_14);
 if (VAR_12 >= 0) {

  if (VAR_14 == VAR_0)
   FUNC_5(0, "master was in-progress.  retry\n");
  VAR_13 = VAR_14;
 } else {
  FUNC_7(VAR_12);
  if (FUNC_2(VAR_12)) {







   VAR_13 = VAR_2;
  } else {

   VAR_13 = FUNC_1(VAR_12);
  }
 }

 return VAR_13;
}
