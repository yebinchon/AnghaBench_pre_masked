
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dlm_node_iter {int node_map; } ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int wq; int spinlock; int state; TYPE_1__ lockname; } ;
struct dlm_ctxt {int node_num; int spinlock; int domain_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ,struct dlm_node_iter*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_4 (int ,struct dlm_lock_resource*) ;
 int FUNC_5 (int ,struct dlm_node_iter*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock_resource*,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct dlm_ctxt *VAR_2, struct dlm_lock_resource *VAR_3,
    u8 VAR_4)
{
 struct dlm_node_iter VAR_5;
 int VAR_6 = 0;

 FUNC_11(&VAR_2->spinlock);
 FUNC_5(VAR_2->domain_map, &VAR_5);
 FUNC_0(VAR_4, VAR_5.node_map);
 FUNC_0(VAR_2->node_num, VAR_5.node_map);
 FUNC_12(&VAR_2->spinlock);




 FUNC_11(&VAR_3->spinlock);
 FUNC_4(VAR_4, VAR_3);
 FUNC_12(&VAR_3->spinlock);

 FUNC_8(0, "now time to do a migrate request to other nodes\n");
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4,
         VAR_2->node_num, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_9(VAR_6);
  goto leave;
 }

 FUNC_8(0, "doing assert master of %.*s to all except the original node\n",
      VAR_3->lockname.len, VAR_3->lockname.name);


 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5.node_map,
       VAR_0);
 if (VAR_6 < 0) {

  FUNC_9(VAR_6);
  VAR_6 = 0;
 }

 FUNC_7(VAR_5.node_map, 0, sizeof(VAR_5.node_map));
 FUNC_10(VAR_4, VAR_5.node_map);
 FUNC_8(0, "doing assert master of %.*s back to %u\n",
      VAR_3->lockname.len, VAR_3->lockname.name, VAR_4);
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5.node_map,
       VAR_0);
 if (VAR_6 < 0) {
  FUNC_8(0, "assert master to original master failed "
       "with %d.\n", VAR_6);


  VAR_6 = 0;
 }


 FUNC_11(&VAR_3->spinlock);
 FUNC_6(VAR_2, VAR_3, VAR_2->node_num);
 VAR_3->state &= ~VAR_1;
 FUNC_12(&VAR_3->spinlock);

 FUNC_3(VAR_2, VAR_3);
 FUNC_13(&VAR_3->wq);
leave:
 return VAR_6;
}
