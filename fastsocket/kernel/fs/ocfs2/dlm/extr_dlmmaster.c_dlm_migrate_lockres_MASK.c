
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dlm_migratable_lockres {int dummy; } ;
struct dlm_master_list_entry {int woken; int wq; } ;
struct TYPE_2__ {unsigned int len; int name; } ;
struct dlm_lock_resource {scalar_t__ owner; int wq; int spinlock; int state; TYPE_1__ lockname; } ;
struct dlm_ctxt {int name; int spinlock; int master_lock; int dlm_worker; int node_num; int domain_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_master_list_entry*,struct dlm_master_list_entry**,char const*,unsigned int,scalar_t__,int ) ;
 int FUNC_3 (struct dlm_master_list_entry*) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*,int*) ;
 scalar_t__ FUNC_6 (struct dlm_ctxt*,scalar_t__) ;
 int FUNC_7 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_8 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 scalar_t__ FUNC_9 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 scalar_t__ FUNC_11 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_12 (struct dlm_ctxt*) ;
 int FUNC_13 (struct dlm_master_list_entry*) ;
 int FUNC_14 (struct dlm_master_list_entry*) ;
 int FUNC_15 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_16 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_migratable_lockres*,scalar_t__,int ) ;
 int FUNC_17 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (unsigned long) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,struct dlm_master_list_entry*) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (scalar_t__,int ) ;
 int FUNC_28 (int ,int,int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct dlm_ctxt *VAR_9,
          struct dlm_lock_resource *VAR_10,
          u8 VAR_11)
{
 struct dlm_master_list_entry *VAR_12 = ((void*)0);
 struct dlm_master_list_entry *VAR_13 = ((void*)0);
  struct dlm_migratable_lockres *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 const char *VAR_16;
 unsigned int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 0;

 if (!FUNC_4(VAR_9))
  return -VAR_3;

 VAR_16 = VAR_10->lockname.name;
 VAR_17 = VAR_10->lockname.len;

 FUNC_22(0, "migrating %.*s to %u\n", VAR_17, VAR_16, VAR_11);




 FUNC_25(&VAR_10->spinlock);
 VAR_15 = FUNC_5(VAR_9, VAR_10, &VAR_19);
 if (VAR_15 < 0) {
  FUNC_26(&VAR_10->spinlock);
  goto leave;
 }
 FUNC_26(&VAR_10->spinlock);


 if (VAR_19 == 0) {
  FUNC_22(0, "no locks were found on this lockres! done!\n");
  goto leave;
 }






 VAR_15 = -VAR_4;
 VAR_14 = (struct dlm_migratable_lockres *) FUNC_0(VAR_5);
 if (!VAR_14) {
  FUNC_23(VAR_15);
  goto leave;
 }

 VAR_12 = (struct dlm_master_list_entry *) FUNC_20(VAR_8,
        VAR_5);
 if (!VAR_12) {
  FUNC_23(VAR_15);
  goto leave;
 }
 VAR_15 = 0;





 FUNC_22(0, "picking a migration node\n");
 FUNC_25(&VAR_9->spinlock);

 if (!FUNC_27(VAR_11, VAR_9->domain_map) ||
     VAR_11 >= VAR_7) {
  VAR_11 = FUNC_11(VAR_9, VAR_10);
 }
 FUNC_22(0, "node %u chosen for migration\n", VAR_11);

 if (VAR_11 >= VAR_7 ||
     !FUNC_27(VAR_11, VAR_9->domain_map)) {

  VAR_15 = -VAR_3;
 }

 if (VAR_15) {
  FUNC_26(&VAR_9->spinlock);
  goto fail;
 }

 FUNC_22(0, "continuing with target = %u\n", VAR_11);





 FUNC_25(&VAR_9->master_lock);
 VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_12, &VAR_13, VAR_16,
        VAR_17, VAR_11, VAR_9->node_num);
 FUNC_26(&VAR_9->master_lock);
 FUNC_26(&VAR_9->spinlock);

 if (VAR_15 == -VAR_2) {
  FUNC_22(0, "another process is already migrating it\n");
  goto fail;
 }
 VAR_18 = 1;





 if (FUNC_9(VAR_9, VAR_10, VAR_11) < 0) {
  FUNC_22(VAR_6, "tried to migrate %.*s to %u, but "
       "the target went down.\n", VAR_10->lockname.len,
       VAR_10->lockname.name, VAR_11);
  FUNC_25(&VAR_10->spinlock);
  VAR_10->state &= ~VAR_0;
  VAR_20 = 1;
  FUNC_26(&VAR_10->spinlock);
  VAR_15 = -VAR_3;
 }

