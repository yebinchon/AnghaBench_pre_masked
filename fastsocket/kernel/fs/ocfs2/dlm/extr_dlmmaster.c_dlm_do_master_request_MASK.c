
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dlm_master_request {scalar_t__ namelen; int name; int node_idx; } ;
struct dlm_master_list_entry {scalar_t__ type; int master; int spinlock; int maybe_map; int response_map; int mname; scalar_t__ mnamelen; struct dlm_ctxt* dlm; } ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int request ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct dlm_master_request*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,struct dlm_master_request*,int,int,int*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dlm_lock_resource *VAR_6,
     struct dlm_master_list_entry *VAR_7, int VAR_8)
{
 struct dlm_ctxt *VAR_9 = VAR_7->dlm;
 struct dlm_master_request VAR_10;
 int VAR_11, VAR_12=0, VAR_13;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.node_idx = VAR_9->node_num;

 FUNC_1(VAR_7->type == VAR_1);

 VAR_10.namelen = (u8)VAR_7->mnamelen;
 FUNC_3(VAR_10.name, VAR_7->mname, VAR_10.namelen);

again:
 VAR_11 = FUNC_8(VAR_0, VAR_9->key, &VAR_10,
     sizeof(VAR_10), VAR_8, &VAR_12);
 if (VAR_11 < 0) {
  if (VAR_11 == -VAR_4) {

   FUNC_5(VAR_5, "TCP stack not ready!\n");
   FUNC_0();
  } else if (VAR_11 == -VAR_2) {
   FUNC_5(VAR_5, "bad args passed to o2net!\n");
   FUNC_0();
  } else if (VAR_11 == -VAR_3) {
   FUNC_5(VAR_5, "out of memory while trying to send "
        "network message!  retrying\n");

   FUNC_7(50);
   goto again;
  } else if (!FUNC_2(VAR_11)) {

   FUNC_6(VAR_11);
   FUNC_5(VAR_5, "unhandled error!");
   FUNC_0();
  }


  FUNC_5(VAR_5, "link to %d went down!\n", VAR_8);
  goto out;
 }

 VAR_11 = 0;
 VAR_13 = 0;
 FUNC_10(&VAR_7->spinlock);
 switch (VAR_12) {
  case 128:
   FUNC_9(VAR_8, VAR_7->response_map);
   FUNC_5(0, "node %u is the master, response=YES\n", VAR_8);
   FUNC_5(0, "%s:%.*s: master node %u now knows I have a "
        "reference\n", VAR_9->name, VAR_6->lockname.len,
        VAR_6->lockname.name, VAR_8);
   VAR_7->master = VAR_8;
   break;
  case 129:
   FUNC_5(0, "node %u not master, response=NO\n", VAR_8);
   FUNC_9(VAR_8, VAR_7->response_map);
   break;
  case 130:
   FUNC_5(0, "node %u not master, response=MAYBE\n", VAR_8);
   FUNC_9(VAR_8, VAR_7->response_map);
   FUNC_9(VAR_8, VAR_7->maybe_map);
   break;
  case 131:
   FUNC_5(0, "node %u hit an error, resending\n", VAR_8);
   VAR_13 = 1;
   VAR_12 = 0;
   break;
  default:
   FUNC_5(VAR_5, "bad response! %u\n", VAR_12);
   FUNC_0();
 }
 FUNC_11(&VAR_7->spinlock);
 if (VAR_13) {

  FUNC_7(50);
  goto again;
 }

out:
 return VAR_11;
}
