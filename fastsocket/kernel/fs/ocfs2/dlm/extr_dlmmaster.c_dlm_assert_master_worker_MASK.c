
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int ignore_higher; int request_from; int flags; struct dlm_lock_resource* lockres; } ;
struct TYPE_5__ {TYPE_1__ am; } ;
struct dlm_work_item {TYPE_2__ u; struct dlm_ctxt* dlm; } ;
struct TYPE_6__ {int name; int len; } ;
struct dlm_lock_resource {int state; TYPE_3__ lockname; int spinlock; } ;
struct dlm_ctxt {int node_num; int spinlock; int domain_map; } ;
typedef int nodemap ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*,unsigned long*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_7 (unsigned long*,int,int) ;
 int FUNC_8 (unsigned long*,int ,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct dlm_work_item *VAR_2, void *VAR_3)
{
 struct dlm_ctxt *VAR_4 = VAR_3;
 int VAR_5 = 0;
 struct dlm_lock_resource *VAR_6;
 unsigned long VAR_7[FUNC_0(VAR_1)];
 int VAR_8;
 int VAR_9;
 u8 VAR_10;
 u32 VAR_11;

 VAR_4 = VAR_2->dlm;
 VAR_6 = VAR_2->u.am.lockres;
 VAR_8 = VAR_2->u.am.ignore_higher;
 VAR_10 = VAR_2->u.am.request_from;
 VAR_11 = VAR_2->u.am.flags;

 FUNC_11(&VAR_4->spinlock);
 FUNC_8(VAR_7, VAR_4->domain_map, sizeof(VAR_7));
 FUNC_12(&VAR_4->spinlock);

 FUNC_2(VAR_4->node_num, VAR_7);
 if (VAR_8) {



  FUNC_2(VAR_10, VAR_7);
  VAR_9 = VAR_4->node_num;
  while (1) {
   VAR_9 = FUNC_7(VAR_7, VAR_1,
         VAR_9+1);
          if (VAR_9 >= VAR_1)
    break;
   FUNC_2(VAR_9, VAR_7);
  }
 }







 FUNC_11(&VAR_6->spinlock);
 if (VAR_6->state & VAR_0) {
  FUNC_9(0, "Someone asked us to assert mastery, but we're "
       "in the middle of migration.  Skipping assert, "
       "the new master will handle that.\n");
  FUNC_12(&VAR_6->spinlock);
  goto put;
 } else
  FUNC_1(VAR_6);
 FUNC_12(&VAR_6->spinlock);



 FUNC_9(0, "worker about to master %.*s here, this=%u\n",
       VAR_6->lockname.len, VAR_6->lockname.name, VAR_4->node_num);
 VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_7, VAR_11);
 if (VAR_5 < 0) {

  if (!FUNC_4(VAR_5))
   FUNC_10(VAR_5);
 }


 FUNC_6(VAR_4, VAR_6);

put:
 FUNC_5(VAR_6);

 FUNC_9(0, "finished with dlm_assert_master_worker\n");
}