fail:
 if (VAR_13) {

  FUNC_10(VAR_9, VAR_13);
  FUNC_13(VAR_13);
 }

 if (VAR_15 < 0) {
  if (VAR_18) {
   FUNC_10(VAR_9, VAR_12);
   FUNC_13(VAR_12);
  } else if (VAR_12) {
   FUNC_21(VAR_8, VAR_12);
  }
  goto leave;
 }
 FUNC_18(VAR_9->dlm_worker);






 FUNC_25(&VAR_9->spinlock);
 FUNC_25(&VAR_9->master_lock);
 FUNC_3(VAR_12);
 FUNC_26(&VAR_9->master_lock);
 FUNC_26(&VAR_9->spinlock);





 VAR_15 = FUNC_16(VAR_9, VAR_10, VAR_14, VAR_11,
       VAR_1);

 if (VAR_15 < 0) {
  FUNC_22(0, "migration to node %u failed with %d\n",
       VAR_11, VAR_15);

  FUNC_10(VAR_9, VAR_12);
  FUNC_13(VAR_12);
  FUNC_14(VAR_12);
  FUNC_25(&VAR_10->spinlock);
  VAR_10->state &= ~VAR_0;
  VAR_20 = 1;
  FUNC_26(&VAR_10->spinlock);
  goto leave;
 }
 while (1) {
  VAR_15 = FUNC_28(VAR_12->wq,
     (FUNC_1(&VAR_12->woken) == 1),
     FUNC_24(5000));

  if (VAR_15 >= 0) {
          if (FUNC_1(&VAR_12->woken) == 1 ||
       VAR_10->owner == VAR_11)
    break;

   FUNC_22(0, "%s:%.*s: timed out during migration\n",
        VAR_9->name, VAR_10->lockname.len, VAR_10->lockname.name);


   if (FUNC_6(VAR_9, VAR_11)) {
    FUNC_22(0, "%s:%.*s: expected migration "
         "target %u is no longer up, restarting\n",
         VAR_9->name, VAR_10->lockname.len,
         VAR_10->lockname.name, VAR_11);
    VAR_15 = -VAR_3;

    FUNC_10(VAR_9, VAR_12);
    FUNC_13(VAR_12);
    FUNC_14(VAR_12);
    FUNC_25(&VAR_10->spinlock);
    VAR_10->state &= ~VAR_0;
    VAR_20 = 1;
    FUNC_26(&VAR_10->spinlock);
    goto leave;
   }
  } else
   FUNC_22(0, "%s:%.*s: caught signal during migration\n",
        VAR_9->name, VAR_10->lockname.len, VAR_10->lockname.name);
 }


 FUNC_25(&VAR_10->spinlock);
 FUNC_17(VAR_9, VAR_10, VAR_11);
 VAR_10->state &= ~VAR_0;
 FUNC_15(VAR_9, VAR_10);
 FUNC_26(&VAR_10->spinlock);
 FUNC_29(&VAR_10->wq);


 FUNC_10(VAR_9, VAR_12);
 FUNC_14(VAR_12);
 VAR_15 = 0;

 FUNC_8(VAR_9, VAR_10);

leave:

 if (VAR_15 < 0)
  FUNC_7(VAR_9, VAR_10);



 if (VAR_20)
  FUNC_29(&VAR_10->wq);


 if (VAR_14)
  FUNC_19((unsigned long)VAR_14);

 FUNC_12(VAR_9);

 FUNC_22(0, "returning %d\n", VAR_15);
 return VAR_15;
}
