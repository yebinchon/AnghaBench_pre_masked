
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_node_iter {int dummy; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {int node_num; int name; int spinlock; int recovery_map; int domain_map; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct dlm_node_iter*) ;
 int FUNC_4 (struct dlm_node_iter*) ;
 int FUNC_5 (int ,char*,int ,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dlm_ctxt *VAR_3,
           struct dlm_lock_resource *VAR_4)
{
 struct dlm_node_iter VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 u8 VAR_8 = VAR_0;

 FUNC_7(&VAR_3->spinlock);
 FUNC_3(VAR_3->domain_map, &VAR_5);
 FUNC_8(&VAR_3->spinlock);

 while ((VAR_6 = FUNC_4(&VAR_5)) >= 0) {

  if (VAR_6 == VAR_3->node_num)
   continue;
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6, &VAR_8);
  if (VAR_7 < 0) {
   FUNC_6(VAR_7);
   if (!FUNC_2(VAR_7))
    FUNC_0();


   VAR_7 = 0;
  }

  if (VAR_8 != VAR_0) {

   FUNC_7(&VAR_3->spinlock);
   if (FUNC_9(VAR_8, VAR_3->recovery_map)) {
    FUNC_5(VAR_2, "%s: node %u has not seen "
         "node %u go down yet, and thinks the "
         "dead node is mastering the recovery "
         "lock.  must wait.\n", VAR_3->name,
         VAR_6, VAR_8);
    VAR_7 = -VAR_1;
   }
   FUNC_8(&VAR_3->spinlock);
   FUNC_5(0, "%s: reco lock master is %u\n", VAR_3->name,
        VAR_8);
   break;
  }
 }
 return VAR_7;
}
