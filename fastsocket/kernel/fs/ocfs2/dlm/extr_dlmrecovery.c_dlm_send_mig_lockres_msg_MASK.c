
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct dlm_migratable_lockres {int flags; int master; int num_locks; int total_locks; int mig_cookie; } ;
struct dlm_migratable_lock {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int key; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dlm_migratable_lockres*,int ,int ,int,int ,int,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,struct dlm_migratable_lockres*,int,int,int*) ;

__attribute__((used)) static int FUNC_8(struct dlm_ctxt *VAR_6,
          struct dlm_migratable_lockres *VAR_7,
          u8 VAR_8,
          struct dlm_lock_resource *VAR_9,
          int VAR_10)
{
 u64 VAR_11 = FUNC_3(VAR_7->mig_cookie);
 int VAR_12 = FUNC_2(VAR_7->total_locks);
 int VAR_13, VAR_14 = 0, VAR_15 = 0;
 u8 VAR_16 = VAR_7->flags,
    VAR_17 = VAR_7->master;

 FUNC_1(VAR_7->num_locks > VAR_0);
 if (!VAR_7->num_locks)
  return 0;

 VAR_13 = sizeof(struct dlm_migratable_lockres) +
  (VAR_7->num_locks * sizeof(struct dlm_migratable_lock));


 VAR_16 = VAR_7->flags;
 FUNC_1(VAR_10 > VAR_12);
 if (VAR_10 == VAR_12)
  VAR_7->flags |= VAR_2;

 FUNC_5(0, "%s:%.*s: sending mig lockres (%s) to %u\n",
      VAR_6->name, VAR_9->lockname.len, VAR_9->lockname.name,
      VAR_16 & VAR_3 ? "migration" : "recovery",
      VAR_8);


 VAR_14 = FUNC_7(VAR_1, VAR_6->key, VAR_7,
     VAR_13, VAR_8, &VAR_15);
 if (VAR_14 < 0) {


  FUNC_6(VAR_14);
 } else {

  VAR_14 = VAR_15;
  if (VAR_14 < 0) {
   FUNC_6(VAR_14);

   if (VAR_14 == -VAR_4) {
    FUNC_5(VAR_5, "node %u told me to kill "
         "myself!\n", VAR_8);
    FUNC_0();
   }
  }
 }


 FUNC_4(VAR_7, VAR_9->lockname.name,
        VAR_9->lockname.len, VAR_12,
        VAR_11, VAR_16, VAR_17);
 return VAR_14;
}
