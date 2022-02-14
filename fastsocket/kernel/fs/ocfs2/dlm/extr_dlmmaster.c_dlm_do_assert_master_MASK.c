
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dlm_node_iter {int dummy; } ;
struct dlm_master_list_entry {int dummy; } ;
struct TYPE_2__ {char* name; unsigned int len; } ;
struct dlm_lock_resource {int wq; int spinlock; int state; TYPE_1__ lockname; } ;
struct dlm_ctxt {int spinlock; int master_lock; int key; int node_num; } ;
struct dlm_assert_master {unsigned int namelen; int flags; int name; int node_idx; } ;
typedef int assert ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (struct dlm_master_list_entry*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct dlm_ctxt*,struct dlm_master_list_entry**,char*,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct dlm_lock_resource*) ;
 int FUNC_7 (void*,struct dlm_node_iter*) ;
 int FUNC_8 (struct dlm_node_iter*) ;
 int FUNC_9 (struct dlm_master_list_entry*) ;
 int FUNC_10 (int ,char const*,unsigned int) ;
 int FUNC_11 (struct dlm_assert_master*,int ,int) ;
 int FUNC_12 (int ,char*,unsigned int,...) ;
 int FUNC_13 (int ,int ,struct dlm_assert_master*,int,int,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct dlm_ctxt *VAR_6,
    struct dlm_lock_resource *VAR_7,
    void *VAR_8, u32 VAR_9)
{
 struct dlm_assert_master VAR_10;
 int VAR_11, VAR_12;
 struct dlm_node_iter VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 const char *VAR_16 = VAR_7->lockname.name;
 unsigned int VAR_17 = VAR_7->lockname.len;

 FUNC_1(VAR_17 > VAR_5);

 FUNC_14(&VAR_7->spinlock);
 VAR_7->state |= VAR_3;
 FUNC_15(&VAR_7->spinlock);

again:
 VAR_15 = 0;


 FUNC_7(VAR_8, &VAR_13);
 while ((VAR_11 = FUNC_8(&VAR_13)) >= 0) {
  int VAR_18 = 0;
  struct dlm_master_list_entry *VAR_19 = ((void*)0);

  FUNC_12(0, "sending assert master to %d (%.*s)\n", VAR_11,
       VAR_17, VAR_16);
  FUNC_11(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.node_idx = VAR_6->node_num;
  VAR_10.namelen = VAR_17;
  FUNC_10(VAR_10.name, VAR_16, VAR_17);
  VAR_10.flags = FUNC_3(VAR_9);

  VAR_12 = FUNC_13(VAR_0, VAR_6->key,
         &VAR_10, sizeof(VAR_10), VAR_11, &VAR_18);
  if (VAR_12 < 0) {
   FUNC_12(0, "assert_master returned %d!\n", VAR_12);
   if (!FUNC_5(VAR_12)) {
    FUNC_12(VAR_4, "unhandled error=%d!\n", VAR_12);
    FUNC_0();
   }

   FUNC_12(0, "link to %d went down!\n", VAR_11);

   VAR_14 = VAR_12;
   VAR_18 = 0;
  } else if (VAR_18 < 0) {

   FUNC_12(VAR_4,"during assert master of %.*s to %u, "
        "got %d.\n", VAR_17, VAR_16, VAR_11, VAR_18);
   FUNC_14(&VAR_6->spinlock);
   FUNC_14(&VAR_6->master_lock);
   if (FUNC_4(VAR_6, &VAR_19, (char *)VAR_16,
      VAR_17)) {
    FUNC_9(VAR_19);
    FUNC_2(VAR_19);
   }
   FUNC_15(&VAR_6->master_lock);
   FUNC_15(&VAR_6->spinlock);
   FUNC_0();
  }

  if (VAR_18 & VAR_2 &&
      !(VAR_18 & VAR_1)) {
    FUNC_12(VAR_4, "%.*s: very strange, "
         "master MLE but no lockres on %u\n",
         VAR_17, VAR_16, VAR_11);
  }

  if (VAR_18 & VAR_2) {
   FUNC_12(0, "%.*s: node %u create mles on other "
        "nodes and requests a re-assert\n",
        VAR_17, VAR_16, VAR_11);
   VAR_15 = 1;
  }
  if (VAR_18 & VAR_1) {
   FUNC_12(0, "%.*s: node %u has a reference to this "
        "lockres, set the bit in the refmap\n",
        VAR_17, VAR_16, VAR_11);
   FUNC_14(&VAR_7->spinlock);
   FUNC_6(VAR_11, VAR_7);
   FUNC_15(&VAR_7->spinlock);
  }
 }

 if (VAR_15)
  goto again;

 FUNC_14(&VAR_7->spinlock);
 VAR_7->state &= ~VAR_3;
 FUNC_15(&VAR_7->spinlock);
 FUNC_16(&VAR_7->wq);

 return VAR_14;
}
